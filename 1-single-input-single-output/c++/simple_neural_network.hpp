#pragma once

#include <cstdint>

class SimpleInputSimpleOutput {
    public:
        SimpleInputSimpleOutput(double m_input, double m_weight);
        ~SimpleInputSimpleOutput() = default;
        double perform();
    private:
        double m_input;
        double m_weight;
}