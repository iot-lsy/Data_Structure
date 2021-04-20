#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

typedef struct{
    char name[10];
    int age;
    double gpa;
} student;

void malloc_main(){
    int* p = NULL;
    student* s = NULL;

    p = (int*)malloc(SIZE*sizeof(int));
    if(p==NULL){
        fprintf(stderr, "메모리가 부족해서 할당할 수 없습니다.\n");
        exit(1);
    }

    for(int i=0;i<SIZE; i++){
        p[i] = i;
    }

    for(int i=0;i<SIZE;i++){
        printf("%d ", p[i]);
    }

    s = (student*)malloc(sizeof(student));
    if(s){
        strcpy(s->name, "홍길동");
        s->age = 20;
        s->gpa = 4.5;
    }

    printf("\n이름 : %s, 나이 : %d, 학점:%.1lf\n",s->name, s->age, s->gpa);

    free(s);
    free(p);

}