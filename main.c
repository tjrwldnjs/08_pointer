#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void print_image(int image[5][5])
{
	int i,j;
	int *ptr = &image[0][0];
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d ", *ptr);
			ptr = ptr +1;
		}
		printf("\n");
	}
}

void brighten_image(int image[5][5])
{
	int i,j;
	int *ptr = &image[0][0];
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			*ptr = *ptr+10;
			ptr = ptr +1;
		}
		
	}printf("\n");
}
int main(int argc, char *argv[]) {
	
	int image[5][5] ={
	{10, 20, 30, 40, 50}, 
	{10, 20, 30, 40, 50}, 
	{10, 20, 30, 40, 50}, 
	{10, 20, 30, 40, 50}, 
	{10, 20, 30, 40, 50} 	
	};
	
	print_image(image); 
	brighten_image(image); 
	print_image(image); 
	
	return 0;
} 
