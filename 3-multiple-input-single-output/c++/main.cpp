#include <iostream>
#include <vector>
#include "multiple_input_single_output.hpp"

int main(){
    Weights weights = {
        .temperature= -2,
        .humidity =   2,
        .air_quality= 1
    };

    std::vector<Weights> input =  {
        {.temperature = 12, .humidity = 60, .air_quality = 60}
    };

    auto multipleInput = MultipleInputSingleOutput(weights);
    
    multipleInput.perform(input[0]);
    std::cout << "Valor total " << multipleInput.get_output() << "\n";
    return 0;
}