#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>

int main() {
 int n,u,d,c,um,u2,d2,c2,um2,total,total2;
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
                    um2=um;

                        c = n/100;
                        n = n%100;
                        c2=c;
                            d = n/10;
                            n = n%10;
                            d2=d;
                                u= n/1;
                                n = n%1;
                                u2=u;
                        if(u==d && d==c && c==um){
                            printf("repdigit");
                        }
                        //descendente
                        if( um<=c && c<=d && d<=u){
                           um=um*1;
                           c=c*10;
                           d=d*100;
                           u=u*1000;
                            total=um+c+d+u;
                            printf("%d \n",total); // um,c,d,u
                        }
                        else if(um <= c && c<=u && u<=d){
                           um=um*1;
                           c=c*10;
                           u=u*100;
                           d=d*1000;
                            total=um+c+d+u;
                           printf("%d\n",total); //um,c,u,d
                        }
                        else if (um<=d && d<=c && c<=u){
                           um=um*1;
                            d=d*10;
                           c=c*100;
                           u=u*1000;
                           total=um+c+d+u;
                            printf("%d\n",total); //um,d,c,u
                        }
                        else if (um<=u && u<=c && c<=d){
                           um=um*1;
                           u=u*10;
                           c=c*100;
                           d=d*1000;
                           total=um+c+d+u;
                           printf("%d",total); //um,u,c,d
                        }
                        else if (um<=d && d<=u && u<=c){
                           um=um*1;
                          d=d*10;
                          u=u*100;
                           c=c*1000;

                           total=um+c+d+u;
                           printf("%d",total); //um,d,u,c
                        }
                        else if (um<=u && u<=d && d<=c){
                           um=um*1;
                           d=d*100;
                           u=u*10;
                           c=c*1000;

                           total=um+c+d+u;
                           printf("%d",total); //um,u,d,c
                        }
                          else if (c<=um && um<=d && d<=u){
                           um=um*10;
                           d=d*100;
                           u=u*1000;
                           c=c*1;

                           total=um+c+d+u;
                           printf("%d",total); //c,um,d,u

                        }
                         else if (c<=um && um<=u && u<=d){
                           um=um*10;
                           d=d*1000;
                           u=u*100;
                           c=c*1;

                           total=um+c+d+u;
                           printf("%d",total); //c,um,u,d
                        }
                          else if (d<=um && um<=c && c<=u){
                           um=um*10;
                           d=d*1;
                           u=u*1000;
                           c=c*100;

                           total=um+c+d+u;
                           printf("%d",total); //d,um,c,u
                        }
                         else if (u<=um && um<=c && c<=d){
                           um=um*10;
                           d=d*1000;
                           u=u*1;
                           c=c*100;

                           total=um+c+d+u;
                           printf("%d",total); //u,um,c,d
                        }
                           else if (d<=um && um<=u && u<=c){
                           um=um*10;
                           d=d*1;
                           u=u*100;
                           c=c*1000;

                           total=um+c+d+u;
                           printf("%d",total); //d,um,u,c
                        }
                            else if (u<=um && um<=d && d<=c){
                           um=um*10;
                           d=d*100;
                           u=u*1;
                           c=c*1000;

                           total=um+c+d+u;
                           printf("%d",total); //u,um,d,c
                        }
                            else if (c<=d && d<=um && um<=u){
                           um=um*100;
                           d=d*10;
                           u=u*1000;
                           c=c*1;

                           total=um+c+d+u;
                           printf("%d",total); //c,d,um,u
                        }
                             else if (c<=u && u<=um && um<=d){
                           um=um*100;
                           d=d*1000;
                           u=u*10;
                           c=c*1;

                           total=um+c+d+u;
                           printf("%d",total); //c,u,um,d
                        }
                              else if (d<=c && c<=um && um<=u){
                           um=um*100;
                           d=d*1;
                           u=u*1000;
                           c=c*10;

                           total=um+c+d+u;
                           printf("%d",total); //d,c,um,u
                        }
                              else if (u<=c && c<=um && um<=d){
                           um=um*100;
                           d=d*1000;
                           u=u*1;
                           c=c*10;

                           total=um+c+d+u;
                           printf("%d",total); //u,c,um,d
                        }
                              else if (d<=u && u<=um && um<=c){
                           um=um*100;
                           d=d*1;
                           u=u*10;
                           c=c*1000;

                           total=um+c+d+u;
                           printf("%d",total); //d,u,um,c
                        }
                                 else if (u<=d && d<=um && um<=c){
                           um=um*100;
                           d=d*10;
                           u=u*1;
                           c=c*1000;

                           total=um+c+d+u;
                           printf("%d",total); //u,d,um,c
                        }
                                 else if (c<=d && d<=u && u<=um){
                           um=um*1000;
                           d=d*10;
                           u=u*100;
                           c=c*1;

                           total=um+c+d+u;
                           printf("%d",total); //c,d,u,um
                        }
                                 else if (c<=u && u<=d && d<=um){
                           um=um*1000;
                           d=d*100;
                           u=u*10;
                           c=c*1;

                           total=um+c+d+u;
                           printf("%d",total); //c,u,d,um
                        }
                               else if (u<=c && c<=d && d<=um){
                           um=um*1000;
                           d=d*100;
                           u=u*1;
                           c=c*10;

                           total=um+c+d+u;
                           printf("%d",total); //u,c,d,um
                        }
                                else if (d<=c && c<=u && u<=um){
                           um=um*1000;
                           d=d*1;
                           u=u*100;
                           c=c*10;

                           total=um+c+d+u;
                           printf("%d",total); //d,c,u,um
                        }
                            else if (d<=u && u<=c && c<=um){
                           um=um*1000;
                           d=d*1;
                           u=u*10;
                           c=c*100;

                           total=um+c+d+u;
                           printf("%d",total); //d,u,c,um
                        }
                               else if (u<=d && d<=c && c<=um){
                           um=um*1000;
                           d=d*10;
                           u=u*1;
                           c=c*100;

                           total=um+c+d+u;
                           printf("%d",total); //u,d,c,um
                        }

                        printf("\n%d \n",total-100);
 printf("\n-----------------------------------------------\n");
                         //Ascendente
                        if( um2>=c2 && c2>=d2 && d2>=u2){
                           um2=um2*1;
                           c2=c2*10;
                           d2=d2*100;
                           u2=u2*1000;
                            total2=um2+c2+d2+u2;
                            printf("%d \n",total2); //u,d,c,um
                        }
                        else if(um2>=c2 && c2>=u2 && u2>=d2){
                           um2=um2*1;
                           c2=c2*10;
                           u2=u2*100;
                           d2=d2*1000;
                            total2=um2+c2+d2+u2;
                           printf("%d\n",total2); //d,u,c,um
                        }
                        else if (um2>=d2 && d2>=c2 && c2>=u2){
                           um2=um2*1;
                            d2=d2*10;
                           c2=c2*100;
                           u2=u2*1000;
                           total2=um2+c2+d2+u2;
                            printf("%d\n",total2); //u,c,d,um
                        }
                        else if (um2>=u2 && u2>=c2 && c2>=d2){
                           um2=um2*1;
                           u2=u2*10;
                           c2=c2*100;
                           d2=d2*1000;
                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //d,c,u,um
                        }
                        else if (um2>=d2 && d2>=u2 && u2>=c2){
                           um2=um2*1;
                          d2=d2*10;
                          u2=u2*100;
                           c2=c2*1000;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //c,u,d,um
                        }
                        else if (um2>=u2 && u2>=d2 && d2>=c2){
                           um2=um2*1;
                           d2=d2*100;
                           u2=u2*10;
                           c2=c2*1000;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //c,d,u,um
                        }
                          else if (c2>=um2 && um2>=d2 && d2>=u2){
                           um2=um2*10;
                           d2=d2*100;
                           u2=u2*1000;
                           c2=c2*1;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //u,d,um,c

                        }
                         else if (c2>=um2 && um2>=u2 && u2>=d2){
                           um2=um2*10;
                           d2=d2*1000;
                           u2=u2*100;
                           c2=c2*1;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //d,u,um,c
                        }
                          else if (d2>=um2 && um2>=c2 && c2>=u2){
                           um2=um2*10;
                           d2=d2*1;
                           u2=u2*1000;
                           c2=c2*100;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //u,c,um,d
                        }
                         else if (u2>=um2 && um2>=c2 && c2>=d2){
                           um2=um2*10;
                           d2=d2*1000;
                           u2=u2*1;
                           c2=c2*100;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //d,c,um,u
                        }
                           else if (d2>=um2 && um2>=u2 && u2>=c2){
                           um2=um2*10;
                           d2=d2*1;
                           u2=u2*100;
                           c2=c2*1000;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //c,u,um,d
                        }
                            else if (u2>=um2 && um2>=d2 && d2>=c2){
                           um2=um2*10;
                           d2=d2*100;
                           u2=u2*1;
                           c2=c2*1000;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //c,d,um,u
                        }
                            else if (c2>=d2 && d2>=um2 && um2>=u2){
                           um2=um2*100;
                           d2=d2*10;
                           u2=u2*1000;
                           c2=c2*1;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //u,um,d,c
                        }
                             else if (c2>=u2 && u2>=um2 && um2>=d2){
                           um2=um2*100;
                           d2=d2*1000;
                           u2=u2*10;
                           c2=c2*1;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //d,um,u,c
                        }
                              else if (d2>=c2 && c2>=um2 && um2>=u2){
                           um2=um2*100;
                           d2=d2*1;
                           u2=u2*1000;
                           c2=c2*10;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //u,um,c,d
                        }
                              else if (u2>=c2 && c2>=um2 && um2>=d2){
                           um2=um2*100;
                           d2=d2*1000;
                           u2=u2*1;
                           c2=c2*10;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //d,um,c,u
                        }
                              else if (d2>=u2 && u2>=um2 && um2>=c2){
                           um2=um2*100;
                           d2=d2*1;
                           u2=u2*10;
                           c2=c2*1000;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //c,um,u,d
                        }
                            else if (u2>=d2 && d2>=um2 && um2>=c2){
                           um2=um2*100;
                           d2=d2*10;
                           u2=u2*1;
                           c2=c2*1000;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //c,um,d,u
                        }
                                 else if (c2>=d2 && d2>=u2 && u2>=um2){
                           um2=um2*1000;
                           d2=d2*10;
                           u2=u2*100;
                           c2=c2*1;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //um,u,d,c
                        }
                                 else if (c2>=u2 && u2>=d2 && d2>=um2){
                           um2=um2*1000;
                           d2=d2*100;
                           u2=u2*10;
                           c2=c2*1;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //um,d,u,c
                        }
                               else if (u2>=c2 && c2>=d2 && d2>=um2){
                           um2=um2*1000;
                           d2=d2*100;
                           u2=u2*1;
                           c2=c2*10;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //um,d,c,u
                        }
                                   else if (d2>=c2 && c2>=u2 && u2>=um2){
                           um2=um2*1000;
                           d2=d2*1;
                           u2=u2*100;
                           c2=c2*10;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //um,u,c,d
                        }
                            else if (d2>=u2 && u2>=c2 && c2>=um2){
                           um2=um2*1000;
                           d2=d2*1;
                           u2=u2*10;
                           c2=c2*100;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //um,c,u,d
                        }
                               else if (u2>=d2 && d2>=c2 && c2>=um2){
                           um2=um2*1000;
                           d2=d2*10;
                           u2=u2*1;
                           c2=c2*100;

                           total2=um2+c2+d2+u2;
                           printf("%d",total2); //um,c,d,u
                        }

                        printf("\n%d \n",total2-100);

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
