#include <iostream>
#include <string>

class Object
{
protected:
    std::string m_name;

    Object(std::string name)
            : m_name(name)
    {
    }

public:
    std::string getName() { return m_name; }
    virtual const char* gadget() { return "???"; }
};

class Phone: public Object
{
public:
    Phone(std::string name)
            : Object(name)
    {
    }

    virtual const char* gadget() { return "Iphone"; }
};

class Tablet: public Object
{
public:
    Tablet(std::string name)
            : Object(name)
    {
    }

    virtual const char* gadget() { return "Ipad"; }
};

void report(Object &object)
{
    std::cout << object.getName()  <<" " << object.gadget() << '\n';
}

int main()
{
    Phone phone("Phone is");
    Tablet tablet("Tablet is");

    report(phone);
    report(tablet);
}
