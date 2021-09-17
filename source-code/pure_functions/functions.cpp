#include <cmath>

#include "functions.h"

double sqrt_unpure(double x) {
    return sqrt(x);
}

[[gnu::pure]] double sqrt_pure(double x) {
    return sqrt(x);
}
