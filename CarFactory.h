#pragma once
#include "Car.h"
#include "GasolineEngine.h"
#include "ElectronicEngine.h"
#include "HybridEngine.h"

class CarFactory {
public:
    static Car* createGasCar() {
        return new Car(new GasolineEngine());
    }

    static Car* createElectricCar() {
        return new Car(new ElectronicEngine());
    }

    static Car* createHybridCar() {
        return new Car(new HybridEngine());
    }

    static void replaceEngine(Car* car, Engine* newEngine) {
        car->setEngine(newEngine);
    }
};
