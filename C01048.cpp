#include<stdio.h>
int main() {
	int n, le = 0, chan = 0;
	scanf("%d", &n);
	for (; n!= 0;) {
		if( n % 2 == 0 ) {
			chan += 1;
		} else le += 1;
	  n /= 10;
	}
printf("%d %d",le,chan);


return 0 ;
}

