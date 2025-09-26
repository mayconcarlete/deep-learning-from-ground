#pragma once

typedef struct {
    double temperature_weigth;
    double humidity_weigth;
    double air_quality_weigth;
} Weigths;

typedef struct {
    double temperature;
    double humidity;
    double air_quality;
} Predictions;

class SingleInputMultipleOutput {
    public:
        SingleInputMultipleOutput(double sad_input, Weigths *weigths);
        ~SingleInputMultipleOutput(void);
        perform(void);
        print_result(void);
    private:
        Predictions m_result;
        Weigths m_weigths;
}