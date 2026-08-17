//
// Created by jacob on 8/2/2026.
//

#ifndef SIMENGINE_MATHVECTOR3_H
#define SIMENGINE_MATHVECTOR3_H
#include <vector>

class vector_3 {
public:
    float x;
    float y;
    float z;
    float scalar;

    // The Vector
    vector_3(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
    };

    vector_3 vector_3_add(vector_3 input_vector_a, vector_3 input_vector_b) {
        input_vector_a.x = input_vector_a.x + input_vector_b.x;
        input_vector_a.y = input_vector_a.y + input_vector_b.y;
        input_vector_a.z = input_vector_a.z + input_vector_b.z;
        return input_vector_a;
    };

    vector_3 vector_3_subtract(vector_3 input_vector_a, vector_3 input_vector_b) {
        input_vector_a.x = input_vector_a.x + (- input_vector_b.x);
        input_vector_a.y = input_vector_a.y + (- input_vector_b.y);
        input_vector_a.z = input_vector_a.z + (- input_vector_b.z);
        return input_vector_a;
    };

    // multiply a vector by a scalar
    vector_3 vector_3_multiply_scalar(float input_scalar, vector_3 input_vector) {
        float value_x, value_y, value_z;
        value_x = input_vector.x * input_scalar;
        value_y = input_vector.y * input_scalar;
        value_z = input_vector.z * input_scalar;
        vector_3 return_vector(value_x, value_y, value_z);
        return return_vector;
    };

    // multiply a vector by a vector
    float vector_3_dot_product(vector_3 input_vector_a, vector_3 input_vector_b) {
        float result_x, result_y, result_z;
        result_x = input_vector_a.x * input_vector_b.x;
        result_y = input_vector_a.y * input_vector_b.y;
        result_z = input_vector_a.z * input_vector_b.z;
        return result_x + result_y + result_z;
    };

    // Cross product
    vector_3 vector_3_cross_product(vector_3 input_vector_a, vector_3 input_vector_b) {
        float i, j, k;
        i = (input_vector_a.y * input_vector_b.z) - (input_vector_b.y * input_vector_a.z);
        j = (input_vector_a.z * input_vector_b.x) - (input_vector_b.x * input_vector_a.z);
        k = (input_vector_a.x * input_vector_b.y) - (input_vector_b.x * input_vector_a.y);
        return vector_3(i, j, k);
    };
};

#endif //SIMENGINE_MATHVECTOR3_H
