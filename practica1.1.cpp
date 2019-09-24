#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
int main (void){
    int opt;
printf ("1 - Suma \n");
printf ("2 - Resta \n");
printf ("3 - Multiplicacion \n");
printf ("introduce 1 para la suma");
scanf ("%d",&opt);
int a;
int b;
printf ("Introduce la primer cantidad\n");
scanf ("%d",&a);
printf ("Introduce la segunda cantidad\n");
scanf ("%d",&b);
int c;
if (opt==1){
    c=a+b;
}

else{
        if (opt==2){
    c=a-b;
}
else {
    c=a*b;
}
}
printf ("El rsultado es %d",c);
}
