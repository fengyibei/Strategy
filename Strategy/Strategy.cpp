#include <iostream>
#include "Duck.h"

void main()
{
    FlyBehavior *pfWings = new FlyWithWings;
    FlyBehavior *pfNo = new FlyNoWay;
    FlyBehavior *pfRocket = new FlyWithRocket;

    Duck *pDuck = new MallardDuck(pfWings);
    pDuck->performFly();

    pDuck->setFlyBehavior(pfNo);
    pDuck->performFly();

    pDuck->setFlyBehavior(pfRocket);
    pDuck->performFly();
}
