//
// Created by jacob on 8/2/2026.
//

#ifndef SIMENGINE_MATHVECTOR2_H
#define SIMENGINE_MATHVECTOR2_H

class vector_2 {
public:
    float x;
    float y;
    float scalar;

    vector_2 (float x, float y) {
        this->x = x;
        this->y = y;
    };

    vector_2 vector_2_add(vector_2 input_vector_a, vector_2 input_vector_b) {
        input_vector_a.x = input_vector_a.x + input_vector_b.x;
        input_vector_a.y = input_vector_a.y + input_vector_b.y;
        return input_vector_a;
    };

    vector_2 vector_2_subtract(vector_2 input_vector_a, vector_2 input_vector_b) {
        input_vector_a.x = input_vector_a.x + (- input_vector_b.x);
        input_vector_a.y = input_vector_a.y + (- input_vector_b.y);
        return input_vector_a;
    };

    vector_2 vector_2_multiply_scalar(float input_scalar, vector_2 input_vector) {
        float value_x, value_y;
        value_x = input_vector.x * input_scalar;
        value_y = input_vector.y * input_scalar;
        vector_2 return_vector(value_x, value_y);
        return return_vector;
    };

    // multiply a vector by a vector
    float vector_2_dot_product(vector_2 input_vector_a, vector_2 input_vector_b) {
        float result_x, result_y;
        result_x = input_vector_a.x * input_vector_b.x;
        result_y = input_vector_a.y * input_vector_b.y;
        return result_x + result_y;
    };

    // if positive counterclockwise, negative is clockwise,
    // 0 vectors are parallel
    float vector_2_cross_product(vector_2 input_vector_a, vector_2 input_vector_b) {
        float result_x, result_y;
        result_x = input_vector_a.x * input_vector_b.y;
        result_y = input_vector_a.y * input_vector_b.x;
        return result_x - result_y;
    };
};

#endif //SIMENGINE_MATHVECTOR2_H
