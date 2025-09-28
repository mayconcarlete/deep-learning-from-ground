#include "multiple_input_single_output.h"

double weight_sum(double *inputs, double *weights, int LEN){
    double output;
    
    for(int i = 0; i < LEN; i++){
        output += inputs[i] * weights[i];
    }
    
    return output;
}

double multiple_input_single_output(double *inputs, double *weights, int LEN){
    double predicted_value = weight_sum(inputs, weights, LEN);
    return predicted_value;
}