
#include <iostream>
#include <string>
#include <boost/python.hpp>

class Base
{
public:
    Base(std::string name)
    {
        std::cout << name << std::endl;
    }
    ~Base() { }
};


BOOST_PYTHON_MODULE(test)
{
    boost::python::class_<Base,
        boost::noncopyable>("Base", boost::python::init<std::string>())
    ;
}
