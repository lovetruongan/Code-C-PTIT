#include<stdio.h>
int main() {
	int n,m,i,j,k;
	scanf("%d%d", &n, &m);
	for(i = n; i >= 1; i--){
		for(k = n - 1;k >= i;k --){
			printf("~");
		}
		for(j = 1; j <= m; j++){
			if (i == 1 || j == 1 || i == n || j == m){
				printf("*");
			} else 
			printf(".");
		}
	printf("\n");
	}


return 0 ;
}

