#include <stdio.h>
#include <stdlib.h>

int main(){
    printf ("hola mundo, soy un hacker");
    printf ("\nsaludos a todos");
    float a,b,c;
    int opt;
    printf ("\n 1.-suma\n 2.-resta\n 3.-multiplicacion\n 4.-division");
    printf ("\n seleccione una opcion");
    scanf  ("%d",&opt);
    printf("Ingrese el primer operando:");
    scanf ("%f",&a);
    printf ("Ingrese el segundo operando:");
    scanf  ("%f",&b);
    if     (opt==1){
        c=a+b;
    }
    else if (opt==2){
        c=a-b;
    }
    else if (opt==3){
        c=a*b;
    }
    else if (opt==4){
        while (b==0){
        printf("Error b, debe ser distinto de 0\n");
        printf ("Introduce el segundo operando");
        scanf ("%f",&b);
    }
    c=a/b;
    }
    else{
printf("opcion invalida");
    c=0;
}
printf("El resultado es %f",c);
}



