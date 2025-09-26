#pragma once

#include <cstdint>
#include <vector>

class SimpleInputSimpleOutput {
    public:
        SimpleInputSimpleOutput(const std::vector<double> inputs, const double weight);
        ~SimpleInputSimpleOutput(void);
        void perform(void);
    private:
        const std::vector<double> m_inputs;
        const double m_weight;
};