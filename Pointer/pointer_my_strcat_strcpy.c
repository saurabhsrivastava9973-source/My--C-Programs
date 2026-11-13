
#include<stdio.h>

void my_strcopy(char *dest,char *src);

void my_strcat(char *dest, char *src);

int main(){

    char input[15];

    printf("Enter a Word :- ");
    scanf("%14s",input);

    char strcpy[30]; 

    my_strcopy(strcpy,input);
    printf("Copy-->> %s\n",strcpy);

    char strcat[15];
    
    printf("Enter a Word for Concatanate:- ");
    scanf("%14s",strcat);

    printf("Concatanate----->>\n");

    my_strcat(strcpy,strcat);
    printf("%s\n",strcpy);

    return 0;
}

void my_strcopy(char *dest, char *src){

    char *pointer_dest = dest;

    char *pointer_src=src;

    while(*pointer_src !='\0'){

        *pointer_dest=*pointer_src;
        pointer_dest++;
        pointer_src++;

    }

    *pointer_dest='\0';

}

void my_strcat(char *dest,char *src){
   
    char *pointer_dest=dest;

    char *pointer_src=src;
    
    while(*pointer_dest!='\0'){
        pointer_dest++;
    
    }
    
    while(*pointer_src!='\0'){
    
        *pointer_dest=*pointer_src;
    
        pointer_src++;
    
        pointer_dest++;
    
    }
    *pointer_dest='\0';

}
