#include<stdio.h>
#include<conio.h>
main()
{
	int opcion,selector;
	printf("opcion 1 suma\nopcion 2 resta\nopcion 3 divicion\nopcion 4 multiplicacion\n");
	scanf("%d",&opcion);
	setbuf ( stdin, NULL );
	switch(opcion)
	{

	case 1:

	int num1,num2;
	printf("ingresa numero1: ");
	scanf("%d",&num1);
	setbuf ( stdin, NULL );
	printf("ingresa numero2: ");
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
	break;

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
	
	getch();
	return 0;
}
