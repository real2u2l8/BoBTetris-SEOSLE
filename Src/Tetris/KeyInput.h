#pragma once

#include <list>
#include <map>

struct ST_KEYSTATE
{
    int nVirtKey;
    short nID;
    bool bPressed;
    bool bReserved;     // 7����Ʈ�� 8����Ʈ�� ������ ä���ִ� ����
};

class CKeyInput
{
    std::map<int, int> m_mapRegisteredKey;
    std::map<int, short> m_mapLastKeyState;

public:
    CKeyInput(void);

    void Register(int nID, int nVirtKey);
    void Query(std::list<ST_KEYSTATE>& outState);
};