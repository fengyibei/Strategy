#include <iostream>
#include "Duck.h"

// base class
Duck::Duck(FlyBehavior *pfB)
    : _pfB(pfB)
{}

void Duck::setFlyBehavior(FlyBehavior *pfB)
{
    _pfB = std::unique_ptr<FlyBehavior>(pfB);
}

void Duck::performFly()
{
    _pfB->fly();
}

// derived classes
MallardDuck::MallardDuck(FlyBehavior *pfB)
    : Duck(pfB)
{
}

RedheadDuck::RedheadDuck( FlyBehavior *pfB)
    : Duck(pfB)
{
}

RubberDuck::RubberDuck( FlyBehavior *pfB)
    : Duck(pfB)
{
}
