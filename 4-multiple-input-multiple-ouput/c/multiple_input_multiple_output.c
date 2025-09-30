#include "multiple_input_multiple_output.h"

void matrix_vector_multiply(
    double *input,
    int input_length,
    double *output,
    int output_length,
    double weights[input_length][output_length]
){
    for(int i = 0; i < output_length; i++){
        output[i] = 0;
        for(int j = 0; j < input_length; j++){
            output[i] += input[j] * weights[i][j];
        }
    }
}

// void multiple_input_multiple_output(
//     double *input,
//     int input_length,
//     double *output,
//     int output_length,
//     double weights[input_length][output_length]
// ){
//     matrix_vector_multiply(input, input_length, output, output_length, weights);
// }