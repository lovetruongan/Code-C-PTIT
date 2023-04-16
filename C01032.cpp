#include<stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
	    unsigned int n,a[50],x = 1,tong = 1 ;
	     scanf("%d", &n);
for(int j = 0; j < n; j++){
	   for(int i = 2; i <= n; i++){
	    int count = 0;
	    	while (n % i == 0) {
	    			n /= i;
	    			a[j] = i;
	    		count ++;
			} 					
		}
		}
for(int i=0;i<=n-1;i++) { 
int x = a[i]; 
while(x != 1) {
 tong *= a[i]; 
 } }
	printf("%d", tong);		
		printf("\n");
}
	
return 0 ;
}


