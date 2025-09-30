/*                     inputs
weights[][]= {   temp  hum  air_q
                {0.2,  0.1,  0.5},  sad
                {0.1,  0.3,  0.6},  sick    outputs
                {0.4,  0.8,  0.7},  active               
}
*/

#include <stdio.h>
#include <stdlib.h>
#include "multiple_input_multiple_output.h"

#define INPUT_LEN 3
#define OUTPUT_LEN 3

#define SAD_PREDICTION_INDEX 0
#define SICK_PREDICTION_INDEX 1
#define ACTIVE_PREDICTION_INDEX 2

int main(){

    double input[INPUT_LEN] = { 30, 87, 110 };
    double output[OUTPUT_LEN];
    double weights[OUTPUT_LEN][INPUT_LEN] = {
        {-2, 9.5, 2.01},
        {-0.8, 7.2, 6.3},
        {-0.5, 0.45, 0.9}
    };
    
    matrix_vector_multiply(input, INPUT_LEN, output, OUTPUT_LEN, weights);
    
    printf("Sad result: %.2f\n", output[SAD_PREDICTION_INDEX]);
    printf("Sick result: %.2f\n", output[SICK_PREDICTION_INDEX]);
    printf("Active result: %.2f\n", output[ACTIVE_PREDICTION_INDEX]);

    return 0;
}
