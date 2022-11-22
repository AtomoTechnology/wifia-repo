#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>


#define FavouriteColor 10
#define MyName "Hilaire"
void main() {

//    //declaration d'una variable
//    int age ;
//    printf("entrez votre age : ");
//    scanf("%i",&age);
//    printf ( " Votre age est : %i couleur favorite : %d Nme : %s ",age,FavouriteColor,MyName );
//    char name[20] ;
//    scanf("%s",name);
//    printf("%s",name);

    printf("%i, %i , %d , %d, %d\n\n",10+10,10-10,10*10,10/10, 8%3 );

    int a ;
    int b ;
    fflush(stdin);
    printf("valeur a : ");
    scanf("%i",&a);
//    stdin(fflush());
    fflush(stdin);
//     fflush(stdin);
    printf("valeur b : ");

    scanf("%i",&b);
    printf("a  + b = %i ", a+b);

}
