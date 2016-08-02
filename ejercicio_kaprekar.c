#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>

int main() {
 int n,u,d,c,um;
 char ini;



    printf("Bienvenido \nquieres iniciar el programa? s/n \n");
    scanf("%c",&ini);
        do
        {

            if(ini== 's' || ini=='S'){

            printf("introduce un numero de 4 digitos: ");
            scanf("%d",&n);
                    um = n/1000;
                    n = n%1000;

                        c = n/100;
                        n = n%100;

                            d = n/10;
                            n = n%10;

                                u= n/1;
                                n = n%1;

            }


                printf("Quieres seguir em el programa? s/n \n");
                fflush(stdin);
                scanf("%c",&ini);



     }while(ini == 's' || ini == 'S');


	system("cls");
	printf ("Adios. \n");


return 0;
}
