#ifndef TALK_DATAPY
#define TALK_DATAPY

#include "talk_data.h"
#include <boost/python.hpp>

void export_talk_data()
{
    using namespace boost::python;
    class_< TalkData >("TalkData", "data storage class")
        .def("pointless", &TalkData::Pointless, "docstring for Pointless")
        .add_property("location", &TalkData::GetLocation, &TalkData::SetLocation)
        .add_property("foo", &TalkData::GetFoo, &TalkData::SetFoo)
    ;

}

#endif //TALK_DATAPY
