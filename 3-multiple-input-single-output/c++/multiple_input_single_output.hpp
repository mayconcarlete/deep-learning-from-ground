#pragma once
#include <vector>

typedef struct {
    double temperature;
    double humidity;
    double air_quality;
} Weights;

class MultipleInputSingleOutput {
    public:
        MultipleInputSingleOutput(Weights weights);
        ~MultipleInputSingleOutput(void) = default;
        void perform(const std::vector<double> input);
        double weight_sum(const std::vector<double> input);
        double get_output(void);
    private:
        Weights m_weights;
        double m_sad_output;
};