#include <iostream>
#include "multiple_input_single_output.hpp"

int main(){
    Input input = {
        .temperature= 2.0,
        .humidity =   3.0,
        .air_quality= 5.0
    };

    MultipleInputSingleOutput cls = MultipleInputSingleOutput(input);
    cls.print_input();

    return 0;
}