 /*Haga un programa para, una empresa comercializadora, que tiene organizados a sus vendedores en cuatro departamentos
 y ha establecido un programa de incentivos para incrementar su productividad. El gerente, al final del mes, pide el valor global de las ventas de los cuatro departamentos 
 y analiza que departamento(s) excedan el 25% de las ventas totales, a los que se les paga una cantidad extra equivalente al 20% de su salario mensual 
 y si las ventas superan el 50% el extra es del 40% de su salario mensual. Si todos los vendedores tienen un salario base igual, 
 determinar cuánto recibirán los vendedores de los cuatro departamentos al finalizar el mes*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(int argc, char *argv[]){
	//setlocale(LC_ALL,"");
cout<<"                                  UNIVERSIDAD CENTRAL DEL ECUADOR"<<endl;
	cout<<"                                    Programacion y Base de Datos"<<endl;
	cout<<"  " <<"Autores: Jose Luis De la Cruz Cayambe, Dayana Abigail Ortega Ramírez., Roddy Oliver Arellano Balcazar "<<endl;
	cout<<"  " <<  "Carrera: Ing.Petroleos "<<endl;
	cout<<"  " <<  "Curso: P2-001 Petroleos."<<endl;
	cout<<"  " <<  "Semestre: Segundo"<<endl;
	cout<<"  " <<  "Fecha: 30/01/2021"<<endl<<endl;

	int cantv1 = 0, cantv2 = 0,cantv3= 0, cantv4 = 0, salario, departamento, pro,i=0,total=0,n, vent1=0,vent2=0,vent3=0,vent4=0; //Iniciamos declarando variables encerandolas
	float calculo, ventto=0,porcvent1=0,porcvent2=0,porcvent3=0,porcvent4=0;
	
	cout<<" Bienvenidos a nuestro sistema de ventas, para saber su sueldo mensual "<<endl<<endl;
	cout<<" Ingrese el numero de empleados para entrar a su departamento de ventas:\t";
	cin>>n; //Pedimos el numero de empleados que pertenezcan a cada departamento
	if(n<=0) //Validamos n datos
	{
		cout<<" Error, reintente porfavor"<<endl;
		cout<<" Ingrese el numero de empleados para entrar a su departamento de ventas:\t";
		cin>>n;		
	}
	cout<<endl;
	cout<<" Ingrese el salario actual percibido por todos los trabajadores:\t\t";
	cin>>salario; //Ingresamos la variable de salario
	cout<<" __________________________________________________________________"<<endl<<endl;
	
	for(i=0;i<n;i++)      //Ingresamos un contador para los departamentos
	{
		cout<<" \tBuenos dias, Trabajador N°: "<<i+1<<endl<<endl;
		cout<<" Ingrese el departamento al cual pertenece:\t\t";
		cin>>departamento;
		
		while (departamento > 4 || departamento <1)  //validamos para que solo sea los 4 departamentos 
		{
		    cout<<" Solo existen 4 departamentos posibles "<<endl;
		    cout<<" \tBuenos dias, Trabajador N°: "<<i+1<<endl<<endl;
			cout<<" Ingrese el departamento al cual pertenece:\t\t";
		    cin>>departamento;
		}

		if(departamento==1)      //Ponemos un condicional para ver a que departamento pertenece cada empleado
		{
			cout<<" Usted pertenece al departamento N° 1 "<<endl;
			cout<<" Ingrese el numero de ventas realizadas en el mes:\t";
			cin>>cantv1;
			vent1=cantv1+vent1;
			
			cout<<" __________________________________________________________________"<<endl<<endl;
		}
		
		if(departamento==2)
		{
			cout<<" Usted pertenece al departamento N° 2"<<endl;
			cout<<" Ingrese el número de ventas realizadas en el mes:\t";
			cin>>cantv2;
			vent2=cantv2+vent2;
			cout<<" __________________________________________________________________"<<endl<<endl;
		}

		if(departamento==3)
		{
			cout<<" Usted pertenece al departamento N° 3 "<<endl;
			cout<<" Ingrese el número de ventas realizadas en el mes:\t";
			cin>>cantv3;
			vent3=cantv3+vent3;
			cout<<" __________________________________________________________________"<<endl<<endl;
		}
			if(departamento==4)
		{
			cout<<" Usted pertenece al departamento N° 4 "<<endl;
			cout<<" Ingrese el número de ventas realizadas en el mes:\t";
			cin>>cantv4;
			vent4=cantv4+vent4;
			cout<<" __________________________________________________________________"<<endl<<endl;
			cout<<" "<<endl;
	    }
}
	ventto=vent1+vent2+vent3+vent4; //Sumamos las variables para tener una venta total

	porcvent1=(vent1/ventto)*100;//sacamos el porcentaje de las ventas
	porcvent2=(vent2/ventto)*100;
	porcvent3=(vent3/ventto)*100;
	porcvent4=(vent4/ventto)*100;
	cout<<" _______________________________________________________________________"<<endl;
	cout<<" El Departamento N°1 posee un total de ventas mensual de: "<<vent1<<endl;
	cout<<" El Departamento N°2 posee un total de ventas mensual de: "<<vent2<<endl;
	cout<<" El Departamento N°3 posee un total de ventas mensual de: "<<vent3<<endl;
	cout<<" El Departamento N°4 posee un total de ventas mensual de: "<<vent4<<endl;
	cout<<" Las ventas de los 4 departamentos es:                    "<<ventto<<endl<<endl;
	cout<<" _______________________________________________________________________"<<endl;
	
	cout<<" El Departamento N°1 posee un porcentaje de ventas del:   "<<porcvent1<<" %"<<endl;
	cout<<" El Departamento N°2 posee un porcentaje de ventas del:   "<<porcvent2<<" %"<<endl;
	cout<<" El Departamento N°3 posee un porcentaje de ventas del:   "<<porcvent3<<" %"<<endl;
	cout<<" El Departamento N°4 posee un porcentaje de ventas del:   "<<porcvent4<<" %"<<endl;

	cout<<" _______________________________________________________________________"<<endl<<endl;
	if(porcvent1>=25 && porcvent1<=49){
		cout<<" El Departamento N°1 supera el 25%, Su nuevo salario es:\t"<<(float)salario+salario*(0.2)<<endl;
	}if(porcvent2>=25 && porcvent2<=49){
		cout<<" El Departamento N°2 supera el 25%, Su nuevo salario es:\t"<<(float)salario+salario*(0.2)<<endl;
	}if (porcvent3>=25 && porcvent3<=49){
		cout<<" El Departamento N°3 supera el 25%, Su nuevo salario es:\t"<<(float)salario+salario*(0.2)<<endl;
	}if(porcvent4>=25&& porcvent4<=49){
		cout<<" El Departamento N°4 supera el 25%, Su nuevo salario es:\t"<<(float)salario+salario*(0.2)<<endl;	
	}	
	if(porcvent1>49){
		cout<<" El Departamento N°1 supera el 50%, Su nuevo salario es:\t"<<(float)salario+salario*(0.4)<<endl;
	}if(porcvent2>49){
		cout<<" El Departamento N°2 supera el 50%, Su nuevo salario es:\t"<<(float)salario+salario*(0.4)<<endl;
	}if (porcvent3>49){
		cout<<" El Departamento N°3 supera el 50%, Su nuevo salario es:\t"<<(float)salario+salario*(0.4)<<endl;
	}if(porcvent4>49){
		cout<<" El Departamento N°4 supera el 50%, Su nuevo salario es:\t"<<(float)salario+salario*(0.4)<<endl;	
	}
	cout<<" _______________________________________________________________________"<<endl<<endl;
return 0;	
}



















