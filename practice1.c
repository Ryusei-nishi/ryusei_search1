#include<studio.h>
int  add_1(int x)
{
	int sample;
	sample = x + 1;
	return sample;
}

int main(void) 
{
	int input = 1; 
	print("%d",add_1(input));
}
