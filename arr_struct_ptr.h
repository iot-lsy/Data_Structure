#pragma once

#define MAX_DEGREE 101

typedef struct{
    char name[10];
    int age;
    double gpa;
} studentTag;

typedef struct{
    int degree;
    float coef[MAX_DEGREE];
}polynomial;

void arr_struct_ptr_main();
void print_poly(polynomial);
polynomial polyadd(polynomial, polynomial);

