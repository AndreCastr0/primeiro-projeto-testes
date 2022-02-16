#include<stdio.h>
#include<locale.h>
#include<string.h>
/*
1)
Escreva um programa que declare um inteiro, um real e um
char, e ponteiros para inteiro, real, e char. Associe as vari ´aveis
aos ponteiros (use &). Modifique os valores de cada vari ´avel
usando os ponteiros. Imprima os valores das vari ´aveis antes e
ap ´os a modifica ¸c ~ao.

*/
//RESPOSTA:

//	printf("Antes de mudar: \n");
//	
//	int n=5;
//	float f=6.22;
//	char c='t';	
//	
//	int *pn=&n;
//	float *pf=&f;
//	char *pc=&c;
//	
//	printf("%d \n",*pn);
//	printf("%.f \n",*pf);
//	printf("%c \n",*pc);
//	
//	*pn=*pn+3;
//	*pf=*pf+1;
//	*pc='w';
//	
//	printf("Depois de mudar: \n");
//	
//	printf("%d \n",*pn);
//	printf("%f \n",*pf);
//	printf("%c \n",*pc);
	



//2)Escreva um programa que contenha duas vari ´aveis inteiras.
//Leia essas vari ´aveis do teclado. Em seguida, compare seus
//endere ¸cos e exiba o conte ´udo do maior endere ¸co.

//RESPOSTA:

//int main(){
//	setlocale(LC_ALL,"Portuguese");
//
//	int a;
//	int b;
//	
//	int *pa;
//	int *pb;
//	printf("Digite A: \n");
//	scanf("%d",&pa);
//	
//	printf("Digite B: \n");
//	scanf("%d",&pb);
//	
//	if(pa>pb){
//		printf("O endereço de A é maior \n");
//	}else{
//	printf("O endereço de B é maior \n");
//	}
//	
//	printf("O VALOR DE pa é : %d \n O endereço de pa é : %d \n O VALOR DE pb é : %d \n O endereço de pb é : %d \n",pa,&pa,
//	pb,&pb);
//	
//	return 0;
//}


//3) Fa ¸ca um procedimento (fun ¸c ~ao que retorna o tipo void) que
//receba duas vari ´aveis por referˆencia a e b como parˆametro e
//troque o valor de a e b. Por exemplo, se a = 10 e b = 20,
//ap ´os executar a fun ¸c ~ao as vari ´aveis devem estar valendo a =
//20 e b = 10.

	
//	int trocar(int *x, int *y){
//		int aux;
//		
//		aux=*x;
//		
//		aux=*x;
//		*x=*y;
//		*y=aux;
//		
//		return printf("\n %d \n",*x);
//	}
//	
//int main(){
//	setlocale(LC_ALL,"Portuguese");
//	
//	int a;
//	int b;
//	
//	printf("Digite A: \n");
//	scanf("%d",&a);
//	
//	printf("Digite B: \n");
//	scanf("%d",&b);
//	
//	trocar(&a,&b);
//
//	printf("O VALOR DE A É: %d \n",a);
//	printf("O VALOR DE B É: %d \n",b);
//	return 0;
//}	
//	
	int linha_venha(){
	return printf("\n ###### \n");
	}
	
	int main(){
	setlocale(LC_ALL,"Portuguese");
	
	linha_venha();
	
	return 0;
}	
	
	
	
	
