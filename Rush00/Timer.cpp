#include <mach/mach_time.h>
#include "Timer.hpp"

Timer::Timer() {
    mach_timebase_info_data_t coeff;
    mach_timebase_info(&coeff);
    m_numer = coeff.numer;
    m_denom = coeff.denom;
    m_currentTime = 0;
    m_start = mach_absolute_time();
    m_current = m_start;
    m_time = 0.0;
    m_oldTime = 0.0;
}

Timer::~Timer() {
}

double Timer::GetDeltaTime() {
    double deltaTime;

    m_current = mach_absolute_time() - m_start;
    m_currentTime = m_current * m_numer / m_denom;
    m_time = (double)(m_currentTime / 1000) / 1000000.0;
    deltaTime = m_time - m_oldTime;
    m_oldTime = m_time;
    return (deltaTime);
}
