#include <stdio.h>
#include <string.h>

struct Player {
  char name[15];
  int score;
};

typedef struct {
  char name[25];
  float gpa;
} Student;

int main() {
  struct Player player1;
  struct Player player2 = {"ravi", 45};
  strcpy(player1.name, "randheer");
  player1.score = 14;
  printf("%s\n", player1.name);
  printf("%d\n", player1.score);
  // printf("%s\n", player2.name);
  // printf("%d\n", player2.score);
  Student student1 = {"ravi", 5.3};
  Student student2 = {"ravindra", 7.3};
  Student student3 = {"randheer", 5.9};
  Student student4 = {"sunita", 6.3};
  Student students[] = {student1, student2, student3, student4};
  for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++) {
    printf("student name is: %s and gpa is: %.2f\n", students[i].name,
           students[i].gpa);
  }
  return 0;
}
