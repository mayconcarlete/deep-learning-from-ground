#include "multiple_input_single_output.hpp"
#include <iostream>

MultipleInputSingleOutput::MultipleInputSingleOutput(Input input):m_input(input){}

void MultipleInputSingleOutput::print_input(void){
    std::cout << "Value: " << m_input.temperature << "\n";
}
