#include "./s21_smart_calc.h"

void calculate(char *str) {
  if (str) {
    if (validate(str)) {
      strcpy(str, "ERROR!");
    } else {
      strcpy(str, "OK!");
    }
  }
}
