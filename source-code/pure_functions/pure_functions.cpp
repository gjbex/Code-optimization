#include <chrono>
#include <iostream>

using my_time_t = std::chrono::nanoseconds;

#include "functions.h"

double mult_pure(double x) {
    auto y1 = sqrt_pure(x);
    auto y2 = sqrt_pure(x);
    return y1*y2;
}

double mult_unpure(double x) {
    auto y1 = sqrt_unpure(x);
    auto y2 = sqrt_unpure(x);
    return y1*y2;
}

int main(int argc, char* argv[]) {
    double delta {0.01};
    long nr_iters {100};
    int nr_repeats {3};
    if (argc > 1)
        nr_iters = atol(argv[1]);
    if (argc > 2)
        nr_repeats = atoi(argv[1]);

    for (int i = 0; i < nr_repeats; ++i) {
        std::cout << "run " << i + 1 << ":" << std::endl;
        auto start_time = std::chrono::steady_clock::now();
        double sum {0.0};
        for (double x = 0.0; x < delta*nr_iters; x += delta)
            sum += mult_unpure(x);
        auto end_time = std::chrono::steady_clock::now();
        auto duration = std::chrono::duration_cast<my_time_t>(end_time - start_time);
        std::cout << "mult_unpure: " << duration.count()*1.0e-9 << " s"
                  << " (result = " << sum << ")" << std::endl;

        start_time = std::chrono::steady_clock::now();
        sum = 0.0;
        for (double x = 0.0; x < delta*nr_iters; x += delta)
            sum += mult_pure(x);
        end_time = std::chrono::steady_clock::now();
        duration = std::chrono::duration_cast<my_time_t>(end_time - start_time);
        std::cout << "sqrt_pure: " << duration.count()*1.0e-9 << " s"
                  << " (result = " << sum << ")" << std::endl;

    }

    return 0;
}

