#include "single_input_multiple_output.h"

void single_input_multiple_output(double sad_input, Weigths *weigths, Predictions *result){
    result->temperature = weigths->temperature_weigth * sad_input;
    result->humidity = weigths->humidity_weigth * sad_input;
    result->air_quality = weigths->air_quality_weigth * sad_input;
}