#include <stdio.h>
#include "02_recursion.h"

int factorial_recursion(int n){ //재귀문 팩토리

    if(n>=1) return (n * factorial_recursion(n-1));
    else return 1;

}

int factorial_iter(int n){ // 반복문 팩토리얼

    int res = 1;

    for(int i=0;i<n;i++){
        res *= (i+1);
    }

    return res;
}

double slow_power(double x, int n){ // 거듭제곱 반복문

    double res = 1.0;

    for(int i=0; i<n; i++){
        res *= x;
    }

    return res;
}

double power(double x, int n){// 거듭제곱 순환문

    if(n==0) return 1;
    else if(n % 2 == 0){
        return power(x*x, n/2);
    }else{
        return x * power(x*x, (n-1)/2);
    }

}

int fib_iter(int n){

    if(n==0 || n==1) return 1;

    int fi1 = 0;
    int fi2 = 1;
    int res = 0;

    for(int i=0;i<=n-2;i++){
        res = fi1 + fi2;
        fi1 = fi2;
        fi2 = res;
    }

    return res;
}

void hanoi_tower(int n, char from, char tmp, char to){ //하노이 타워

    if(n==1) {
        printf("원판 1 %c에서 %c로 옮긴다.\n", from, to);
    }
    else{
        hanoi_tower(n-1, from, to, tmp);
        printf("원판 %d를 %c에서 %c로 옮긴다.\n", n, from, to);
        hanoi_tower(n-1, tmp, from, to);
    }

}

void recursion_main(){

    int res1 = 0, res2 = 0, res5 = 0;
    double res3 = 0;
    double res4 = 0;

    res1 = factorial_recursion(5);

    res2 = factorial_iter(5);

    res3 = slow_power(1.4, 3);

    res4 = power(1.4, 3);

    res5 = fib_iter(7);

    printf("factorial_recursion : %d\n",res1);
    printf("factorial_iter : %d\n", res2);
    printf("slow_power : %lf\n", res3);
    printf("power : %lf\n", res4);
    printf("fib_iter : %d\n", res5);

    hanoi_tower(3, 'a', 'b', 'c');

}