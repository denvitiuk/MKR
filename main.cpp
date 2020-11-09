#include <iostream>

class Object
{
public:
    virtual const char* getName() { return "Tablet"; } //  virtual
};
class Objects
{
public:
    virtual const char* getName() { return "Phone"; } //  virtual
};

class Tablet: public Object
{
public:
    virtual const char* getName() { return "Ipad"; }
};
class Phone: public Object
{
public:
    virtual const char* getName() { return "Iphone"; }

};

int main()
{

    Tablet Ipad;
    Phone Iphone;
    Object &rObject = Ipad;
    std::cout << "Tablet is " << rObject.getName() << '\n';

    return 0;
}
