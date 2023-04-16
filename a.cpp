#include<stdio.h>
int gcd(int a, int b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; 
        }else{
            b -= a;
        }
    }
    return a; 
}
 
int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    int lcm = a * b / gcd(a, b);
    printf("%d\n", gcd(a, b));
    printf("%d\n", lcm);
}


