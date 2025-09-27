#include "single_input_single_output.hpp"
#include <vector>
#include <iostream>
#include <iterator>
#include <format>
#include <string>

SingleInputSingleOutput::SingleInputSingleOutput(const std::vector<double> inputs,const double weight):m_inputs(inputs),m_weight(weight){}

SingleInputSingleOutput::~SingleInputSingleOutput(void){
    std::cout << "Deleting Single Input Single Output class" << "\n";
}

void SingleInputSingleOutput::perform(void){
    const auto weight_msg = std::format("Weight: {}", m_weight);
    std::cout << weight_msg << "\n";
    for(auto it = m_inputs.begin(); it != m_inputs.end(); ++it){
        const auto index = std::distance(m_inputs.begin(), it);
        const auto msg = std::format("Input [{}] Value: {} generated Output: {}", index, *it, *it * m_weight);              
        std::cout << msg << "\n";
    }   
}