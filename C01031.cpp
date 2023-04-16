#include<stdio.h>

int main() {
	    unsigned int n;
	     scanf("%d", &n);
	    unsigned int i = 2;
	    for(i = 2;i <= n;i ++){
	    	
	    	while (n % i == 0) {
	    		printf("%d", i);
	    		n /= i;
		
			if(n >= i){
					printf("x");
			}
	}

		}
	    

return 0 ;
}

