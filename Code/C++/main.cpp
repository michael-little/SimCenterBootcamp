#include <iostream>
#include "Program.h"
#include "Task.h"

class sum2: public Task {
 public:
  sum2(double a, double b);
  void printDoubleResult(ostream &s);
}
