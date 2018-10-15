#ifndef TIMER_HPP
# define TIMER_HPP

# include <stdint.h>

class Timer {
public:
    Timer();
    ~Timer();

    double GetDeltaTime();

private:
    uint64_t m_start;
    uint64_t m_current;
    uint64_t m_currentTime;
    uint64_t m_numer;
    uint64_t m_denom;
    double m_time;
    double m_oldTime;
};

#endif
