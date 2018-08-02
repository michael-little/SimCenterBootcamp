#ifndef _PI
#define _PI

#include "Task.h"

class pi: public Task {
 public:
  pi(int steps);
  ~pi();
  int runTask(void);

  void Print(ostream &s);

 private:
  double x, dx, PI, time;
  int steps;
 
};

#endif
