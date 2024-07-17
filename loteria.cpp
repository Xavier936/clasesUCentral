/*Realice un programa que solicite al usuario que piense un n�mero entero entre el 1 y el 100. 
El programa debe generar un numero aleatorio en ese mismo rango [1-100], indicarle al usuario 
si el n�mero que d�gito es menor o mayor al n�mero aleatorio, as� hasta que lo adivine. 
Y por �ltimo mostrarle el n�mero de intentos que le llevo.*/

#include <iostream>
#include "stdlib.h"
#include "time.h" // contiene las definiciones de las funciones para manipular datos e informacion de tiempo

using namespace std;

int main(int argc, char *argv[]){
	int n1,n2,i,cont=0;// se crea las variables para almacenar el numero aleatorio, el numero que el usuario ingres y un contador inicializado en 0
	srand(time(NULL));// se le pasa como par�metro un n�mero que se utilizar� como n�mero inicial 
	for (i =1; i<= 100; i++){// hacemos un recorrido de la variable i desde 1 hasta 100
		n1 =1+rand()%(101-1);// se genera numeros aleatorios hasta 100 y se lo almacena en la variable n1
	}
	cout<<"                                         "<<" Universidad Central del Ecuador "<<endl;
	cout<<"                                         "<< " Programacion y Base de Datos "<<endl;
	cout<<"  " <<"Autores: Jose Luis De la Cruz Cayambe, Dayana Abigail Ortega Ram�rez., Roddy Oliver Arellano Balcazar "<<endl;
	cout<<"  " <<  "Carrera: Ing.Petroleos "<<endl;
	cout<<"  " <<  "Curso: P2-001 Petroleos."<<endl;
	cout<<"  " <<  "Semestre: Segundo"<<endl;
	cout<<"  " <<  "Fecha: 30/01/2021"<<endl<<endl;
	 //cout<<n1;
	do{
		cout<<"En que numero estoy pensando?, Digita un numero del 1 al 100: "; // El usuario debe digitar un numero del 1 al 100
		cin>>n2;// almaceno el numero ingresado
		if(n2>n1) { // pregunto si el numero ingresado es mayor que el generado aleatoriamente
			cout<<"Upss... tu numero es  mayor, vuelve a intentarlo"<<endl; // muestro mensaje de si es verdad
			cont++; // aumento el contador en uno
			}
		else if(n2<n1) { // pregunto si el numero ingresado es menor que el generado aleatoriamente
			cout<<"Upss... tu numero es  menor, vuelve a intentarlo"<<endl;// muestro mensaje de si es verdad
			cont++; // aumento el contador en uno
			}
		else{ // en caso de ser falso las dos sentencias anteriores
			cout<<"Felicitaciones.... Acertaste!"<<endl;// mostrara el mensaje de Acierto
			cont++;// aumentara el contador en 1
			cout<<"Lo Lograste al intento numero "<<cont<<endl; // mostrara el numero de intentos que te llevo acertar el numero
		}
		
	}while(n1 != n2);// se repite siempre que el numero generado aleatoriamente sea diferente que el ingresado
	system("PAUSE");// el sistema espera por otra instruccion en caso de haber
	return 0;
}


