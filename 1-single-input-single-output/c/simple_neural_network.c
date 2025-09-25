#include <stdio.h>

#include "simple_neural_network.h"

void simple_in_simple_out(double *inputs, int length, double weight){
    printf("Weight value: %.2f\n", weight);
    for(int i = 0; i < length; i++){
        double result = inputs[i] * weight;
        printf("Input [%d] Value: [%.2f] generated Outuput: [%.2f] \n", i, inputs[i], result);
    }
}
