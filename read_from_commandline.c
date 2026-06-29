#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  // for (int i = 1; i < argc; i++) {
  //   printf("%s%c", argv[i], (i < argc - 1) ? ' ' : '\n');
  // }
  //
  argc = argc - 1;
  argv = argv + 1;
  while (argc > 0) {
    printf("%s%c", *argv, (argc > 1) ? ' ' : '\n');
    argc--;
    argv++;
  }
  return 0;
}
