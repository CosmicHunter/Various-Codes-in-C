#include<stdio.h>
#include<math.h>
# define e 0.0001
# define f(x) x*x*x-4*x+1
int main(int argc, char const *argv[])
{
	  int i = 0;
	  float x0,x1,x2,f0,f1,f2;
	  printf("Enter the value of x0 and x1");
	  scanf("%f %f",&x0,&x1);
	 do{ 
	  f0 = f(x0);
	  f1 = f(x1);
	  x2 = (x0 + x1)/2;
	  f2 = f(x2);
	  if(f0 * f2 > 0 ){
	  	  x0 = x2;
	  } 
	  else{
	  	  x1 = x2;
	  }
	  i++;
	}while(fabs(f2)>e);
	printf("The Approximated root is : %f",x2);
	printf("Number of iterations performed : %d",i);
	return 0;
}	