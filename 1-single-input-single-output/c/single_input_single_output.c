#include <stdio.h>

#include "single_input_single_output.h"

void single_input_single_output(double *inputs, int length, double weight){
    printf("Weight value: %.2f\n", weight);
    for(int i = 0; i < length; i++){
        double result = inputs[i] * weight;
        printf("Input [%d] Value: [%.2f] generated Outuput: [%.2f] \n", i, inputs[i], result);
    }
}
