#ifndef MULTIPLE_INPUT_MULTIPLE_OUTPUT
#define MULTIPLE_INPUT_MULTIPLE_OUTPUT

void matrix_vector_multiply(
    double *input,
    int input_length,
    double *output,
    int output_length,
    double weights[input_length][output_length]
);

#endif