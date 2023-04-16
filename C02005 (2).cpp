#include<stdio.h>

int main() {
	int n,m,i,j,k;
	scanf("%d%d", &n, &m);
	for(i = n; i >= 1; i--){
		for(k = n - 1;k >= i;k --){
			printf("~");
		}
		for(j = 1; j <= m; j++){
			printf("*");
		}
	printf("\n");
	}


return 0 ;
}

