#include <stdio.h>

int main() {
    int num, soma_pos=0, soma_neg=0, qtd_pos=0, qtd_neg=0;
    char carac;
     
    while(1){
        
        scanf("%d", &num);
        
        if(num>0) {
            soma_pos+=num;
            qtd_pos++;
        }
        
        else if(num<0) {
            soma_neg+=num;
            qtd_neg++;
        }
        
        carac=getchar();
        
        if (carac==45 || carac>=48 && carac<=57 || carac==' ' || carac=='\n'){
            
        }
        else{
            break;
        }
    }
    
    printf("%d %d %d %d", qtd_neg, qtd_pos, soma_neg, soma_pos);
    
    return 0;
}