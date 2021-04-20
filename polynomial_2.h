#pragma once

#define MAX_TERMS 101

typedef struct{
    float coef;
    int expon;
} polynomial2;

char compare(int, int);

void attach(float, int);

void poly_add2(int, int, int, int, int*, int*);

void print_poly2(int, int);

void polynomial2_main();