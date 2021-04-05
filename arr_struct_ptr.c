#include <stdio.h>
#include "arr_struct_ptr.h"

polynomial polyadd(polynomial, polynomial);
void print_poly(polynomial);

void arr_struct_ptr_main(){

    studentTag student1 = {"kim", 20, 4.3};
    studentTag student2 = {"lee", 23, 4.4};

    polynomial A = {3, {1, 0, 2, 3}};
    polynomial B = {3,{-1,0,4,-1}};
    polynomial C;

    print_poly(A);
    print_poly(B);

    C = polyadd(A, B);

    print_poly(C);
}

polynomial polyadd(polynomial A, polynomial B){

    polynomial tmp;

    int A_Pos = 0;
    int B_Pos = 0;

    if(A.degree>B.degree) {
        tmp.degree = A.degree;
    }else{
        tmp.degree = B.degree;
    }

    for(int i=0; i<=tmp.degree; i++){
        if(A.degree > B.degree){
            tmp.coef[i] = A.coef[A_Pos++];
            A.degree --;
        }else if(A.degree == B.degree){
            tmp.coef[i] = A.coef[A_Pos++] + B.coef[B_Pos++];
        }else{
            tmp.coef[i] = B.coef[B_Pos++];
            B.degree--;
        }
    }

    return tmp;
}

void print_poly(polynomial tmp){


    for(int i=0;i<tmp.degree;i++){
        printf("%.1lfx^%d + ", tmp.coef[i], tmp.degree-i);
    }

    printf("%.2lf \n", tmp.coef[tmp.degree]);

}