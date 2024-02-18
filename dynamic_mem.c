#include <stdio.h>
#include <stdlib.h>

int main() {
  struct point {
    int x;
    int y;
  };
  struct point *rp; // pointer which will point to address rp which is yet to
                    // be defined
  rp = (struct point *)malloc(
      sizeof(struct point)); // adress of size required
                             // by struct point, of type struct point
  rp->x = 3;
  (*rp).y = 4;
  printf("%d, %d\n", (*rp).x, rp->y);
}
