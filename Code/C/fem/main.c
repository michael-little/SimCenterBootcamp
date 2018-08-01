#include "node.h"
#include "domain.h"
#include "constraint.h"

int main(int argc, char **argv) {
  Domain theDomain;
  theDomain.theNodes = 0;
  theDomain.theConstraint = 0;

  domainAddNode(&theDomain, 1, 0.0, 0.0);
  domainAddNode(&theDomain, 2, 0.0, 2.0);
  domainAddNode(&theDomain, 3, 1.0, 1.0);

  domainAddConstraint(&theDomain, 1, 1, 0, 0, 1);
  domainAddConstraint(&theDomain, 2, 2, 0, 1, 0);
  
  domainPrint(&theDomain);

  // get and print singular node
  printf("\nsingular node:\n");
  Node *theNode = domainGetNode(&theDomain, 2);
  Constraint *theConstraint = domainGetConstraint(&theDomain,2);
  nodePrint(theNode);
  constraintPrint(theConstraint);
}

//I did it the easy way.  You can also add a pointer to the node that can be updated later with an addConstraint function.
