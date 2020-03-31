//Hello World.c
//Something something here's a program
#include <stdio.h>
#include <stdlib.h>

int lcm();
int other();
int pointerTest();
//declare ur functions here

int main(){
	int i;
	printf("Hello World!\n");
	printf("%d\n", i);
	i++;
	printf("%d\n", i);
	do { //TODO see if "Do ... while(statement)" works
		printf("sup %d\n", i);
		i++;
	} while (i <= 3);
	//Whitespace isn't good. hmm. Where my paragraphs at?
	for (int j=0; j<3; j++){
		printf("%d\n", other());
	}
	printf("%d\n", other());
	printf("\n\n\n");
	printf("lcm of %d and %d is %d\n", 4, 7, lcm(4,7));
	printf("lcm of %d and %d is %d\n", 227, 7, lcm(227,7));
	printf("lcm of %d and %d is %d\n", 45, 40, lcm(45,40));
	printf("lcm of %d and %d is %d\n", 1, 2, lcm(1,2));
	printf("lcm of %d and %d is %d\n", 2, 7, lcm(2,7));
	printf("lcm of %d and %d is %d\n", 227, 747, lcm(227,747));
	int a = 1;
	int b = 1;
	int c;
	printf("Before passing: %d, %d\n", a, b);
	c = pointerTest(a,b);
	printf("After passing: %d, %d\n", a, b);
	return 0;
}

//Test2: play around with pointers, figure out * and &
int pointerTest(int *a, int b){
	printf("Inside Function 1: %d, %d\n", a, b);
	*a++;
	b++;
	printf("Inside Function 2: %d, %d\n", a, b);
	return 0;
}

int other(){
	return rand();
};

//Test1: without thinking about it, make any old function
int lcm(int intX, int intY){
	int intOut, intXIter, intYIter;
	intXIter = intX;
	intYIter = intY;
	while (intXIter != intYIter){
		if (intXIter > intYIter){
			intYIter = intYIter + intY;
		}
		else{
			intXIter = intXIter + intX;
		}
	}
	return intXIter;
}

//Test3: idk
