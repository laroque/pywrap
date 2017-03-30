#include <boost/python.hpp>

#include "greetPy.h"
#include "departPy.h"

BOOST_PYTHON_MODULE(talkpy)
{
    using namespace boost::python;
    scope().attr("__doc__") = "a module to test bulding with boost::python";
    export_greet();
    export_depart();
}
