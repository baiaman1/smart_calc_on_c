#include "./s21_smart_calc.h"

int main() {
  //   printf("1: %d\n", validate(")66.5"));
  //   printf("2: %d\n", validate(".5"));
  //   printf("3: %d\n", validate("*66.5"));
  //   printf("4: %d\n", validate("/66.5"));
  //   printf("5: %d\n", validate("%66.5"));
  //   printf("6: %d\n", validate("^66.5"));

  //   printf("7: %d\n", validate("66.5.7"));
  //   printf("7.1: %d\n", validate("4..7"));
  //   printf("8: %d\n", validate("7+/5"));

  //   printf("9.1: %d\n", validate("(*")); // (*
  //   printf("9.2: %d\n", validate("(/"));
  //   printf("9.3: %d\n", validate("(%"));
  //   printf("9.4: %d\n", validate("(."));
  //   printf("9.5: %d\n", validate("(^"));

  //   printf("10.1: %d\n", validate("(5*)")); // *)
  //   printf("10.2: %d\n", validate("(5/)"));
  //   printf("10.3: %d\n", validate("(5%)"));
  //   printf("10.4: %d\n", validate("(5.)"));
  //   printf("10.5: %d\n", validate("(5^)"));

  //   printf("11.1: %d\n", validate("45.5+2.45"));
  //   printf("11.2: %d\n", validate("5("));

  //   printf("true: %d\n", validate("5+6.8"));
  //   printf("true2: %d\n", validate("2345.6785-45.5"));
  //   printf("true3: %d\n", validate("(2.3+(6*1))-9.4"));
  return 0;
}

int validate(char *str) {
  int res = 0;
  state_t state = {0};

  if (str) {
    int i = 0;
    for (; str[i] != '\0'; i++) {
      if (!val_1st(str[0])) { // Если 1й элемент не равен: ).*/%^
        if (str[i] == '(') {
          if (i != 0) {

            // что перед скобкой (
            if (str[i - 1] == '.' || isdigit(str[i - 1])) {
              res = 11;
              break;
            }
          }
          // что после скобки (
          if (val_1st(str[i + 1])) {
            res = 9;
            break;
          }
        }

        if (str[i] == ')') {

          // перед скобкой только число
          if (isdigit(str[i - 1]) || str[i - 1] == ')') {
            if (i == 0) { // если первый элемент )
              res = 1;
              break;
            }
          } else {
            res = 10;
            break;
          }
        }

        // if (str[i] == '.') {
        //   if (!isdigit(str[i - 1]) || !isdigit(str[i + 1])) {
        //     res = 71;
        //     break;
        //   }
        //   int j = i;
        //   while (isdigit(str[j])) {
        //   }
        // }

        if (isdigit(str[i])) {
          printf("point: %c\n", str[i]);
          int j = i;
          while (isdigit(str[j]) || str[j] == '.') {
            if (str[j] == '.') {
              state.point++;
            }
            if (state.point > 1) {
              res = 7;
              break;
            }
            j++;
          }
          i = j;
          if (res) {
            break;
          }
        }

        // for (int j = i; isdigit(str[j]), str[j] == '.'; j++) {
        //   if (str[j] == '.') {
        //     state.point++;
        //     if (state.point > 1) {
        //       res = 7;
        //       break;
        //     }
        //   }
        //   //   printf("point: %d\n", state.point);
        // }

      } else {
        res = 2;
        break;
      }
    }
  }
  return res;
}

int is_func(char sim) {
  int res = 0;

  switch (sim) {
  case 'c':
    res = 1;
    break;
  case 's':
    res = 2;
    break;
  case 't':
    res = 3;
    break;
  case 'a':
    res = 4;
    break;
  case 'l':
    res = 5;
    break;
  }

  return res;
}

int is_oper(char sim) {
  int res = 0;

  switch (sim) {
  case '+':
    res = 1;
    break;
  case '-':
    res = 2;
    break;
  case '*':
    res = 3;
    break;
  case '/':
    res = 4;
    break;
  case '^':
    res = 4;
    break;
  case '%':
    res = 5;
    break;
  }

  return res;
}

// check 1st simbol
int val_1st(char sim) {
  int res = 0;

  switch (sim) {
  case '.':
    res = 1;
    break;
  case '*':
    res = 2;
    break;
  case '/':
    res = 3;
    break;
  case '%':
    res = 4;
    break;
  case '^':
    res = 5;
    break;
  }

  return res;
}

// if (isdigit(str[i])) { // number
//   state.is_num = 1;
//   state.point = 0;
// }
// if (str[i] == '.') {
//   if (state.is_num && val_1st(str[i + 1]) && val_1st(str[i - 1])) {
//     state.point++;
//     state.is_num = 0;
//   } else {
//     res = 7;
//     break;
//   }
// }
