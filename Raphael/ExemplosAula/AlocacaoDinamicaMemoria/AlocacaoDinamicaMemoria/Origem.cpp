#include <iostream>

void main() {
	//aloca��o din�mica de mem�ria

	int * v = new int;
	//Aloca��o din�mica de mem�ria do C++
	int * v1 = new int[10];
	delete v1; //libera o espa�o de mem�ria alocado.
	//Aloca mem�ria, mas n�o inicializa
	//int * v2 = (int*)malloc(10 * sizeof(int));
	//free(v2); //libera o espa�o de mem�ria alocado

	//Aloca mem�ria e inicializa com zeros (mais lenta que o malloc)
	int * v2 = (int* )calloc(10, sizeof(int));
	
	//for (int i = 0; i < 10; i++) v2[i] = 0;
	*(v2+6) = 2;
	
	v2 = (int *)realloc(v2, 15 * sizeof(int));
	std::cout << v2[6] << std::endl;
	std::cout << v2[3] << std::endl;
	int vet[10];


	system("pause");

}