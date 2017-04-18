#include <boost/python.hpp>

#include "data_userPy.h"

BOOST_PYTHON_MODULE(usrpy)
{
    using namespace boost::python;
    export_data_user();
}
