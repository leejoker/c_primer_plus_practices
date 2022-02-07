//
// Created by leejoker on 2022/2/7.
//

#include <stdio.h>

double trans_inch_to_centimeter(double inch_value);

int main() {
    double inch_value = 3;
    printf("inch value: %d\n", inch_value);
    printf("centimeter value is %d\n", trans_inch_to_centimeter(inch_value));
    return 0;
}

double trans_inch_to_centimeter(double inch_value) {
    return inch_value * 2.54;
}
