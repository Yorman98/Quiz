#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>

int main() {
 int n,u,d,c,um,total;
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
                        //Ascendente
                        if( um<c && c<d ||d<u){
                           um=um*1;
                           c=c*10;
                           d=d*100;
                           u=u*1000;
                            total=um+c+d+u;
                            printf("%d \n",total); // um,c,d,u
                        }
                        else if(um < c && c<u && u<d){
                           um=um*1;
                           c=c*10;
                           u=u*100;
                           d=d*1000;
                            total=um+c+d+u;
                           printf("%d\n",total); //um,c,u,d
                        }
                        else if (um<d && d<c && c<u){
                           um=um*1;
                            d=d*10;
                           c=c*100;
                           u=u*1000;
                           total=um+c+d+u;
                            printf("%d",total); //um,d,c,u
                        }
                        else if (um<u && u<c && c<d){
                           um=um*1;
                           u=u*10;
                           c=c*100;
                           d=d*1000;
                           total=um+c+d+u;
                           printf("%d",total); //um,u,c,d
                        }
                        else if (um<d && d<u && u<c){
                           um=um*1;
                          d=d*10;
                          u=u*100;
                           c=c*1000;

                           total=um+c+d+u;
                           printf("%d",total); //um,d,u,c
                        }
                        else if (um<u && u<d && d<c){
                           um=um*1;
                           d=d*100;
                           u=u*10;
                           c=c*1000;

                           total=um+c+d+u;
                           printf("%d",total); //um,u,d,c
                        }
                          else if (c<um && um<d && d<u){
                           um=um*10;
                           d=d*100;
                           u=u*1000;
                           c=c*1;

                           total=um+c+d+u;
                           printf("%d",total); //c,um,d,u

                        }
                         else if (c<um && um<u && u<d){
                           um=um*10;
                           d=d*1000;
                           u=u*100;
                           c=c*1;

                           total=um+c+d+u;
                           printf("%d",total); //c,um,u,d
                        }
                          else if (d<um && um<c && c<u){
                           um=um*10;
                           d=d*1;
                           u=u*1000;
                           c=c*100;

                           total=um+c+d+u;
                           printf("%d",total); //d,um,c,u
                        }
                         else if (u<um && um<c && c<d){
                           um=um*10;
                           d=d*1000;
                           u=u*1;
                           c=c*100;

                           total=um+c+d+u;
                           printf("%d",total); //u,um,c,d
                        }
                           else if (d<um && um<u && u<c){
                           um=um*10;
                           d=d*1;
                           u=u*100;
                           c=c*1000;

                           total=um+c+d+u;
                           printf("%d",total); //d,um,u,c
                        }
                            else if (u<um && um<d && d<c){
                           um=um*10;
                           d=d*100;
                           u=u*1;
                           c=c*1000;

                           total=um+c+d+u;
                           printf("%d",total); //u,um,d,c
                        }
                            else if (c<d && d<um && um<u){
                           um=um*100;
                           d=d*10;
                           u=u*1000;
                           c=c*1;

                           total=um+c+d+u;
                           printf("%d",total); //c,d,um,u
                        }
                             else if (c<u && u<um && um<d){
                           um=um*100;
                           d=d*1000;
                           u=u*10;
                           c=c*1;

                           total=um+c+d+u;
                           printf("%d",total); //c,u,um,d
                        }
                              else if (d<c && c<um && um<u){
                           um=um*100;
                           d=d*1;
                           u=u*1000;
                           c=c*10;

                           total=um+c+d+u;
                           printf("%d",total); //d,c,um,u
                        }
                              else if (u<c && c<um && um<d){
                           um=um*100;
                           d=d*1000;
                           u=u*1;
                           c=c*10;

                           total=um+c+d+u;
                           printf("%d",total); //u,c,um,d
                        }
                              else if (d<u && u<um && um<c){
                           um=um*100;
                           d=d*1;
                           u=u*10;
                           c=c*1000;

                           total=um+c+d+u;
                           printf("%d",total); //d,u,um,c
                        }
                                 else if (u<d && d<um && um<c){
                           um=um*100;
                           d=d*10;
                           u=u*1;
                           c=c*1000;

                           total=um+c+d+u;
                           printf("%d",total); //u,d,um,c
                        }
                                 else if (c<d && d<u && u<um){
                           um=um*1000;
                           d=d*10;
                           u=u*100;
                           c=c*1;

                           total=um+c+d+u;
                           printf("%d",total); //c,d,u,um
                        }
                                 else if (c<u && u<d && d<um){
                           um=um*1000;
                           d=d*100;
                           u=u*10;
                           c=c*1;

                           total=um+c+d+u;
                           printf("%d",total); //c,u,d,um
                        }
                               else if (u<c && c<d && d<um){
                           um=um*1000;
                           d=d*100;
                           u=u*1;
                           c=c*10;

                           total=um+c+d+u;
                           printf("%d",total); //u,c,d,um
                        }
                                   else if (d<c && c<u && u<um){
                           um=um*1000;
                           d=d*1;
                           u=u*100;
                           c=c*10;

                           total=um+c+d+u;
                           printf("%d",total); //d,c,u,um
                        }
                                     else if (d<u && u<c && c<um){
                           um=um*1000;
                           d=d*1;
                           u=u*10;
                           c=c*100;

                           total=um+c+d+u;
                           printf("%d",total); //d,u,c,um
                        }
                               else if (u<d && d<c && c<um){
                           um=um*1000;
                           d=d*10;
                           u=u*1;
                           c=c*100;

                           total=um+c+d+u;
                           printf("%d",total); //u,d,c,um
                        }

                        printf("%d \n",total-100);
            }// if de introducir numeros



                printf("Quieres seguir em el programa? s/n \n");
                fflush(stdin);
                scanf("%c",&ini);
                system("cls");



     }while(ini == 's' || ini == 'S');


	system("cls");
	printf ("Adios. \n");


return 0;
}
