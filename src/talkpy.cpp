#include <boost/python.hpp>

#include "greetPy.cpp"
//#include "departPy.cpp"

BOOST_PYTHON_MODULE(talkpy)
{
    export_greet();
    //export_depart();
}
