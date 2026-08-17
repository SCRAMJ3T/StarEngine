//
// Created by jacob on 8/11/2026.
//

#ifndef SIMENGINE_MATH_PHYSICS_H
#define SIMENGINE_MATH_PHYSICS_H

class math_physics {
public:
    double t = 0.0f;
    double dt = 0.0f;

    float velocity = 0.0f;
    float position = 0.0f;
    float force = 0.0f;
    float mass = 0.0f;
    float acceleration = 0.0f;

    float math_physics_acceleration(float input_force, float input_mass) {
        float output_acceleration;
        output_acceleration = input_force / input_mass;
        return output_acceleration;
    }

    float math_physics_force(float input_acceleration, float input_mass) {
        float output_force;
        output_force = input_acceleration * input_mass;
        return output_force;
    }

    //in work
    float math_physics_velocity(float input_delta_position, float input_delta_time) {
        float output_velocity;
        output_velocity = input_delta_position * input_delta_time;
        return output_velocity;
    }

    //in work
    float math_physics_position(float input_velocity, float input_dt) {
        float output_position;
        output_position = input_velocity * input_dt;
        return output_position;
    }

};


#endif //SIMENGINE_MATH_PHYSICS_H
