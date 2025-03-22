class CTimer
{
public:
    CTimer()
    {
        m_hTimer = NULL;
        m_mutexCount = 0;
    }

private:
    HANDLE m_hTimer;
    long m_mutexCount;
}