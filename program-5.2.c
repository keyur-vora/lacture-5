#include<stdio.h>

main(){
	
	int selary , hra , da , ta , gs;
	
	printf("enter base selary :");
	scanf("%d",&selary);
	
	printf("enter base HRA :");
	scanf("%d",&hra);
	
	printf("enter base DA :");
	scanf("%d",&da);
	
	printf("enter base TA :");
	scanf("%d",&ta);
	
	gs = hra + selary + da + ta ;
	
	printf("gross selary is %d",gs);
}
