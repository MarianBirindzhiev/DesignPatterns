#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

class IBehaviorFly
{
public:
    IBehaviorFly(){};
    virtual ~IBehaviorFly(){};
    
    virtual void fly() = 0;
};

class IBehaviorQuach
{
public:
    IBehaviorQuach(){};
    virtual ~IBehaviorQuach(){};

    virtual void quach() = 0;
};

class Duck
{
private:
    IBehaviorFly* m_fb;
    IBehaviorQuach* m_qb;
public:
    Duck( IBehaviorFly* fb, IBehaviorQuach* qb)
    {
        m_fb=fb;
        m_qb=qb;
    }
    ~Duck(){};
};

class simpleQuach : public IBehaviorQuach
{
public:
    void quach() override
    {
        std::cout<<"Quach";
    }
};
class noFlying : public IBehaviorFly
{
public:
    void fly() override
    {
        std::cout<<"This type of duck can't fly";
    }
};
class yesFlying : public IBehaviorFly
{
public:
    void fly() override
    {
        std::cout<<"This type of duck can fly";
    }
};


int main()
{
    
}