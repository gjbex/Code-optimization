#include <cstdlib>
#include <iostream>
#include <vector>

void saxpy(float a, const std::vector<float>& x, const std::vector<float>& y, std::vector<float>& result) {
    if (x.size() != y.size() || x.size() != result.size()) {
        throw std::invalid_argument("Input vectors must have the same size.");
    }
    
    for (size_t i = 0; i < x.size(); ++i) {
        result[i] = a*x[i] + y[i];
    }
}

void init_vector(std::vector<float>& vec, size_t size, float value) {
    vec.resize(size);
    for (size_t i = 0; i < size; ++i) {
        vec[i] = i*value;
    }
}

float sum_vector(const std::vector<float>& vec) {
    float sum = 0.0f;
    for (const auto& val : vec) {
        sum += val;
    }
    return sum;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <size>" << std::endl;
        return EXIT_FAILURE;
    }
    const size_t size {std::stoul(argv[1])};
    std::vector<float> x, y, result;
    init_vector(x, size, 1.0f);
    init_vector(y, size, 2.0f);
    result.resize(size);
    saxpy(2.0f, x, y, result);
    std::cout << "Sum of result vector: " << sum_vector(result) << std::endl;
    return EXIT_SUCCESS;
}
