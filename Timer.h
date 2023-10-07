#pragma once

#include <chrono>


class Timer{
    std::chrono::time_point<std::chrono::system_clock> t1;      // begin
    std::chrono::time_point<std::chrono::system_clock> t2;      // end
public:
    static Timer* begin() {
        auto* timer = new Timer;
        timer->t1 = std::chrono::system_clock::now();   // begin
        return timer;
    }

    double finish() {
        this->t2 = std::chrono::system_clock::now();  // end
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1); // sub
        return double(duration.count()) * std::chrono::microseconds::period::num /
               std::chrono::microseconds::period::den;
    }

    ~Timer() = delete;
};
