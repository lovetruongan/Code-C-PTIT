#include<stdio.h>
#include<math.h>
int main() {
	int n,k,a;
	scanf("%d", &n);
	int i = n;
	a = i % 10;
	while( i/10 >= 1) {
		i /= 10;
	}
printf("%d %d", i, a);
return 0 ;
}

