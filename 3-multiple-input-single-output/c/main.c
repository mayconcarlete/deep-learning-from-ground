#include <stdio.h>
#include <stdlib.h>

#include "multiple_input_single_output.h"

#define LEN 5
#define NUM_OF_INPUTS 3

int main(){
    double temperatures[] = { 12, 23, 50, -10, -16 };
    double humidity[] = {60, 67, 50, 65, 63};
    double air_quality[] = {60, 47, 167, 187, 94};
    double weight[] = {-2, 2, 1};

    double training_eg1[] = {temperatures[0], humidity[0], air_quality[0]};
    double predicted_value = multiple_input_single_output(training_eg1, weight, NUM_OF_INPUTS);
    printf("Predicted value: %.2f\r\n", predicted_value);
    return 0;
}