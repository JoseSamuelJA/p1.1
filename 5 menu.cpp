#include <math.h> //se usa para subrutina y constantes de las matematicas.
#include <stdio.h>//se usa para ensenar al compilador que se incluya otro archivo.
#include <iostream> //se usa para la organisacion de los codigos en los grupos.
#include <cstdlib> //se usa para manipular el programa es decir para leer y escribir.
#include <conio.h> //se usa para que la ifomacion entre y salga del programa.

int main()//se usa para inciar la ejecucion de un programa
{
    char opcion; //se usa para representar las opciones
    int n;

    do
    {
        printf( "\n   1. Calcular operaciones y variables: ", 163 );
        printf( "\n   2. CalcularPotencia : ", 163 );
        printf( "\n   3. esPrimo : ", 163 ); //esta secion son la opciones 
        printf( "\n   4. esBisiesto : ", 163 );
        printf( "\n   4. Salir." );

        do
        {
            printf( "\n   Introduzca opci%cn (1-5): ", 162 );// esto es para dar proseso a las opciones
            fflush( stdin );
            scanf( "%c", &opcion );

        } while ( opcion < '1' || opcion > '5' );

        switch ( opcion )
        {
            case '1': int opcion,selector;
	printf("opcion 1 suma\nopcion 2 resta\nopcion 3 divicion\nopcion 4 multiplicacion\n", 163);//segunda estas son otras opciones del una de las opciones de arriba.
	scanf("%d",&opcion);
	setbuf ( stdin, NULL );
	switch(opcion)
	{

	case 1:

	int num1,num2;//especificamos que datos vamos a usar
	printf("ingresa numero1: ");
	scanf("%d",&num1);
	setbuf ( stdin, NULL );
	printf("ingresa numero2: ");//se espcifica que se nececita y como ejecutarlo.
	scanf("%d",&num2);
	setbuf ( stdin, NULL );
	printf("la suma del numero: " &num1);
	printf("y del numero: " &num2);
	printf("el resultado de la suma es:%d",num1+num2);
	break;

	case 2:

	int nume1,nume2;
	printf("ingresa numero1: ");
	scanf("%d",&nume1);
	setbuf ( stdin, NULL );
	printf("ingresa numero2: ");
	scanf("%d",&nume2);
	setbuf ( stdin, NULL );
	printf("el resultado de la suma es:%d",nume1-nume2);
	break;

	case 3:

	int numr1,numr2;
	printf("ingresa numero1: ");
	scanf("%d",&numr1);
	setbuf ( stdin, NULL );
	printf("ingresa numero2: ");
	scanf("%d",&numr2);
	setbuf ( stdin, NULL );
	printf("el resultado de la suma es:%d",numr1/numr2);
	break;// para finalizar un programa y poder uniciar el otro programa es decir un inicio para un final.

	case 4:

	int numero1,numero2;
	printf("ingresa numero1: ");
	scanf("%d",&numero1);
	setbuf ( stdin, NULL );
	printf("ingresa numero2: ");
	scanf("%d",&numero2);
	setbuf ( stdin, NULL );
	printf("el resultado de la suma es:%d",numero1*numero2);
	break;
	
	}
	break;


            case '2': cout <<("por favor ponga lo que le pide acontinuacion: ",163)<< endl;
	cout <<("ingresa la base: ");
	cin>> base;
	cout <<("ingresa el exponentes: ");
	cin>> exponente;
	
	int x=1;
	
	while (x<exponente){
		if (calcularpotencia<base){
			calcularpotencia=base*base;
		}
		else{//esto es para un vedadero o falso.
			calcularpotencia=calcularpotencia*base;
		}
		
		x++;
		
		}
	cout <<"El resultado es: "<< calcularpotencia << endl;//los resultados de lo que se pidio aqui se muestra
		break;


            case '3': int a=0,i,n;
	cout<<("Ingrese numero", 163)<endl;
	cin>>n;
	for(i=1;i<(n+1);i++){// para hacer un instrucion compuesta.
		if(n%i==0){
			a++;
		}
	}
	if(a!=2){
		cout<<"No es primo";
	}else{
		cout<<"si es primo";
	}
	return 0;
}
                      break;
                      
            case '4': int anio;

   cout <<( "Introduce anio: ", 163);
   cin >> anio;

   if(anio%4 == 0 and anio%100 != 0 or anio%400 == 0){

	cout << "Bisiesto" << endl;
   }
   
   else{
   
      cout << "No es bisiesto" << endl;
      }
                    
         }

    } while ( opcion != '5' );// esta opcion es para salir

    return 0;//para finaliza la ejecucion del programa completo.
}
