// Online C compiler to run C program online
#include <stdio.h>

/* Prototipi */
int len( char a[] );
float pi();
float nep();
/* ALTRO PROGRAMMA
float nep(){
    return 2.71;
}
*/


void main(){
    char x[] = "questo e' un programma";
    
    printf("La lunghezza della stringa e' %d\n", len(x) );
    printf("il valore di pi-greco e' %f\n", pi() );
    printf("il valore di e e' %f\n", nep() );
} /* il compilatore valuta in automatico: "numero parametri, tipo parametri, tipo di ritorno" */

int len( char a[] ){
    int len = 0;
    
    while ( a[len] != '\0'){
        len++;
    }
    
    return len;
}

float pi(){
    return 3.14;
}
