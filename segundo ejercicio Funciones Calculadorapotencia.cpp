#include<iostream>
#include<cstdlib>

using namespace std;

	int base;
	int exponente;
	int calcularpotencia=0;
	
int main(){


	cout <<"por favor ponga lo que le pide acontinuacion: "<< endl;
	cout <<("ingresa la base: ");
	cin>> base;
	cout <<("ingresa el exponentes: ");
	cin>> exponente;
	
	int x=1;
	
	while (x<exponente){
		if (calcularpotencia<base){
			calcularpotencia=base*base;
		}
		else{
			calcularpotencia=calcularpotencia*base;
		}
		
		x++;
		
		}
	cout <<"El resultado es: "<< calcularpotencia << endl;
	
	return 0;
	
}
