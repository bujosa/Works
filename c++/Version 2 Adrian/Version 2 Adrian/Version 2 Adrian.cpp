// Adrian.cpp version created in Visual Studio 2017 
#include "pch.h"

#include <iostream>
#include <string>

using namespace std;

int **Matriz;
int n = 0;

void ESCRITURA();
void LECTURA();
void ALGORITMO();

int main() {

	std::string opcion = "vacio";
	bool Mientras = true;
	while (opcion != "SI")
	{
		while (Mientras)
		{
			std::system("CLS");
			std::cout << "Ingrese la dimension de su Matriz: ";
			std::cin >> n;
			if (n < 0)
			{
				// Invalid Matriz esta frase es sacada del mandato.
				std::cout << "Dimension de Matriz Invalidad, favor volver a ingresar una dimension valida \n\n";
				std::system("pause");
			}
			else
				Mientras = false;
		}

		// Arreglo Dinamico
		Matriz = new int *[n];

		for (int i = 0; i < n; i++)
			Matriz[i] = new int[n];

		// Llamado de funciones
		LECTURA();
		std::system("CLS");
		ESCRITURA();
		ALGORITMO();
		ESCRITURA();
	
		std::cout << "\nDesea salir del programa (SI/NO):\n";
		std::cin >> opcion;
		if (opcion == "SI" || opcion == "NO")
			Mientras = true;

		while (Mientras == false)
		{
				std::system("CLS");
				std::cout << "Ingrese SI o No\n";
				std::getline(cin, opcion);

				if (opcion == "SI")
					Mientras = true;
				if (opcion == "NO")
					Mientras = true;
		}	
	}
	std::system("CLS");
	std::cout << "Programa Terminado\n";
}

// Esta funcion crea la Matriz del tama�o N*N y ademas agrega elementos al vector

void LECTURA() {

	std::system("CLS");

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << "Posicion en la Matriz [" << i << "][" << j << "]: ";
			std::cin >> Matriz[i][j];
		}
	}
}

// Esta funcion Muestra los valores almacenados en la matriz bidimensional

void ESCRITURA() {

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++)
			std::cout << Matriz[i][j] << "\t";
		std::cout << "\n";
	}
}


//SECCION 01: Poner ambas diagonales en 0
void ALGORITMO() {

	std::system("CLS");

	for (int a = 0; a < n; a++)
	{
		for (int b = 0; b < n; b++)
		{
			if (b == a)
				Matriz[a][b] = 0;
			if (a + b == n - 1)
				Matriz[a][b] = 0;
		}
	}
}

