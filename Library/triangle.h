#pragma once
#include "header.h"
#define TRIANGLE

double cosLawSide(double A, double b, double c) { return sqrt(b * b + c * c - 2 * b * c * cos(A)); }
//test me
double cosLawAngle(double a, double b, double c) { return acos((b * b + c * c - a * a) / (2 * b * c)); }
double sinLawSide(double A, double b, double B) { return sin(A) / sin(B) * b; }
//test me
double sinLawAngle(double a, double b, double B) { return asin(a * sin(B) / b); }
//test me
void sss_abc(double a, double b, double c, double& A, double& B, double& C) {
	A = cosLawAngle(a, b, c);
	B = cosLawAngle(b, c, a);
	C = cosLawAngle(c, a, b);
}
//test me
void sas_Abc(double& a, double b, double c, double A, double& B, double& C) {
	a = cosLawSide(A, b, c);
	B = cosLawAngle(b, c, a);
	C = cosLawSide(c, a, b);
}
//test me
void asa_aBC(double a, double& b, double& c, double& A, double B, double C) {
	A = M_PI - B - C;
	b = sinLawSide(B, a, A);
	c = sinLawSide(C, a, A);
}
//test me, this is inverted from the original, so that larger means larger area
void ass_Aab(double a, double b, double& c, double A, double& B, double& C, bool larger) {
	B = sinLawSide(b, a, A);
	if (!larger)
		B = M_PI - B;
	C = M_PI - A - B;
	c = sinLawSide(C, a, A);
}
double sss_area(double a, double b, double c) { return sqrt((a + b + c) * (a + b - c) * (a - b + c) * (-a + b + c)) / 4; }
double sas_area(double A, double b, double c) { return b * c * sin(A) / 2; }
//test me
double asa_area(double a, double B, double C) { return a * a * sin(B) * sin(C) / sin(B + C) / 2; }
//test me
double ass_area(double A, double a, double b, bool larger) {
	return b * sin(A) * (b * cos(A) + (larger ? 1 : -1) * sqrt(a * a - b * b * sin(A) * sin(A)));
}
//use above functions instead, this is to be deleted
void solve_triangle(double& a, double& b, double& c, double& A, double& B, double& C, bool larger = false) {
	if (a > 0 && b > 0 && c > 0) {
		A = cosLawAngle(a, b, c);
		B = cosLawAngle(b, c, a);
		C = cosLawAngle(c, a, b);
		return;
	}

	bool three_angle = false;
	if (A > 0 && B > 0) {
		C = M_PI - A - B;
		three_angle = true;
	} else if (A > 0 && C > 0) {
		B = M_PI - A - C;
		three_angle = true;
	} else if (B > 0 && C > 0) {
		A = M_PI - B - C;
		three_angle = true;
	}

	if (three_angle) {
		if (a > 0) {
			b = sinLawSide(B, a, A);
			c = sinLawSide(C, a, A);
		} else if (b > 0) {
			a = sinLawSide(A, b, B);
			c = sinLawSide(C, b, B);
		} else if (c > 0) {
			a = sinLawSide(A, c, C);
			b = sinLawSide(B, c, C);
		}
		return;
	}

	if (A > 0) {
		if (b <= 0)
			ass_Aab(a, c, b, A, C, B, larger);
		if (c <= 0)
			ass_Aab(a, b, c, A, B, C, larger);
		else
			sas_Abc(a, b, c, A, B, C);
	} else if (B > 0) {
		if (a <= 0)
			ass_Aab(b, c, a, B, C, A, larger);
		else if (c <= 0)
			ass_Aab(b, a, c, B, A, C, larger);
		else
			sas_Abc(b, c, a, B, C, A);
	} else {
		if (a <= 0)
			ass_Aab(c, b, a, C, B, A, larger);
		else if (b <= 0)
			ass_Aab(c, a, b, C, A, B, larger);
		else
			sas_Abc(c, a, b, C, A, B);
	}
}