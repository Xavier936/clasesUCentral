#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	int base = 50, miembros, edad,op,i;
	float valorpagar = 0 , dcto = 0, recargo = 0, total;
	cout<<"Cuantos miembros nuevos se asociaran?: ";
	cin>>miembros;
	
	
	for(i = 1; i<=miembros; i++){
		cout<<"Ingrese la edad del miembro Nro "<<i<<": ";
		cin>>edad;
		
		if(edad <= 12 && edad >= 0){
			dcto = base * 0.03;
		}else if(edad >= 65 && edad <=120){
			recargo = base * 0.08;
		}else{
			cout<<"Edad no valida"<<endl;
		}
		
		if(miembros >=1 && miembros <= 2){
			valorpagar = base-(base * 0.10)-dcto + recargo;
			total += valorpagar;
		}else if(miembros >=3 && miembros <= 4 ){
			valorpagar = base-(base * 0.20)-dcto + recargo;
			total += valorpagar;
		}else if(miembros >=5 ){
			valorpagar = base-(base * 0.30)-dcto + recargo;
			total += valorpagar;
		}
			
		
	}
	
	cout<<"Debe cancelar el valor de "<<total<<" dólares"<<endl;
	return 0;
}
