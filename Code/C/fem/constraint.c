#include <stdio.h>
#include "constraint.h"

void constraintPrint(Constraint *theConstraint){
  printf("Constraints on node %d -- ", theConstraint->tag);
  printf("Constraints: %d %d %d \n", theConstraint->constr[0], theConstraint->constr[1], theConstraint->constr[2]);
}

void constraintSetup(Constraint *theConstraint, int tag, int nodeTag, int cstr1, int cstr2, int cstr3) {
  theConstraint->tag = tag;
  theConstraint->nodeTag = nodeTag;
  theConstraint->constr[0] = cstr1;
  theConstraint->constr[1] = cstr2;
  theConstraint->constr[2] = cstr3;
  theConstraint->next = NULL;
}
