#include<stdio.h>
int main() {
	int n,i,j;
	scanf("%d", &n);
	for(i = 1;i <= n;i++  ) {
		for (j = 1; j <= i; j++) {
			if ( j == n-1||i==j || i==1 || j == 1||i==n||j==n  ){
				printf("*");
			} else
			printf(".");
		}
		printf("\n");
	}


return 0 ;
}

