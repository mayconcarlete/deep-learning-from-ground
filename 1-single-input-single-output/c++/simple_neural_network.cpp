#include "simple_neural_network.hpp"
#include <vector>
#include <iostream>
#include <iterator>
#include <format>
#include <string>

SimpleInputSimpleOutput::SimpleInputSimpleOutput(const std::vector<double> inputs,const double weight):m_inputs(inputs),m_weight(weight){}

SimpleInputSimpleOutput::~SimpleInputSimpleOutput(void){
    std::cout << "Deleting Simple Input Simple Output class" << "\n";
}

void SimpleInputSimpleOutput::perform(void){
    const auto weight_msg = std::format("Weight: {}", m_weight);
    std::cout << weight_msg << "\n";
    for(auto it = m_inputs.begin(); it != m_inputs.end(); ++it){
        const auto index = std::distance(m_inputs.begin(), it);
        const auto msg = std::format("Input [{}] Value: {} generated Output: {}", index, *it, *it * m_weight);              
        std::cout << msg << "\n";
    }   
}