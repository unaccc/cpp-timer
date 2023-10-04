# cpp-timer
It's convenient for you to time your program.c++的chrono计时用起来好烦,稍微封装了一下

## how to use it?
```c++
#include <iostream>
#include "Timer.h"

int main(){
  int a = 0;
  Timer::begin();
  for(int i = 0; i < 100000; i++)
    a += i;
  Timer::end();
  std::cout << Timer::result() << endl;
  return 0;
}
```
  
  
