#include <stdio.h>
#include <stdlib.h>
/*
char a;
char b;
char ai = 10;
char bi = 10;
static char sb = 5;



int main(){
	int la;
	int lb;
	int lai=20;
	int lbi= 30;
	
	
	printf("a:	%p \n", &a);
	printf("b: 	%p \n", &b);
	printf("ai: 	%p \n", &ai);
	printf("bi: 	%p \n", &bi);
	printf("main: 	%p \n", &main);
	printf("la: 	%p \n", &la);
	printf("lb: 	%p \n", &lb);
	printf("lai: 	%p \n", &lai);
	printf("lbi: 	%p \n", &lbi);
}

*/

int main(){
	//manejo de memoria dinamica
	
	//1)variables con memoria dinamica
	int *variableMD;
	variableMD = (int *) malloc(sizeof(int));
	*variableMD=10;
	printf("%d \n", *variableMD);
	//malloc regresa la primer direccion en memoria de la memoria que se reservo
	//si se asigna un numero constante a malloc puede que el programa no funcione en sistemas operativos que no sean iguales (16/32/64 bits)
	char *c_variableMD;
	c_variableMD = (char *) malloc(sizeof(char));
	*c_variableMD='A';
	printf("%c\n", *c_variableMD);
	
	//si ocupas un arreglo de varios elementos se multiplica la memoria asignada por 10
	float *f_variableMD = 0;
	f_variableMD = (float *)malloc(sizeof(float)*10);
	
	char *cp=(char *)malloc(sizeof(char)*10);
	int i=0;
	cp[i]='A';
	printf(" p = %p\n", cp);
	for (i=1; i<10;i++)
		cp[i] = cp[i-1]+1;
		//sin el -1 en cp[i-1] imprime basura
	for(i=0;i<10;i++)
		printf(" %c ", cp[i]);
	return 0;
	
	
	
	
	

}

