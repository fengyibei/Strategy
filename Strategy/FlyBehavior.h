#ifndef _FLYBEHAVIOR_H_
#define _FLYBEHAVIOR_H_

class FlyBehavior {
public:
	virtual void fly() = 0;		// pure virtual function
};

class FlyWithWings : public FlyBehavior {
public:
    virtual void fly() override;
};

class FlyNoWay : public FlyBehavior {
public:
    virtual void fly() override;
};

class FlyWithRocket : public FlyBehavior {
public:
    virtual void fly() override;
};

#endif
