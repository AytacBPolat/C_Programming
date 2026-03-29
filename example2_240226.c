#include <stdio.h>
int main(){
	int x=3, y=2, i=0,z;
	for(z=0;z<x;)
	i= z++ + y;
	printf("z = %d  i=%d\n",z,i);
		
	return 0;
}

	/*
			x		y		z		i
			3 		2		0		0
			3		2		0		2
			3		2		1		3
			3		2		2		4
			3		2		3		4
	*/
