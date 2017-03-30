#ifndef TALKDATA_H_
#define TALKDATA_H_

#include <string>

class TalkData
{
    public:
        TalkData();
        virtual ~TalkData();
        std::string GetLocation();
        void SetLocation(std::string loc);
        int GetFoo();
        void SetFoo(int value);
        int Pointless();
    private:
        std::string fLocation;
        int fFoo;
};

#endif //TALKDATA_H_
