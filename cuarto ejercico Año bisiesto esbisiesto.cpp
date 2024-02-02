#include <iostream>
using namespace std;
int main()
{
   int anio;

   cout << "Introduce anio: ";
   cin >> anio;

   if(anio%4 == 0 and anio%100 != 0 or anio%400 == 0){

	cout << "Bisiesto" << endl;
   }
   
   else{
   
      cout << "No es bisiesto" << endl;
      }
      
   system("pause"); 
}
