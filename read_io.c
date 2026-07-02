#include <stdio.h>

void read_char() {
  FILE *fp;
  fp = fopen("hello.txt", "r");

  int c;
  while ((c = fgetc(fp)) != EOF) {
    printf("%c", c);
  }

  fclose(fp);
}

void read_by_line() {
  FILE *fp;
  fp = fopen("para.txt", "r");
  int lineCount;

  char s[1024];
  while ((fgets(s, sizeof(s), fp)) != NULL) {
    lineCount++;
    printf("%d: %s", lineCount, s);
  }

  fclose(fp);
}

int main() {
  // read_char();
  read_by_line();
  return 0;
}
