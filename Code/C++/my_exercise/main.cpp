#include <iostream>
using namespace std;

#include "Program.h"
#include "Add2.h"
#include "multiply2.h"
#include "pi.h"

int main(int argc, char **argv) {
  Program p1;
  Add2 task1(2,3);
  Add2 task2(2,4);
  multiply2 task3(8,6);
  pi task4(10000);

  p1.addTask(&task1);
  p1.addTask(&task2);
  p1.addTask(&task3);
  p1.addTask(&task4);
  p1.runTasks(cout);

  p1.addTask(&task1);
  p1.runTasks(cout);

  return 0;
}
