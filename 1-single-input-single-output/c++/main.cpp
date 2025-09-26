#include <iostream>
#include <vector>
#include <memory>
#include "simple_neural_network.hpp"

int main(){
    std::vector<double> inputs = {10, 20, 30, 40};
    double weight = 2.0;
    auto simpleInputSimpleOutput = new SimpleInputSimpleOutput(inputs, weight);
    simpleInputSimpleOutput->perform(); 
    
    delete simpleInputSimpleOutput;
    return EXIT_SUCCESS;
}