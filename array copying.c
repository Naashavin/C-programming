#include <stdio.h> 
int main() 
 { 
	int a[5] = { 3, 6, 9, 2, 5 }, length=sizeof(a)/sizeof(a[0]); 
	int b[length],i;
	for (i = 0; i < length; i++) 
	{ 
		b[i] = a[i]; 
		printf("%d ", b[i]); 
	} 
	printf("is the second copied array"); 
	return 0; 
 } 

