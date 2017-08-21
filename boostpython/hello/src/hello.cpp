char const* greet()
{
    return "hello, world";
}

#include <boost/python.hpp>

BOOST_PYTHON_MODULE(test)
{
    using namespace boost::python;
    def("greet", greet);
}
