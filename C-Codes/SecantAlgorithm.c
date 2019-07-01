#include<stdio.h>
#include<math.h>
# define e 0.001
# define f(x) x*x*x-4*x+1
int main(){
	float x0,x1,x2,f0,f1,f2;
	int i  = 0;
	printf("Enter the values of x0 and x1");
	scanf("%f %f",&x0,&x1);
	printf("%f",fabs(f2));
	do{
		 f0 = f(x0);
		 f1 = f(x1);
		 x2 = x1 - (f1*(x1-x0))/(f1-f0);
		 f2 = f(x2);
		 f0 = f1;
		 f1 = f2;
		 x0 = x1;
		 x1 = x2;
		 i++;
      }while(fabs(f2)>e)
      printf(" the Approximated root of the equation is %f",x2);
      printf(" number of iterations performed %d",i);
      return 0;
}