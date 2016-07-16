#include "Duck.h"
#include <iostream>

// base class
Duck::Duck(std::shared_ptr<FlyBehavior> pflyBehavior) : _pfB(pflyBehavior) {}

void Duck::setFlyBehavior(std::shared_ptr<FlyBehavior> pflyBehavior)
{
	_pfB = pflyBehavior;
}

void Duck::performFly()
{
	_pfB->fly();
}

// derived classes
MallardDuck::MallardDuck(std::shared_ptr<FlyBehavior> pflyBehavior) : Duck(pflyBehavior) {}

RedheadDuck::RedheadDuck(std::shared_ptr<FlyBehavior> pflyBehavior) : Duck(pflyBehavior) {}

RubberDuck::RubberDuck(std::shared_ptr<FlyBehavior> pflyBehavior) : Duck(pflyBehavior) {}
