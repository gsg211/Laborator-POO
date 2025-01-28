#pragma once

class CAircraft
{
private:
    static int m_counter;
protected:
    char* m_owner;
    int m_type; //Aircraft type
public:
    CAircraft(/* args */);
    CAircraft(char* owner, int type=0);
    CAircraft(const CAircraft& c);
    ~CAircraft();
    
    CAircraft& operator=(const CAircraft &c);

    virtual void Read()=0;
    virtual void Write()=0;

    static int getCounter();
};


