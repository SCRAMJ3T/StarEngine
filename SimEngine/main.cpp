#include <iostream>

#include "math_vector_3.h"
#include "math_vector_2.h"
#include "math_basic.h"
#include "math_physics.h"

void Update();

int main() {
    std::cout << "Hello, World!" << std::endl;

    Update();

    math_basic math_basic;
    //float addedValue = math_basic.Add(1, 2);
    //float subtractedValue = math_basic.Subtract(10, 2);
    //float myvalue = math_basic.Increment(0, 1, true);

    math_physics math_physics;
    float acceleration = math_physics.math_physics_acceleration(40, 2);
    std::cout << acceleration << "this be physics" << std::endl;

    std::shared_ptr<class math_physics> _math_physics = std::make_shared<class math_physics>();
    float _acceleration = _math_physics->math_physics_acceleration(180, 2);
    std::cout << _acceleration << "this be physicssssssssss" << std::endl;

    acceleration += 200;

    std::cout << acceleration << "this be physics" << std::endl;

    vector_3 vector_3(1, 2, 3);

    //std::cout << myvalue << std::endl;

    vector_3.x = 10;
    vector_3.y = 20;
    vector_3.z = 30;

    std::cout << vector_3.x << std::endl;
    std::cout << vector_3.y << std::endl;
    std::cout << vector_3.z << std::endl;


    return 0;
}

void Update() {

    double t = 0.0;
    double dt = 1.0 / 60.0;


    //while (!false) {


    //}

    return;
}
