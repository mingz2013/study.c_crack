
#include <stdio.h>


#include "calc.h"




int main(int argc, char * argv[]){
	int a, b, c;
	a = 100;
	b = 200;
	
	c = add(a, b);
	c = div(c, a);
	c = mul(c, b);
	c = sub(c, a);
	

	printf("helloworld!\n");
	printf("c=%d\n", c);
	return 0;
}
