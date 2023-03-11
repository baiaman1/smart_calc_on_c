#include "./s21_smart_calc.h"

// int main() {
//   printf("\n");
//   printf("1: %d\n", validate(")66.5"));
//   printf("2: %d\n", validate(".5"));
//   printf("3: %d\n", validate("*66.5"));
//   printf("4: %d\n", validate("/66.5"));
//   printf("5: %d\n", validate("%66.5"));
//   printf("6: %d\n", validate("^66.5"));

//   printf("7.1: %d\n", validate("66.5.7"));
//   printf("7.2: %d\n", validate("4..7"));
//   printf("7.3: %d\n", validate("45.5.+2.45"));
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

//   printf("11.1: %d\n", validate("8.("));
//   printf("11.2: %d\n", validate("5("));

//   printf("12.1: %d\n", validate("cos("));
//   printf("12.2: %d\n", validate("cos(3-5"));
//   printf("13: %d\n", validate("9cos(3-5)"));
//   printf("14: %d\n", validate("cos()"));

//   printf("\ntrue1: %d\n", validate("cos(54)+6.8"));
//   printf("true2: %d\n", validate("2345.6785-45.5"));
//   printf("true3: %d\n", validate("(2.3+(6*1))-9.4"));
//   printf("true4: %d\n", validate("cos(3-5)-(sin(56))"));
//   printf("true5: %d\n", validate("5+5*2"));
//   printf("true6: %d\n", validate("sin(-2)*5+10%2"));
//   return 0;
// }

int validate(char *str) {
  int res = 0;
  state_t state = {0};
  if (str) {
    for (int i = 0; str[i] != '\0'; i++) {

      // check 1st element: ).*/%^
      if (!val_1st(str[0])) {

        // open bracket
        if (str[i] == '(') {
          state.brecket++;
          if (i != 0) {
            // before (
            if (str[i - 1] == '.' || isdigit(str[i - 1])) {
              res = 11;
              break;
            }
          }
          // after (
          if (val_1st(str[i + 1])) {
            res = 9;
            break;
          }
        }

        // closing bracket
        if (str[i] == ')') {
          state.brecket++;
          // before ) only num or )
          if (isdigit(str[i - 1]) || str[i - 1] == ')') {
            if (i == 0) { // 1st elem = )
              res = 1;
              break;
            }
          } else {
            res = 10;
            break;
          }
        }

        // nums 0-9
        if (isdigit(str[i])) {
          int j = i;
          // check repeating dots
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
          if (res) {
            res = 77;
            break;
          }
          state.point = 0;
        }

        // check operators
        if (is_oper(str[i])) {
          if (is_oper(str[i - 1]) || is_oper(str[i + 1]) ||
              val_1st(str[i - 1] || val_1st(str[i + 1]))) {
            res = 8;
            break;
          }
        }

        // functions
        if (is_func(str[i]) && i != 0) {
          if (!is_oper(str[i - 1]) && str[i - 1] != '(' && str[i + 1] != '(' &&
              str[i - 1] != 'a') {
            res = 14;
            break;
          }
        }

      } else { // 1st false
        res = 2;
        break;
      }
    } // for
    if (state.brecket > 0 && state.brecket % 2 != 0) {
      res = 12;
    }
  } // str != NULL

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

// void input_func(char *str) {
//   res =
//   for (int i = 0; str[i] != '\0'; i++) {
//     if (str[i] == 'c' && str[i - 1] != 'a') {

//     }
//   }
// }
