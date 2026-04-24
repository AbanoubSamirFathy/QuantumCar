#pragma once

class Engine {
protected:
    int speed;

public:
    Engine() { speed = 0; }

    virtual void increase() = 0;
    virtual void decrease() = 0;

    virtual void setSpeed(int s) {
        speed = s;
    }

    virtual ~Engine() {}
};
