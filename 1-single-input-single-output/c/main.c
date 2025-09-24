#include <stdlib.h>
#include <stdio.h>
#include "simple_neural_network.h"

int main(){
    double output = single_in_single_out(10, 0.5);
    printf("Output %.2f\n", output);
    return 0;
}