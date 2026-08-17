//
// Created by jacob on 8/2/2026.
//
#ifndef SIMENGINE_MATHBASIC_H
#define SIMENGINE_MATHBASIC_H
#include <cmath>

class math_basic {
public:
    float math_basic_add(float addend_1 , float addend_2) {
        return addend_1 + addend_2;
    };

    float math_basic_subtract(float minuend, float subtrahend) {
        return minuend - subtrahend;
    };

    float math_basic_multiply(float multiplicand, float multiplier) {
        return multiplicand * multiplier;
    };

    float math_basic_divide(float  dividend, float divisor) {
        return dividend / divisor;
    };

    float math_basic_percentage(float dividend, float divisor) {
        return (dividend / divisor) * 100;
    }

    float math_basic_modulus(float dividend, float divisor) {
        return fmod(dividend, divisor);
    };

    float math_basic_increment(float start_number, float increment_number) {

        for (int i = 0; i < increment_number; i++) {
            start_number++;
        }

        return start_number;
    };

    float math_basic_decrement(float input_number) {
        return input_number - 1;
    };

    float math_basic_negate(float input_number) {
        return -input_number;
    };

    float math_basic_power(float base, float exponent) {
        return pow(base, exponent);
    };

    float math_basic_absolute_value(float input_number) {
        return fabs(input_number);
    };
    float math_basic_square_root(float input_number) {
        return sqrt(input_number);
    };
};

#endif //SIMENGINE_MATHBASIC_H
