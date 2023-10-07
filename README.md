# cpp-timer base from chrono基于chrono再封装的小型计时器
It's convenient for you to time your program.

## How to use it?
```c++
#include <iostream>
#include "Timer.h"

int main(){
  int a = 0;
  Timer* timer = Timer::begin();    // auto timer = Timer::begin();
  for(int i = 0; i < 100000; i++)
    a += i;
  double res = timer->finish();
  std::cout << res << endl;
  return 0;
}
```
  
  
