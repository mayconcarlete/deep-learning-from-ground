#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "single_input_single_output.h"

int main(){
    double temperatures[] = { 10, 20, -30, 100 };
    double weight = -2;
    
    single_input_single_output(temperatures, sizeof(temperatures)/sizeof(double), weight);
    
    return 0;
}