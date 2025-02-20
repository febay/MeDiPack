/*
 * MeDiPack, a Message Differentiation Package
 *
 * Copyright (C) 2017-2019 Chair for Scientific Computing (SciComp), TU Kaiserslautern
 * Homepage: http://www.scicomp.uni-kl.de
 * Contact:  Prof. Nicolas R. Gauger (codi@scicomp.uni-kl.de)
 *
 * Lead developers: Max Sagebaum (SciComp, TU Kaiserslautern)
 *
 * This file is part of MeDiPack (http://www.scicomp.uni-kl.de/software/codi).
 *
 * MeDiPack is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * MeDiPack is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 * You should have received a copy of the GNU
 * General Public License along with MeDiPack.
 * If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors: Max Sagebaum, Tim Albring (SciComp, TU Kaiserslautern)
 */

#include <toolDefines.h>

#include <adolc/interfaces.h>
#include <adolc/taping.h>
#include <adolc/drivers/drivers.h>

#include <iostream>
#include <vector>

int main(int nargs, char** args) {

  medi::AMPI_Init(&nargs, &args);

  int world_rank;
  medi::AMPI_Comm_rank(AMPI_COMM_WORLD, &world_rank);
  int world_size;
  medi::AMPI_Comm_size(AMPI_COMM_WORLD, &world_size);

  TOOL::init();

  int evalPoints = getEvalPointsCount();
  int inputs = getInputCount();
  int outputs = getOutputCount();
  NUMBER* x = new NUMBER[inputs];
  NUMBER* y = new NUMBER[outputs];

  double* xPrimal = new double[inputs];
  double* xGrad = new double[inputs];
  double* yPrimal = new double[outputs];
  double* yGrad = new double[outputs];

  for(int curPoint = 0; curPoint < evalPoints; ++curPoint) {

    trace_on(1, 1);
    std::cout << "Point " << curPoint << " : {";

    for(int i = 0; i < inputs; ++i) {
      if(i != 0) {
        std::cout << ", ";
      }
      double val = getEvalPoint(curPoint, world_rank, i);
      std::cout << val;

      x[i] <<= val;
      xPrimal[i] = val;
    }
    std::cout << "}\n";

    for(int i = 0; i < outputs; ++i) {
      y[i] = 0.0;
    }

    func(x, y);

    for(int i = 0; i < outputs; ++i) {
      double temp;
      y[i] >>= temp;
    }

    trace_off();

    std::cout << "Seed " << curPoint << " : {";
    for(int i = 0; i < inputs; ++i) {
      if(i != 0) {
        std::cout << ", ";
      }
      double val = getEvalSeed(curPoint, world_rank, i);
      std::cout << val;

      xGrad[i] = val;
    }
    std::cout << "}\n";

    fos_forward((short)1, (int)outputs, (int)inputs, 0, xPrimal, xGrad, yPrimal, yGrad);

    for(int curIn = 0; curIn < inputs; ++curIn) {
      std::cout << curIn << " " << yGrad[curIn] << std::endl;
    }


  }

  delete [] xPrimal;
  delete [] xGrad;
  delete [] yPrimal;
  delete [] yGrad;
  delete [] y;
  delete [] x;

  TOOL::finalize();
  medi::AMPI_Finalize();
}

#include <medi/medi.cpp>
