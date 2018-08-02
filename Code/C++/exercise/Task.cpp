#include "Task.h"

Task::Task()
{
}
Task::~Task()
{
}

int 
Task::runTask(void) 
{
  while (!taskQueue.empty()) {
    Task *theTask = taskQueue.front();
    theTask->runTask();
    taskQueue.pop();
  }
  return 0;
}


