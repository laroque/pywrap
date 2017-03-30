#include "talk_data.h"

TalkData::TalkData():
    fLocation()
{
}

TalkData::~TalkData()
{
}

std::string TalkData::GetLocation()
{
    return fLocation;
}

void TalkData::SetLocation(std::string loc)
{
    fLocation = loc;
}

int TalkData::GetFoo()
{
    return fFoo;
}

void TalkData::SetFoo(int value)
{
    fFoo = value;
}

int TalkData::Pointless()
{
    return 0;
}
