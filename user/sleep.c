#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  // has and only has 1
  if (argc > 2 || argc <= 1) {
    char * msg = "<usage>: sleep <ticks>\n";
    fprintf(2, msg, strlen(msg));
    exit(1);
  }

  int ticks = atoi(argv[1]);
  if (ticks < 0) {
    char *msg = "ticks > 0 pls!\n";
    fprintf(2, msg, strlen(msg));
  }

  pause(ticks);

  exit(0);
}
