#include<stdio.h>
#include<math.h>
int main() {
    int m,n,x;
    scanf("%d%d", &m, &n);
    for(int i = m; i <= n; i++){
         x = sqrt(i);
        if ( i == x*x)
        printf("%d\n", i);
    }
    return 0;
}    
