#include<stdio.h>
int main(){
    int size,elements,swap=0;
    printf("Enter a Size Of Arrays:- ");
    scanf("%d",&size);
    
    int arrays[size];
    for(int i=0;i<size;i++){

        printf("Enter a Elements in Arrays= ");
        scanf("%d",&elements);

        arrays[i]=elements;

    }
    for(int i=0;i<size;i++){
        swap=0;
        for(int j=0;j<size-1-i;j++){
            
            if(arrays[j]>arrays[j+1]){
                arrays[j]=arrays[j+1]+arrays[j];
                arrays[j+1]=arrays[j]-arrays[j+1];
                arrays[j]=arrays[j]-arrays[j+1];
                swap=1;
            }
        }
        if(swap==0){
            break ;
        }
    }
    printf("Sorted Arrays--->>\n[");
    for(int i =0; i<size; i++){
        if(i!=size-1){
            printf("%d,",arrays[i]);

        }else{
            printf("%d",arrays[i]);
        }
    }
    printf("]\n");


}


