#include "depart.h"
#include <boost/python.hpp>

#ifndef DEPARTPY
#define DEPARTPY
void export_depart()
{
    using namespace boost::python;
    def("depart", depart, "function that says bye");
}
#endif
