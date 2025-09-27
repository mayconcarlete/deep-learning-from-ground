#pragma once

#include <cstdint>
#include <vector>

class SingleInputSingleOutput {
    public:
        SingleInputSingleOutput(const std::vector<double> inputs, const double weight);
        ~SingleInputSingleOutput(void);
        void perform(void);
    private:
        const std::vector<double> m_inputs;
        const double m_weight;
};