#include <iostream>
#include <vector>
#include <memory>
#include "single_input_single_output.hpp"

int main(){
    std::vector<double> inputs = {10, 20, 30, 40};
    double weight = 2.0;
    auto singleInputSingleOutput = new SingleInputSingleOutput(inputs, weight);
    singleInputSingleOutput->perform(); 
    
    delete singleInputSingleOutput;
    return EXIT_SUCCESS;
}