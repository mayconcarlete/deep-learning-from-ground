#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

#include "single_input_multiple_output.h"

int main() {
    Predictions *result = malloc(sizeof(Predictions));
    
    Weigths *weigths = malloc(sizeof(Weigths));
    weigths->temperature_weigth = 2.0;
    weigths->humidity_weigth = 3.0;
    weigths->air_quality_weigth= 1.0;

    double sad_input = 2.0;
    
    single_input_multiple_output(sad_input, weigths, result);
    printf("Results...\n");
    printf("Temperature: %.2f Humidity: %.2f Air Quality: %.2f", result->temperature, result->humidity, result->air_quality);
    printf("----------");

    free(result);
    free(weigths);
    return 0;
}