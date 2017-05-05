#ifndef TALKUSER_H_
#define TALKUSER_H_

#include <string>
#include <vector>
#include "talk_data.h"

class TalkUser
{
    public:
        TalkUser();
        virtual ~TalkUser();
        TalkData GetData();
        void SetData(TalkData value);

        template< typename T >
        std::vector<T> FooMethod();
    private:
        TalkData fData;
};

template< typename T >
std::vector<T> TalkUser::FooMethod(){ return new std::vector<T>;}

#endif //TALKUSER_H_
