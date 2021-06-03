#include<iostream>
using namespace std;

class Distance
{
        int feet;
        float inches;
        public:
            void setfeet(int x);
            void setinches(float y);
            int printfeet();
            float printinc();
};

void Distance::setfeet(int x)
{
        feet = x;
}

void Distance::setinches(float y)
{
        inches = y;
}

int Distance::printfeet()
{
        return feet;
}

float Distance::printinc()
{
        return inches;
}
