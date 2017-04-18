#include "data_user.h"

TalkUser::TalkUser():
    fData()
{
}

TalkUser::~TalkUser()
{
}

TalkData TalkUser::GetData()
{
    return fData;
}

void TalkUser::SetData(TalkData value)
{
    fData = value;
}
