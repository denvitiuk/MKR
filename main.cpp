#include <iostream>

class Object
{
public:
    virtual const char* getName() { return "Phone"; } //  virtual
};

class Tablet: public Object
{
public:
    virtual const char* getName() { return "Ipad"; }
};

int main()
{
    Tablet Ipad;
    Object &rObject = Ipad;
    std::cout << "Tablet is " << rObject.getName() << '\n';

    return 0;
}
