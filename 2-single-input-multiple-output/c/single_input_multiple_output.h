#ifndef SINGLE_INPUT_MULTIPLE_OUTPUT_H
#define SINGLE_INPUT_MULTIPLE_OUTPUT_H

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

void single_input_multiple_output(double sad_input, Weigths *weigths, Predictions *result);

#endif