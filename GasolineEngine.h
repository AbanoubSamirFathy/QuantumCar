#pragma once
#include "Engine.h" 

class GasolineEngine : public Engine {
public:
    void increase() override { speed++; }
    void decrease() override { speed--; }
};