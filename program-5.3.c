#include<stdio.h>

main(){
	
	const int tri=180;
	int a , b , c;
	
	printf("enter first corner :");
	scanf("%d",&a);
	
	printf("enter second corner :");
	scanf("%d",&b);
	
	c = tri - (a + b);
	
	printf("third corner is %d",c);
}
