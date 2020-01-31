#include <chrono>
#include <iostream>

using my_time_t = std::chrono::nanoseconds;

#include "functions.h"

double sqr_in_file(double x) {
    return x*x;
}

int main(int argc, char* argv[]) {
    double delta {0.01};
    long nr_iters {100};
    if (argc > 1)
        nr_iters = atol(argv[1]);

    auto start_time = std::chrono::steady_clock::now();
    double sum {0.0};
    for (double x = 0.0; x < delta*nr_iters; x += delta)
        sum += sqr_in_file(x);
    auto end_time = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<my_time_t>(end_time - start_time);
    std::cout << "sqr_in_file: " << duration.count()*1.0e-9 << " s"
              << " (result = " << sum << ")" << std::endl;

    start_time = std::chrono::steady_clock::now();
    sum = 0.0;
    for (double x = 0.0; x < delta*nr_iters; x += delta)
        sum += sqr_unpure(x);
    end_time = std::chrono::steady_clock::now();
    duration = std::chrono::duration_cast<my_time_t>(end_time - start_time);
    std::cout << "sqr_unpure: " << duration.count()*1.0e-9 << " s"
              << " (result = " << sum << ")" << std::endl;

    start_time = std::chrono::steady_clock::now();
    sum = 0.0;
    for (double x = 0.0; x < delta*nr_iters; x += delta)
        sum += sqr_pure(x);
    end_time = std::chrono::steady_clock::now();
    duration = std::chrono::duration_cast<my_time_t>(end_time - start_time);
    std::cout << "sqr_pure: " << duration.count()*1.0e-9 << " s"
              << " (result = " << sum << ")" << std::endl;

    return 0;
}
