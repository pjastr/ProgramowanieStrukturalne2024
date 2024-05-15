#include <stdio.h>

struct Point {
  int x;
  int y;
};

void add_points(struct Point p1, struct Point p2, struct Point *result) {
  result->x = p1.x + p2.x;
  result->y = p1.y + p2.y;
}

int main() {
  struct Point p1 = {1, 2};
  struct Point p2 = {3, 4};
  struct Point sum;
  add_points(p1, p2, &sum);
  printf("sum: (%d, %d)\n", sum.x, sum.y);
  return 0;
}
