#include <string>
#include <format>
#include <iostream>

#include "single_input_multiple_output.hpp"

SingleInputMultipleOutput::SingleInputMultipleOutput(double sad_input, Weigths *weigths):m_sad_input(sad_input),m_weigths(weigths){}

void SingleInputMultipleOutput::perform(void){
    m_result.temperature = m_weigths->temperature_weigth * m_sad_input;
    m_result.humidity = m_weigths->humidity_weigth * m_sad_input;
    m_result.air_quality = m_weigths->air_quality_weigth * m_sad_input;
}

void SingleInputMultipleOutput::print_result(void){
    std::string sad_msg = std::format("Sad Input: {}", m_sad_input);
    std::cout << sad_msg << "\n";
    
    std::string temperature_msg = std::format("Temperature: {}", m_result.temperature);
    std::cout  << temperature_msg << "\n";

    std::string humidity_msg = std::format("Humidity: {}", m_result.humidity);
    std::cout << humidity_msg << "\n";

    std::string air_quality_msg = std::format("Air Quality: {}", m_result.air_quality);
    std::cout << air_quality_msg << "\n";
}

