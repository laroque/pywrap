#ifndef TALK_USER
#define TALK_USER

#include "data_user.h"
#include <boost/python.hpp>
#include <boost/python/overloads.hpp>


void export_data_user()
{
    using namespace boost::python;
    class_< TalkUser >("TalkUser", "some user class")
        .add_property("Data", &TalkUser::GetData, &TalkUser::SetData, "data docstring")
        .def("FooMethod", &TalkUser::FooMethod)//, return_value_policy<manage_new_object>(), "docstring")
    ;
}

#endif /* TALK_USER */
