#include "greet.h"
#include <boost/python.hpp>

//BOOST_PYTHON_MODULE(talkpy)
#ifndef GREETPY
#define GREETPY
void export_greet()
{
    using namespace boost::python;
    def("greet", greet);
}
#endif
