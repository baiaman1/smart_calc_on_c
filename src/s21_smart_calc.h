#ifndef SRC_S21_SMART_CALC_H_
#define SRC_S21_SMART_CALC_H_

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int is_num;
  int point;
  int brecket;
  int error;
  int oprtator;
} state_t;

int validate(char *str);
int val_1st(char sim);
int is_func(char sim);
int is_oper(char sim);

#endif //  SRC_S21_SMART_CALC_H_