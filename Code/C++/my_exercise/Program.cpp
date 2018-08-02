#include <iostream>
#include "Program.h"
#include "Task.h"

<<<<<<< HEAD:Code/C++/my_exercise/Program.cpp
Program::Program() 
{
}

Program::~Program() 
{
=======
Program::Program() {

}

Program::~Program() {

>>>>>>> pr/6:Code/C++/exercise/Program.cpp
}

int 
Program::addTask(Task *theTask)
{
  taskQueue.push(theTask);
  return 0;
}

int 
Program::runTasks(ostream &s)
{
  while (!taskQueue.empty()) {
      Task *theTask = taskQueue.front();
      theTask->runTask();
      theTask->Print(s);
      taskQueue.pop();
  }
  return 0;
}
