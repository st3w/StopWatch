#ifndef STOP_H
#define STOP_H

#include <chrono>
using namespace std::chrono;

class StopWatch
{
public:
    StopWatch();
    void tick();
    float getTimeElapsed() const;

private:
    high_resolution_clock::time_point newTime, oldTime;
};

StopWatch::StopWatch()
{
    oldTime = high_resolution_clock::now();
    newTime = oldTime;
}

void StopWatch::tick()
{
    oldTime = newTime;
    newTime = high_resolution_clock::now();
}

// Returns time elapsed in seconds
float StopWatch::getTimeElapsed() const
{
    return (duration_cast<duration<float>>(newTime - oldTime)).count();
}

#endif // STOP_H
