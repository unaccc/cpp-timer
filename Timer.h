#pragma once

#include <chrono>


namespace Time {
    int begin_count = 0, end_count = 0;
    std::chrono::time_point<std::chrono::system_clock> t1;
    std::chrono::time_point<std::chrono::system_clock> t2;

    inline void begin() {
        begin_count++;
        Time::t1 = std::chrono::high_resolution_clock::now();
    }

    inline void end() {
        end_count++;
        Time::t2 = std::chrono::high_resolution_clock::now();
    }

    inline double result() {
        if(begin_count != end_count)
            printf("warning: begin count(%d) not equal end count(%d), please check your code!!!\n", begin_count, end_count);
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(Time::t2 - Time::t1);
        return double(duration.count()) * std::chrono::microseconds::period::num /
               std::chrono::microseconds::period::den;
    }

}
