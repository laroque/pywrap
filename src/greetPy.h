#ifndef GREETPY
#define GREETPY

#include "greet.h"


#include <boost/python.hpp>

void export_greet()
{
    using namespace boost::python;
    def("greet", greet, "function that says hello");
}

#endif //GREETPY
