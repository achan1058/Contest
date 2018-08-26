#pragma once
#include <bits/stdc++.h>
using namespace std;

// test me
double cosLawSide(double A, double b, double c) { return sqrt(b * b + c * c - 2 * b * c * cos(A)); }
// test me
double cosLawAngle(double a, double b, double c) { return acos((b * b + c * c - a * a) / (2 * b * c)); }
// test me
double sinLawSide(double A, double b, double B) { return sin(A) / sin(B) * b; }
// test me
double sinLawAngle(double a, double b, double B) { return asin(a * sin(B) / b); }
// test me
void sss_abc(double a, double b, double c, double& A, double& B, double& C) {
	A = cosLawAngle(a, b, c);
	B = cosLawAngle(b, c, a);
	C = cosLawAngle(c, a, b);
}
// test me
void sas_Abc(double& a, double b, double c, double A, double& B, double& C) {
	a = cosLawSide(A, b, c);
	B = cosLawAngle(b, c, a);
	C = cosLawSide(c, a, b);
}
// test me
void asa_aBC(double a, double& b, double& c, double& A, double B, double C) {
	A = M_PI - B - C;
	b = sinLawSide(B, a, A);
	c = sinLawSide(C, a, A);
}
// test me, this is inverted from the original, so that larger means larger area
void ass_Aab(double a, double b, double& c, double A, double& B, double& C, bool larger) {
	B = sinLawSide(b, a, A);
	if (!larger)
		B = M_PI - B;
	C = M_PI - A - B;
	c = sinLawSide(C, a, A);
}

double sss_area(double a, double b, double c) { return sqrt((a + b + c) * (a + b - c) * (a - b + c) * (-a + b + c)) / 4; }
// test me
double sas_area(double A, double b, double c) { return b * c * sin(A) / 2; }
double asa_area(double a, double B, double C) { return a * a * sin(B) * sin(C) / sin(B + C) / 2; }
// test me
double ass_area(double A, double a, double b, bool larger) {
	return b * sin(A) * (b * cos(A) + (larger ? 1 : -1) * sqrt(a * a - b * b * sin(A) * sin(A)));
}
