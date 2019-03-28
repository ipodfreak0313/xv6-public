#include "types.h"
#include "stat.h"
#include "user.h"
 
int main(void) {
  printf(1, "It has been run %d times\n", getreadcount());
  exit();
}
