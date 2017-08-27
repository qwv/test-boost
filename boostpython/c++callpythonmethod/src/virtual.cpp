#include <iostream>
#include <string>

#include <boost/python.hpp>

class Base
{
public:
    virtual std::string text() { return "TextBase"; } 
};

class Base_wrapper : public Base
{
public:
    Base_wrapper(PyObject *self) :
        self_(self)
    {
        boost::python::incref(self_);
    }
	~Base_wrapper()
    {
        boost::python::decref(self_);
		self_ = NULL;
    }

    void call_python_method()
    {
		PyGILState_STATE state_ = PyGILState_Ensure();
        try	
        {	
		    if(self_) boost::python::call_method<void>(self_, "callback");
        }
        catch(const boost::python::error_already_set &e)
        {
            PyErr_Print();
        }
        PyGILState_Release(state_);
    }

private:
	PyObject	*self_;
};   

BOOST_PYTHON_MODULE(test)
{
    boost::python::class_<Base, 
        boost::shared_ptr<Base_wrapper>, 
        boost::noncopyable>("Base")
        .def("text", &Base::text)
        .def("call_python_method", &Base_wrapper::call_python_method)
    ;
}
