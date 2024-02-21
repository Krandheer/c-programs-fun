#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct Point {
  int x, y;

  void (*dump)(const struct Point *self);
  float (*origin)(const struct Point *self);
  void (*del)(const struct Point *self);
};

void point_dump(const struct Point *self) {
  printf("Object point@%p, x = %d, y = %d\n", self, self->x, self->y);
}

float point_origin(const struct Point *self) {
  return sqrt(self->x * self->x + self->y * self->y);
}
void point_del(const struct Point *self) { free((void *)(self)); }

// constructor of the object point
struct Point *point_new(int x, int y) {
  struct Point *p = malloc(sizeof(*p));
  p->x = x;
  p->y = y;

// functions are defined above which becomes method inside this constructor
  p->dump = &point_dump;
  p->origin = &point_origin;
  p->del = &point_del;

  return p;
}

int main() {
  struct Point *pt = point_new(3, 4);
  pt->dump(pt);
  printf("Origin %f\n", pt->origin(pt));
  pt->del(pt);
}
