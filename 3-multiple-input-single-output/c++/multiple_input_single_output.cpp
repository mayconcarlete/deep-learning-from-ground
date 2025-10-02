#include <iostream>
#include <vector>
#include <iterator>

#include "multiple_input_single_output.hpp"

MultipleInputSingleOutput::MultipleInputSingleOutput(Weights input):m_weights(input){}

double MultipleInputSingleOutput::get_output(void){
    return this->m_sad_output;
}

double MultipleInputSingleOutput::weight_sum(const Weights& input){
    m_sad_output = 0;

    m_sad_output += input.temperature * m_weights.temperature;
    m_sad_output += input.humidity * m_weights.humidity;
    m_sad_output += input.air_quality * m_weights.air_quality;
    
    return m_sad_output;
}

void MultipleInputSingleOutput::perform(const Weights& input){
    this->weight_sum(input);
}
