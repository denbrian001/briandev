#include <stdio.h>
int calculate_volume(int length,int height,int width)
{
	return length*height*width;
}
int main()
{
	int a,b,c,volume;
	printf("enter value of length:");
	scanf("%i",& a);
	printf("enter value of width:");
	scanf("%i",& b);
	printf("enter value of height:");
	scanf("%i",& c);
	
	volume=calculate_volume(a,b,c);
	printf("The volume of cuboid is %i",volume);
	return 0;
}