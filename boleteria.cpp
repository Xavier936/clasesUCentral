/*Se ponen a la venta, las entradas para el teatro, cuyo precio depende de 
la ubicación, así: tribuna norte y sur cuesta 15 dólares, tribuna oriente cuesta 30 dólares 
y tribuna occidente cuesta 40 dólares. Diseñe un programa que controle la venta de dichas entradas 
a fin de poder saber la cantidad de personas que asisten a cada tribuna, la cantidad total de personas (Asistencia) 
y el monto total recaudado por la venta parcial y total de las entradas. (Recaudación).*/

#include <iostream>
#include "stdio.h"
#include "stdlib.h"

using namespace std;

int main(int argc, char *argv[]){
	int opcion;//variable para el menu de opciones
	int tn,ts,to,toc,tt; //variables para almacenar totales
	int n; // variable para el numero de boletos a comprar
	int bn,bs,bo,boc; // variables que almacenaran el calculo de venta de boletos
	int contn = 0, conts = 0, conto = 0,contoc = 0,contt = 0; // variables que almacenaran la cantidad de boletos vendidos
	int sn = 15 , ss = 15, so = 30, soc = 40 ; // variables que almacenan el preicio unitario de los boletos
	
	cout<<"                                  UNIVERSIDAD CENTRAL DEL ECUADOR"<<endl;
	cout<<"                                    Programacion y Base de Datos"<<endl;
	cout<<"  " <<"Autores: Jose Luis De la Cruz Cayambe, Dayana Abigail Ortega Ramírez., Roddy Oliver Arellano Balcazar "<<endl;
	cout<<"  " <<  "Carrera: Ing.Petroleos "<<endl;
	cout<<"  " <<  "Curso: P2-001 Petroleos."<<endl;
	cout<<"  " <<  "Semestre: Segundo"<<endl;
	cout<<"  " <<  "Fecha: 30/01/2021"<<endl<<endl;
	
	do{
		cout<<"                    *----------------------------------------------------*"<<endl;
		cout<<"                    |             TEATRO NACIONAL SUCRE                  |"<<endl;
		cout<<"                    |             Hoy.. Festival de Danzas               |"<<endl;
		cout<<"                    |             Adquiera su entrada                    |"<<endl;
		cout<<"                    *----------------------------------------------------*"<<endl<<endl;
		cout<<"                    *----------------------------------------------------*"<<endl;
		cout<<"                    |  Ubicaciones Disponibles                           |"<<endl;
		cout<<"                    |  1) Tribuna Norte                                  |"<<endl;
		cout<<"                    |  2) Tribuna Sur                                    |"<<endl;
		cout<<"                    |  3) Tribuna Oriente                                |"<<endl;
		cout<<"                    |  4) Tribuna Tribuna Occidente                      |"<<endl;
		cout<<"                    |  5) Resumen                                        |"<<endl;
		cout<<"                    |  6) Salir                                          |"<<endl;
		cout<<"                    *----------------------------------------------------*"<<endl;
		cout<<"Ingrese su seleccion: "; // Se pide que se digite unnumero del menu del opciones
		cin>>opcion; // Se almacena la opcion en una valiable
		switch(opcion){
			case 1:
				do{ // opcion 1 
					
					cout<<"                    *----------------------------------------------------*"<<endl;
					cout<<"                    |                                                    |"<<endl;
					cout<<"                    |                 TRIBUNA NORTE                      |"<<endl;
					cout<<"                    |                                                    |"<<endl;
					cout<<"                    *----------------------------------------------------*"<<endl;
					cout<<"Cuantas entradas desea comprar?: "; //se pide que digite el numero de entras a comprar
					cin>>n; // se almacena el valor en variable
					if(n > 0){ // preguno si la cantidad de boletos a comprar es mayor a 0
						bn = n * sn; // multiplico la cantidad de boletos por el valor unitario
						cout<<"El valor de su compra es: "<<bn<<endl; // Presento en pantalla el mensaje con el precio de los boletos comprados
						cout<<"Gracias por su compra!"<<endl;
						contn = contn + n; // al contador se le suma el valor de n y lo almacena
					}
					cout<<"Desea comprar mas entradas en esta ubicacion?"<<endl; //Se pregunta al usuario si desea comprar mas entradas
					cout<<"1) SI"<<endl;
					cout<<"2) NO"<<endl;
					cin>>opcion; // digitara una opcion y lo amacenara un una variable
					
				}while(opcion <= 1);// se valida que la opcion sea 1 en caso de ser 2 regresa al menu principal
				while(opcion >= 3){
					cout<<"opcion incorrecta, vuelva a dijitar un numero: ";
					cin>>opcion;
				}
				
					break;
				
			
			
			case 2:
				do{
					
					cout<<"                    *----------------------------------------------------*"<<endl;
					cout<<"                    |                                                    |"<<endl;
					cout<<"                    |                 TRIBUNA SUR                        |"<<endl;
					cout<<"                    |                                                    |"<<endl;
					cout<<"                    *----------------------------------------------------*"<<endl;
					cout<<"Cuantas entradas desea comprar: "; //se pide que digite el numero de entras a comprar
					cin>>n;// se almacena el valor en variable
					if(n != 0){// preguno si la cantidad de boletos a comprar es mayor a 0
						bs = n * ss;// multiplico la cantidad de boletos por el valor unitario
						cout<<"El valor de su compra es: "<<bs<<endl; // Presento en pantalla el mensaje con el precio de los boletos comprados
						cout<<"Gracias por su compra!"<<endl;
						conts = conts + n;// al contador se le suma el valor de n y lo almacena
					}
					cout<<"Desea comprar mas entradas en esta ubicacion?"<<endl;//Se pregunta al usuario si desea comprar mas entradas
					cout<<"1) SI"<<endl;
					cout<<"2) NO"<<endl;
					cin>>opcion; // digitara una opcion y lo amacenara un una variable
					
				}while(opcion <= 1);// esta opcion se ejecutara mientras no se digite un numero mayor a 1
				while(opcion >= 3){
					cout<<"opcion incorrecta, vuelva a dijitar un numero: ";
					cin>>opcion;
				}
				
				
					
					break;
				
					
			
			break;
			case 3:
				do{
				
					cout<<"                    *----------------------------------------------------*"<<endl;
					cout<<"                    |                                                    |"<<endl;
					cout<<"                    |                 TRIBUNA ORIENTE                    |"<<endl;
					cout<<"                    |                                                    |"<<endl;
					cout<<"                    *----------------------------------------------------*"<<endl;
					cout<<"Cuantas entradas desea comprar: "; //se pide que digite el numero de entras a comprar
					cin>>n;// se almacena el valor en variable
					if(n != 0){// preguno si la cantidad de boletos a comprar es mayor a 0
						bo = n * so;// multiplico la cantidad de boletos por el valor unitario
						cout<<"El valor de su compra es: "<<bo<<endl;// Presento en pantalla el mensaje con el precio de los boletos comprados
						cout<<"Gracias por su compra!"<<endl;
						conto = conto + n;// al contador se le suma el valor de n y lo almacena
					}
					cout<<"Desea comprar mas entradas en esta ubicacion?"<<endl;//Se pregunta al usuario si desea comprar mas entradas
					cout<<"1) SI"<<endl;
					cout<<"2) NO"<<endl;
					cin>>opcion;// digitara una opcion y lo amacenara un una variable
					
				}while(opcion <= 1);// esta opcion se ejecutara mientras no se digite un numero mayor a 1
				while(opcion >= 3){
					cout<<"opcion incorrecta, vuelva a dijitar un numero: ";
					cin>>opcion;
				}
				
					break;
			
			
			
			case 4:
				do{
					
					cout<<"                    *----------------------------------------------------*"<<endl;
					cout<<"                    |                                                    |"<<endl;
					cout<<"                    |                 TRIBUNA OCCIDENTE                  |"<<endl;
					cout<<"                    |                                                    |"<<endl;
					cout<<"                    *----------------------------------------------------*"<<endl;
					cout<<"Cuantas entradas desea comprar: "; //se pide que digite el numero de entras a comprar 
					cin>>n;// se almacena el valor en variable
					if(n != 0){// preguno si la cantidad de boletos a comprar es mayor a 0
						boc = n * soc;// multiplico la cantidad de boletos por el valor unitario
						cout<<"El valor de su compra es: "<<boc<<endl;// Presento en pantalla el mensaje con el precio de los boletos comprados
						cout<<"Gracias por su compra!"<<endl;
						contoc = contoc + n;// al contador se le suma el valor de n y lo almacena
					}
					cout<<"Desea comprar mas entradas en esta ubicacion?"<<endl;//Se pregunta al usuario si desea comprar mas entradas
					cout<<"1) SI"<<endl;
					cout<<"2) NO"<<endl;
					cin>>opcion;// digitara una opcion y lo amacenara un una variable
					
				}while(opcion <= 1);// esta opcion se ejecutara mientras no se digite un numero mayor a 1
				while(opcion >= 3){
					cout<<"opcion incorrecta, vuelva a dijitar un numero: ";
					cin>>opcion;
				}
				
					break;
			
			
			
			case 5:
				do{
					
					cout<<"                    *----------------------------------------------------*"<<endl;
					cout<<"                    |                                                    |"<<endl;
					cout<<"                    |                 RESUMEN DE INGRESOS                |"<<endl;
					cout<<"                    |                                                    |"<<endl;
					cout<<"                    *----------------------------------------------------*"<<endl;
					tn = contn * sn; // se multiplica el contador 
					ts = conts * ss;// por el valor unitario de 
					to = conto * so;// cada tribuna y  se lo almacenara  
					toc = contoc * soc;//en variables
					tt = tn+ts+to+toc; // se suma todos los totales de los boletos vendidos
					contt = contn + conts + conto + contoc; // se suma todos los contadores
					cout<<"A tribuna norte ingresaron "<<contn<<" espectadores y se recaudo "<<tn<<" dolares"<<endl; // se presenta en pantalla 
					cout<<"A tribuna sur ingresaron "<<conts<<" espectadores y se recaudo "<<ts<<" dolares"<<endl; // el valor de los boletos
					cout<<"A tribuna oriente ingresaron "<<conto<<" espectadores y se recaudo "<<to<<" dolares"<<endl; //  vendidos y la cantidida
					cout<<"A tribuna occidente ingresaron "<<contoc<<" espectadores y se recaudo "<<toc<<" dolares"<<endl;// de personas en cada tribuna
					cout<<"El teatro tuvo una asistencia de "<<contt<<" espectadores y se recaudo "<<tt<<" dolares"<<endl;// presento el valor total de los boletos y de personas que asistieron al teatro
					cout<<"1) Salir"<<endl;
					cin>>opcion;
					
				}while(opcion <=0);// esta opcion se ejecutara mientras no se digite un numero mayor a 0
				while(opcion >= 2){
					cout<<"opcion incorrecta, vuelva a dijitar un numero: ";
					cin>>opcion;
				}
				
					break;
			
				
		}		
	}while(opcion <= 5); // se presentara el munu principal mientras no se digite un numero mayor a 5
	system("PAUSE");// el sistema se pone en espera de otra instruccion
	return 0;
}

