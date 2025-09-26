#include <iostream>
#include "single_input_multiple_output.hpp"

int main(){
    Weigths weigths = {.temperature_weigth = 10, .humidity_weigth = 20, .air_quality_weigth = 30}; 
    double sad_input = 10;
    auto instance = new SingleInputMultipleOutput(sad_input, &weigths);
    instance->perform();
    instance->print_result();
    delete instance;
    return EXIT_SUCCESS;
}