#include "depart.h"
#include <boost/python.hpp>

//BOOST_PYTHON_MODULE(talkpy)
void export_depart()
{
    using namespace boost::python;
    def("depart", depart);
}
