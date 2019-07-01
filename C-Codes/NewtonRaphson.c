#include<stdio.h>
#include<math.h>
# define e 0.001
# define f(x) pow(x,3)-4*x+1
# define df(x) 3*x*x-4
int main(){
    float x0,x1,f0,f1,df0;
    int i = 0;
    printf("Enter the Value of x0(Starting point)");
    scanf("%f",&x0);
    while(fabs(f1)>e){
    	f0 = f(x0);
    	df0 = df(x0);
    	x1 = x0 - f0/df0;
    	f1 = f(x1);
        x0 = x1;
        i++;
    }
    printf("Number of iterations required : %d",i);
    printf("Root Approximation : %f",x1);
    return 0;
}