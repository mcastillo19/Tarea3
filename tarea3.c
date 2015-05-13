# include <stdio.h>

# define N 2

int main(){

	int a;
	int b;
	int c;

	a = 16;
	b = 1;

	c=(a+b)-(N-b);
	c=c/b;
	c=c*b*b;
	c=c - N;
	c=c++;
	c=c--;
	c=c + N;

printf("%d\n",c );

return 0;
}