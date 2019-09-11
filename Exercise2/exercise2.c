#include <stdio.h>

main(){
	/* Here, you should write the source code of your program */
	int a,b,c, result;
	printf("Please insert a number ");
	scanf(" %d",&a);
	printf("Please insert another number ");
	scanf(" %d",&b);
	printf("Insert another number I will summed them ");
	scanf(" %d",&c);
	result=a+b+c;
	printf("The reult of summing %d, %d and %d is %d", a,b,c,result);
}
