#include "mathfunctions.h"
#include <cmath>

MathFunctions::MathFunctions() {}

double MathFunctions::add(double a, double b) {
    return a + b;
}

double MathFunctions::subtract(double a, double b) {
    return a - b;
}

double MathFunctions::multiply(double a, double b) {
    return a * b;
}

double MathFunctions::divide(double a, double b) {
    return a / b;
}

double MathFunctions::power(double base, double exp) {
    return std::pow(base, exp);
}