#ifndef STOP_H
#define STOP_H

#include <chrono>

class StopWatch
{
public:
    StopWatch();
    void tick();
    float getTimeElapsed() const;

private:
    std::chrono::high_resolution_clock::time_point newTime, oldTime;
};

StopWatch::StopWatch()
{
    oldTime = std::chrono::high_resolution_clock::now();
    newTime = oldTime;
}

void StopWatch::tick()
{
    oldTime = newTime;
    newTime = std::chrono::high_resolution_clock::now();
}

// Returns time elapsed in seconds
float StopWatch::getTimeElapsed() const
{
    using std::chrono::duration_cast;
    using std::chrono::duration;
    return (duration_cast<duration<float>>(newTime - oldTime)).count();
}

#endif // STOP_H
