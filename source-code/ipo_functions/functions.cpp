#include "functions.h"

double sqr_unpure(double x) {
    return x*x;
}

[[gnu::pure]] double sqr_pure(double x) {
    return x*x;
}
