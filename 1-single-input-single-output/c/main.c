#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "simple_neural_network.h"

int main(){
    double temperature[] = { 10, 20, -30, 40 };
    double weight = -2;

    for(size_t i = 0; i < 4; i++){
        double output = single_in_single_out(temperature[i], weight);
        printf("Input [%ld] generated Output [%.2f]\n", i + 1, output);
    }
    
    return 0;
}