#include <iostream>
#include "Duck.h"

// base class
Duck::Duck(const std::shared_ptr<FlyBehavior> &pflyBehavior) 
	: _pfB(pflyBehavior) 
{}

void Duck::setFlyBehavior(const std::shared_ptr<FlyBehavior> &pflyBehavior)
{
	_pfB = pflyBehavior;
}

void Duck::performFly()
{
	_pfB->fly();
}

// derived classes
MallardDuck::MallardDuck(const std::shared_ptr<FlyBehavior> &pflyBehavior) 
	: Duck(pflyBehavior) 
{}

RedheadDuck::RedheadDuck(const std::shared_ptr<FlyBehavior> &pflyBehavior) 
	: Duck(pflyBehavior) 
{}

RubberDuck::RubberDuck(const std::shared_ptr<FlyBehavior> &pflyBehavior) 
	: Duck(pflyBehavior)
{}
