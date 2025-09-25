#include "simple_neural_network.hpp"
#include <vector>
#include <iostream>
#include <iterator>

SimpleInputSimpleOutput::SimpleInputSimpleOutput(const std::vector<double> inputs,const double weight):m_inputs(inputs),m_weight(weight){}

SimpleInputSimpleOutput::~SimpleInputSimpleOutput(void){
    std::cout << "Deleting Simple Input Simple Output class";
}

void SimpleInputSimpleOutput::perform(void){
    for(auto it = m_inputs.begin(); it != m_inputs.end(); ++it){
        const auto index = std::distance(m_inputs.begin(), it);        
        std::cout << "Input [" << index << "] value: ["<< *it << "] " << "generated Output ["<< *it * m_weight <<"]"<< "\n";
    }   
}