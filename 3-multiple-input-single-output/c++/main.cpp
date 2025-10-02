#include <iostream>
#include <vector>
#include "multiple_input_single_output.hpp"

int main(){
    Weights weights = {
        .temperature= -2,
        .humidity =   2,
        .air_quality= 1
    };
    
    auto multipleInput = MultipleInputSingleOutput(weights);
    std::vector<double> temperature = {12, 23, 50};
    std::vector<double> humidity = {60, 67, 50};
    std::vector<double> air_quality = {60, 47, 167};
    
    std::vector<double> input = { temperature[0], humidity[0], air_quality[0] };
    
    multipleInput.perform(input);
    std::cout << "Valor total " << multipleInput.get_output() << "\n";
    return 0;
}