#pragma once
#include "Engine.h"
#include "GasolineEngine.h" 
#include "ElectronicEngine.h" 
using namespace std;

class MixedHybridEngine : public Engine {
private:
    GasolineEngine gas;
    ElectronicEngine electric;

public:
    void setSpeed(int s) override {
        speed = s;

        if (speed < 50) {
            cout << "Electric Engine working\n";
            electric.setSpeed(s);
        }
        else {
            cout << "Gas Engine working\n";
            gas.setSpeed(s);
        }
    }

    void increase() override {
        if (speed < 50)
            electric.increase();
        else
            gas.increase();
    }

    void decrease() override {
        if (speed < 50)
            electric.decrease();
        else
            gas.decrease();
    }
};
