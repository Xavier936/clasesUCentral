#include <iostream>

using namespace std;

int num,resp;

int main()
{
	for(num=1;num<=100;num++)
	{
	cout<<num<<endl;
	cout<<"\n Deseas seguir con la numeracion \n	1.Si 	2.No\n	";
	cin>>resp; 
	while(resp!=1 && resp!=2)
	{
		cout<<"\n Opcion incorrecta, intenta de nuevo \n Deseas seguir con la numeracion \n	1.Si 	2.No\n	";
		cin>>resp; 
	}	
	if(resp==2)
	{
		break;
	}
    }  
	
		
}

