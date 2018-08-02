#include "multiply2.h"

multiply2::multiply2(double first, double second)
  :a(first), b(second), c(0)
{

}
multiply2::~multiply2() {

}

int
multiply2::runTask(void) {
  c = a*b;
  return 0;
}

void
multiply2::Print(ostream &s) {
  s << c << "\n";
}
