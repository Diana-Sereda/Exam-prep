#include <stdio.h>

void input_string(char *str);
// void sorting(char *str);
int main() {
  char str[100];
  input_string(str);
//   sorting(str);
  return 0;
}

void input_string(char *str) {
  char c='c';
  int i = 0;
  while (c != '\n') {
    scanf("%c", &c);
    str[i]=c;
    i++;
    printf("%c", str[i]);
  }
  printf("Sth");
}
// void sorting(char *str) {
//   // char c =' ';
//   int i = 0;
//   while (str[i] != '\0') {
//     if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z') {
//       str[i + 1] -= 32;
//     }
//     printf("%c", str[i]);
//   }
// }