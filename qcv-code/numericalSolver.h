/*
 * Copyright (C) 2012 Hernan Badino <hernan.badino@gmail.com>
 *
 * This file is part of QCV
 *
 * QCV is under the terms of the GNU Lesser General Public License
 * version 2.1. See the GNU LGPL version 2.1 for details.
 * QCV is distributed "AS IS" without ANY WARRANTY, without even the
 * implied warranty of merchantability or fitness for a particular
 * purpose. 
 *
 * In no event shall the authors or contributors be liable
 * for any direct, indirect, incidental, special, exemplary, or
 * consequential damages arising in any way out of the use of this
 * software.
 *
 * By downloading, copying, installing or using the software you agree
 * to this license. Do not download, install, copy or use the
 * software, if you do not agree to this license.
 */

#ifndef NUMERICALSOLVER_H
#define NUMERICALSOLVER_H

namespace QCV
{
   
namespace NumericalSolver
{
   
   template <typename TCostFunction>
   double 
   computeGradientAndHesseMatrix( double * const       f_state_p,
                                  double * const       f_gradient_p,
                                  double * const       f_hesseMatrix_p,
                                  const double * const f_steps_p,
                                  const int            f_n_i,
                                  const int            f_m_i,
                                  TCostFunction       &f_costFunction );
   
   template <typename TCostFunction>
   double 
   solveByNewton ( double * const       f_state_p,
                   double * const       f_gradient_p,
                   double * const       f_hesseMatrix_p,
                   double * const       f_steps_p,
                   const int            f_n_i,
                   const int            f_m_i,
                   const int            f_maxIters_i,
                   const double         f_resTolerance_d,
                   TCostFunction       &f_costFunction );


}

#include "numericalSolver_inline.h"

}

#endif //NUMERICALSOLVER_H