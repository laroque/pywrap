#include "greet.h"
#include <boost/python.hpp>

#ifndef GREETPY
#define GREETPY
void export_greet()
{
    using namespace boost::python;
    def("greet", greet, "function that says hello");
}
#endif
