#ifndef DEPARTPY
#define DEPARTPY

#include "depart.h"
#include <boost/python.hpp>

void export_depart()
{
    using namespace boost::python;
    def("depart", depart, "function that says bye");
}
#endif
