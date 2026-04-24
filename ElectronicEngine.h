#pragma once
#include "Engine.h" 

class ElectronicEngine : public Engine {
public:
    void increase() override { speed++; }
    void decrease() override { speed--; }
};
