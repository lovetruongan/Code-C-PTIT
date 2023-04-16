#include<stdio.h>
int main() {
    int n,x;
    scanf("%d", &n);
    if( 0 < n < 10) {
    for(int i = 1;i <= 10; i++){
        x = n * i;
        printf("%d ", x);
    }
}
return 0;
}
