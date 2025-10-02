#pragma once

typedef struct {
    double temperature;
    double humidity;
    double air_quality;
} Input;

class MultipleInputSingleOutput {
    public:
        MultipleInputSingleOutput(Input input);
        ~MultipleInputSingleOutput(void) = default;
        void print_input(void);
    private:
        Input m_input;
};