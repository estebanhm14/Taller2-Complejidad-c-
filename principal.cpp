#include <iostream>
using namespace std;
#include "funciones.h"

//Prototipos
void probarPotencia ();
void probarBusqueda();
void probarBurbuja ();
void probarSeleccion ();
char probarEmparejamiento();

//Funcion principal: Menú
int main () {
	int opcion = -1;
	while (opcion != 0) {
		cout << endl << "Seleccione una opcion:";
		cout<< endl <<"0:Salir, 1:Sacar potencia, 2:Busqueda Exhaustiva, 3:Ordenamiento por burbuja, 4:Ordenamiento por selección, 5:Emparejar cadenas. ";
		cin >> opcion;
		switch (opcion) {
			case 0: return 0;
			case 1: probarPotencia (); break;
			case 2: probarBusqueda (); break;
			case 3: probarBurbuja(); break;	
			case 4: probarSeleccion (); break;
			case 5: probarEmparejamiento(); break;
		}
	}
	return 0;
}
//funcion de sacar potencia
void probarPotencia () {
	int base, exponente, resultado;
	cout << "Ingrese base: ";
	cin >> base;
	cout << "Ingrese exponente: ";
	cin >> exponente;
	resultado = potencia (base, exponente);
	cout << "El resultado fue: " << resultado << endl;
}

//Funcion de busqueda exhaustiva
void probarBusqueda() {
	int A[]={2,5,4,3,7,6,1,8,9,0};
	int k, resultado=0;
	int n = 10;
	cout << "Ingrese el numero que desea buscar (Del 0 al 9): ";
	cin >> k;
	resultado = busqueda (A,n,k);
	cout << "El numero esta en la pos: " << resultado << endl;
}

//Funcon que organiza un arreglo de menor a mayor de izq a der en la forma de burbuja.
void probarBurbuja () { 
	int arr[]={2,5,4,3,7,6,1,8,9,0};
	int n = 10;
	ordenBurbuja (arr, n);
	
}

//Funcion que organiza un arreglo por selección
void probarSeleccion () {
	int arr[]={2,5,4,3,7,6,1,8,9,0};
	int n = 10;
	ordenSeleccion (arr, n);
}

//Funcion que empareja dos cadenas
char probarEmparejamiento() {
	char Arr[] = "estebananote";
	char Brr[] = "banano";
	int n=12, m=6,resultado;
	resultado=emparejaCadenas (Arr, n, Brr, m);
	cout << resultado << endl;
}
