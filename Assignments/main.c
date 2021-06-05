#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <math.h>
// Root of Quadratic Equation

int main()
{
 int a,b,c;

 printf("\nType coefficients of the quadratic equation In the form      \n A B C:");
 scanf("%d" "%d" "%d",&a,&b,&c);
 if((pow(b,2)-4*a*c)<0){
  double complex x=(-b+(csqrt(pow(b,2)-4*a*c)));
  double complex y=(-b-(csqrt(pow(b,2)-4*a*c)));
  double pRealx= creal(x);
  double pimagx= cimag(x);
  double pRealy= creal(y);
  double pimagy= cimag(y);
  printf("\nThe roots are %lf+%lfi and %lf%lfi\n",pRealx/(2*a),pimagx/(2*a),pRealy/(2*a),pimagy/(2*a));
  return 0;
 }else
 {
 float x=(-b+(sqrt(pow(b,2)-4*a*c)));
 float y=(-b-(sqrt(pow(b,2)-4*a*c)));
 printf("\nThe solutions are %f and %f\n",x/(2*a),y/(2*a));
return 0;
}
}
