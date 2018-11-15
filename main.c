#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// int(*pf)(int, int); 는 함수를 가리키는 포인터 (함수포인터) 

int addfunc(int a, int b)
{
	return a+b;
}

int subfunc(int a, int b)
{
	return a-b;
}

int mulfunc(int a, int b)
{ 
	return a*b;
}

int divfunc(int a, int b)
{
	return a/b;
}

int main(int argc, char *argv[]) {
	
	int num1,num2;
	char op;
	int(*calfunc)(int, int);
	
	printf("input calculation : ");
	scanf("%d %c %d", &num1, &op, &num2);
	
	switch(op)
	{
		case '+' :
			calfunc = addfunc;	
			break;
			
		case '-' :
			calfunc = subfunc;
			break;
			
		case '*' :
			calfunc = mulfunc;
			break;
			
		case '/' :
			calfunc = divfunc;
			break;		
	}
	
	printf("result : %i\n", calfunc(num1,num2));
	
	return 0;
} 
