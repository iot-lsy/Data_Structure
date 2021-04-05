#include <stdio.h>

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

int main() {

    int res1 = 0, res2 = 0;
    double res3 = 0;
    double res4 = 0;

    res1 = factorial_recursion(5);

    res2 = factorial_iter(5);

    res3 = slow_power(1.4, 3);

    res4 = power(1.4, 3);

    printf("factorial_recursion : %d\n",res1);
    printf("factorial_iter : %d\n", res2);
    printf("slow_power : %lf\n", res3);
    printf("power : %lf\n", res4);
}
