#include <iostream>
#include "Duck.h"

// base class
Duck::Duck(FlyBehavior *fb)
    : fb_(fb)
{}

void Duck::setFlyBehavior(FlyBehavior *fb)
{
    // need explicit conversion
    fb_ = std::unique_ptr<FlyBehavior>(fb);
}

void Duck::performFly()
{
    fb_->fly();
}

// derived classes
MallardDuck::MallardDuck(FlyBehavior *fb)
    : Duck(fb)
{
}

RedheadDuck::RedheadDuck( FlyBehavior *fb)
    : Duck(fb)
{
}

RubberDuck::RubberDuck(FlyBehavior *fb)
    : Duck(fb)
{
}

