#include <math.h>
#include <iostream>
using namespace std;

//Esta funcion da el resultado de un numero^n
int potencia (int base, int exponente) {
	int resultado;
	resultado = pow (base, exponente);
	return resultado;
}


//Esta funcion hace una busqueda en general 
int busqueda (int A[], int n, int k) {
	int resultado;
	int i = 0;
	while (i<n) {
		if (A[i] == k) {
			return i;
		}		
		i++;
	}
	return -1;
}


//Esta funcion ordena un arreglo con la forma burbuja
void ordenBurbuja (int arr[], int n) {
	int i=0, j=0;
	int temp=0;
	cout << "Nuestro arreglo a ordenar es: ";
	for(i=0;i<n;i++) {
		cout<< arr[i];
	}
	for (i=0; i <= n-1; i++) {	
		for(j=0;j<n;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
					
	}
	cout << "Arreglo ordenado: ";
	for(i=0;i<n;i++) {
		cout<<arr[i];	
	}
}
					

//Esta funcion ordena arreglos por seleccion				
void ordenSeleccion (int arr2[], int n) {
	int i=0, j=0, temp=0, min=0;
	cout << "Nuestro arreglo a ordenar es: ";
	for(i=0;i<n;i++) {
		cout<< arr2[i];
	}
	for(i=0; i<n-1; i++) {
		min=i;
		for(j=i+1; j<n ; j++){
			if(arr2[j] < arr2[min]) {
				min = j;
			}
		temp = arr2[i];
		arr2[i] = arr2[min];
		arr2[min] = temp;
		}	
	}
	cout <<"\n"<<"Arreglo ordenado: ";
	for(i=0;i<n;i++) {
		cout<< arr2[i];	
	}
}
		
				
//Esta funcion compara dos cadenas de caractes y las EMPAREJA
char emparejaCadenas (char Arr[], int n, char Brr[], int m) {
	for (int i=0; i < n-m; i++) {
		int j = 0; 
		while((j < m) && (Brr[j] == Arr[i+j])) {
			j = j+1;
		}
		if (j == m) {
			return i;
		}
	}
	return -1;
}
	
	












