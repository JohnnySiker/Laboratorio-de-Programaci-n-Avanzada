#include <stdio.h>
#include <math.h>


double f(double x){
  return x*exp(x)-5;
}

double biseccion(double a,double b,double err , int maxIter){
  double c,errAprox = 1,valorReal = 0, valorAprox = 0;
  int ciclos = 0;
  c = (a+b)/2;

  printf("\t%3d %8.4f %8.4f %8.4f\n",ciclos,a,b,c);

  do{

    if ( (f(a)*f(c)) <= 0){
      b = c;
    }else{
      a = c;
    }
    valorAprox = c;
    c = (a+b)/2;
    valorReal = c;
    errAprox = fabs((valorReal - valorAprox)/valorReal)*100;
    ciclos++;
     printf("|\n\t%3d %8.4f %8.4f %8.4f %8.8f \n",ciclos,a,b,c,errAprox);
  }while(ciclos <= maxIter && err < errAprox);

  if (ciclos<= maxIter){
    printf("\n\n\t La raíz de la ec. es: %lf\n",c);
  }else{
    printf("No se encontro la raíz en  %d iteraciones\n",maxIter);
  }

  return c;
}


int main(){
  double a,b,err;
  int maxIter;

  printf("Dame el valor de a: ");
  scanf("%lf",&a); 

  printf("Dame el valor de b: ");
  scanf("%lf",&b);

  printf("Cual es la tolerancia: ");
  scanf("%lf",&err);

  printf("Numero máximo de iteraciones: ");
  scanf("%i",&maxIter);

  printf("\n——————————————————————————————————————————————————————————————————\n");
  printf("\tCiclos\ta\tb\tc\tError");
  printf("\n——————————————————————————————————————————————————————————————————\n");

  biseccion(a,b,err,maxIter);

  return 0;
}