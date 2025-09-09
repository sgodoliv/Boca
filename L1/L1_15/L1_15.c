#include <stdio.h>

int main() {
int num, ord, resto, dez, cen;

scanf("%d %d", &num, &ord);

if(ord==1) {
    if(10>num && num>=0) {
        if (num==0 || num==2 || num==4 || num==6 || num==8) {
            printf("PAR");
        }
        else {
            printf ("IMPAR");
        }
    }
    else {
        if(100>num && num>=10) {
            resto=num%10;
            if (resto==0 || resto==2 || resto==4 || resto==6 || resto==8) {
                printf("PAR");
            }
            else {
                printf ("IMPAR");
            }
        }
        else {
            if(1000>num && num>=100) {
                resto=num%10;
                if (resto==0 || resto==2 || resto==4 || resto==6 || resto==8) {
                    printf("PAR");
                }
                else {
                    printf ("IMPAR");
                }
            }
            else {
                if(10000>num && num>=1000) {
                    resto=num%10;
                    if (resto==0 || resto==2 || resto==4 || resto==6 || resto==8) {
                     printf("PAR");   
                    }
                    else {
                        printf ("IMPAR");
                    }
                }
                else {
                    resto=num%10;
                    if (resto==0 || resto==2 || resto==4 || resto==6 || resto==8) {
                        printf("PAR");
                    }
                    else {
                        printf ("IMPAR");
                    }
                }
            }
        }
    }
}
else {
    if(ord==2) {
        if(10>num && num>=0) {
            printf ("PAR");
        }
        else {
            if(100>num && num>=10) {
                resto=num%100;
                dez=resto/10;
                if(dez==0 || dez==2 || dez==4 || dez==6 || dez==8) {
                    printf("PAR");
                }
                else {
                    printf("IMPAR");
                }
            }
            else {
                if(1000>num && num>=100) {
                    resto=num%100;
                    dez=resto/10;
                    if(dez==0 || dez==2 || dez==4 || dez==6 || dez==8) {
                        printf("PAR");
                    }
                    else {
                       printf("IMPAR"); 
                    }
                }
                else {
                    if(10000>num && num>=1000) {
                        resto=num%100;
                        dez=resto/10;
                        if(dez==0 || dez==2 || dez==4 || dez==6 || dez==8) {
                            printf("PAR");
                        }
                        else {
                            printf("IMPAR");
                        }
                    }
                    else {
                        resto=num%100;
                        dez=resto/10;
                        if(dez==0 || dez==2 || dez==4 || dez==6 || dez==8) {
                            printf("PAR");
                        }
                        else {
                            printf("IMPAR");
                        }
                    }
                }
            }
        }
    }
    else {
        if(ord==3) {
            if(10>num && num>=0) {
                printf("PAR");
            }
            else {
                if(100>num && num>=10) {
                    resto=num%1000;
                    cen=resto/100;
                    if(cen==0 || cen==2 || cen==4 || cen==6 || cen==8) {
                        printf("PAR");
                    }
                    else {
                        printf("IMPAR");
                    }
                }
                else {
                    if(1000>num && num>=100) {
                       resto=num%1000;
                       cen=resto/100;
                       if(cen==0 || cen==2 || cen==4 || cen==6 || cen==8) {
                        printf("PAR");
                       }
                       else {
                        printf("IMPAR");
                       }
                    }
                    else {
                        if(10000>num && num>=1000) {
                            resto=num%1000;
                            cen=resto/100;
                            if(cen==0 || cen==2 || cen==4 || cen==6 || cen==8) {
                                printf("PAR");
                            }
                            else {
                                printf("IMPAR");
                            }
                        }
                        else {
                          resto=num%1000;
                          cen=resto/100;
                          if(cen==0 || cen==2 || cen==4 || cen==6 || cen==8) {
                            printf("PAR");
                          }
                          else {
                            printf("IMPAR");
                          }
                        }
                    }
                }
            }
        }
        else {
            
        }
    }
}                    
return 0;
}