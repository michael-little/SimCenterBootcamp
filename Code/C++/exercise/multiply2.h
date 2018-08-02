#ifndef _multiply2
#define _multiply2

#include "Task.h"

class multiply2: public Task {
 public:
  multiply2(double a, double b);
  ~multiply2();
  int runTask(void);

  void Print(ostream &s);

 private:
  double a, b, c;
 
};

#endif
