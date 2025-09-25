#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "simple_neural_network.h"

int main(){
    double temperatures[] = { 10, 20, -30, 100 };
    double weight = -2;
    
    simple_in_simple_out(temperatures, sizeof(temperatures)/sizeof(double), weight);
    
    return 0;
}