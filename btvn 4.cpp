#include <stdio.h>
#include <math.h>

int  prime( int n ) {
     	int m = sqrt(n); 
      	int i;  
     		if (n < 2) return 0; 
     		for ( i =2 ; i <= m; i++) 
         		if (n % i == 0) return 0 ; 
     	return 1;
}
main()
{
	int n, i;
	
	do {
		printf("Enter n (n>=2): ");
		scanf("%d", &n);
		if (n>=2) printf("Prime numbers up to %d: ",n); 
}
     while (n < 2);{
	 }	for (i = 2; i <= n; i++)
		if ( prime(i) ) printf("%3d", i);
	
		
}
