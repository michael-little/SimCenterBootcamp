#ifndef _CONSTRAINT
#define _CONSTRAINT

#include <stdio.h>

typedef struct constraint {
  int tag;
  int nodeTag;
  int constr[3];
  struct constraint *next;
} Constraint;

void constraintPrint(Constraint *);
void constraintSetup(Constraint *, int tag,int nodeTag, int const1, int const2, int const3);

#endif
