#include <stdio.h>

void input();

int main() {
    input();
  return 0;
}

// НА ВВОД ПОСТУПАЕТ ПРОИЗВОЛЬНОЕ ЧИСЛО 132485. ВЫВЕСТИ МАКСИМАЛЬНУЮ ЦИФРУ ИЗ
// НЕГО
void input() {
  int number, current;
  int max = -1;
  scanf("%d", &number);

  while (number != 0) {
    current = number % 10;
    number = number / 10;
    if (current > max) {
      max = current;
    }
  }
  printf("%d", max);
}

