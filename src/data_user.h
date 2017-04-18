#ifndef TALKUSER_H_
#define TALKUSER_H_

#include <string>
#include "talk_data.h"

class TalkUser
{
    public:
        TalkUser();
        virtual ~TalkUser();
        TalkData GetData();
        void SetData(TalkData value);
    private:
        TalkData fData;
};

#endif //TALKUSER_H_
