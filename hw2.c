#include <stdio.h>
#include <stdlib.h>
int main(){
	unsigned int myinteger = 2200000000;
	char *dumbpointer = &myinteger;
	printf("My integer is %x \n",myinteger);
	printf("pointer is %lx \n",dumbpointer);
	for(int i = 0;i<sizeof(int);i++){
		printf("byte %d of integer is %hhx, ",i,*dumbpointer);
		dumbpointer++;
	}
	printf("\n"); 
	dumbpointer = &myinteger;
	for(int i = 0;i<sizeof(int);i++){	
		*dumbpointer++;
		dumbpointer++;
	}
	printf("new value! decimal: %d, hex: %x \n",myinteger,myinteger);
	dumbpointer = &myinteger;
	for(int i = 0;i<sizeof(int);i++){
		*dumbpointer+=16;
		dumbpointer++;
	}
	printf("new value! decimal: %d, hex: %x \n",myinteger,myinteger);
	printf("pointer is %lx \n",dumbpointer);
	return 0;
}

