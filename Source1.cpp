#include <iostream>
#include "Car.h"
#include "CarFactory.h"
#include "GasolineEngine.h"
using namespace std;

int main() {
    Car* car = CarFactory::createHybridCar();

    car->start();

    car->accelerate();
    car->accelerate();
    car->accelerate();

    car->brake();

    cout << "Changing engine...\n";
    CarFactory::replaceEngine(car, new GasolineEngine());

    car->accelerate();

    car->stop();

    return 0;
}
