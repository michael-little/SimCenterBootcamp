#include <iostream>
using namespace std;

#include "Program.h"
#include "Add2.h"
<<<<<<< HEAD:Code/C++/my_exercise/main.cpp
#include "multiply2.h"
#include "pi.h"
=======
#include "AddVarArgs.h"
>>>>>>> pr/6:Code/C++/exercise/main.cpp

int main(int argc, char **argv) {
  Program p1;
  Add2 task1(2,3);
  Add2 task2(2,4);
<<<<<<< HEAD:Code/C++/my_exercise/main.cpp
  multiply2 task3(8,6);
  pi task4(10000);

  p1.addTask(&task1);
  p1.addTask(&task2);
  p1.addTask(&task3);
  p1.addTask(&task4);
=======
  AddVarArgs task3(3, 1.1,2.2,3.3);  // first number is number of args
  p1.addTask(&task1);
  p1.addTask(&task2);
  p1.addTask(&task3);
>>>>>>> pr/6:Code/C++/exercise/main.cpp
  p1.runTasks(cout);

  p1.addTask(&task1);
  p1.runTasks(cout);

  return 0;
}
