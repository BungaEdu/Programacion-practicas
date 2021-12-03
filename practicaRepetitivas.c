#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 10

main () {

    setlocale(LC_CTYPE,"Spanish");
    short num=0, tam=0, i=0, primero=0, totTab=0, totFil=0;
    
/*Aqu� tengo que meter algo de control*/
/*    printf("Introduce n�mero de tablas (0 para terminar):\n");
    scanf("%hd",&num);
    printf("Introduce tama�o de la tabla:\n");
	scanf("%hd",&tam);

	prueba 2
*/
	num=2;tam=5;
	
totTab=num+1;
totFil=tam+1;
	
	/*for(i=1;i<num;i++){*/
	primero=1;
		for(i=1;i<totFil;i++)
			printf("%hd X %hd : %hd\n",primero,i,primero*i);
	

	


return 0;   	
}
