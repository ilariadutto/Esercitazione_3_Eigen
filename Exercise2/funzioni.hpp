#pragma once

#include <iostream>
#include "Eigen/Eigen"

using namespace std;
using namespace Eigen;

int solvePALU(const Matrix2d& A,
			  const Vector2d& b,
			  const Vector2d& sol,
			  double& err_rel_PALU);
			  
int solveQR(const Matrix2d& A,
			const Vector2d& b,
			const Vector2d& sol,
			double& err_rel_QR);
			  
