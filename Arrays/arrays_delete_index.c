#include<stdio.h>
int main(){
    int elements,n,delete;
    printf("Enter no. of  Elements= ");
    scanf("%d",&elements);
    int arrays[elements];

    for(int i=0;i<elements;i++){
        printf("Enter a %d integer out of %d = ",i,elements);
        scanf("%d",&n);
        arrays[i]=n;
    }


    printf("Enter a index to 'Delete'- ");
    scanf("%d",&delete);


    if (delete<=(elements-1) && delete>=0){

        for(int i=delete;i<elements-1;i++){

            arrays[i]=arrays[i+1];

        }  

    }else{

        printf("Invalid Index");
        
    }

    printf("{");

    for(int i=0;i<elements-1;i++){

        if(i!=elements-2){
            printf("%d",arrays[i]);
            printf(",");

        }else{
            printf("%d",arrays[i]);
        }

    }

    printf("}\n");
    
    return 0;

}

