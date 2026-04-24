#pragma once
#include "Engine.h"
using namespace std;

class Car {
private:
    Engine* engine;
    int speed;

public:
    Car(Engine* e) {
        engine = e;
        speed = 0;
    }

    void setEngine(Engine* e) {
        engine = e;
    }

    void start() {
        speed = 0;
        engine->setSpeed(speed);
        cout << "Car started\n";
    }

    void stop() {
        speed = 0;
        engine->setSpeed(speed);
        cout << "Car stopped\n";
    }

    void accelerate() {
        if (speed < 200) {
            speed += 20;
            if (speed > 200) speed = 200;

            engine->setSpeed(speed);
            cout << "Speed: " << speed << endl;
        }
    }

    void brake() {
        if (speed > 0) {
            speed -= 20;
            if (speed < 0) speed = 0;

            engine->setSpeed(speed);
            cout << "Speed: " << speed << endl;
        }
    }
};
