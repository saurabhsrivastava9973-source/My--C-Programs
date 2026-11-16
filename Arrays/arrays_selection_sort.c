#include<stdio.h>
int main(){
    int size,n;
    printf("Enter a Size Of element:- ");
    scanf("%d",&size);
    int arrays[size];
    if(size>1){
        for(int i=0; i<size;i++){
            printf("Enter a Element in Array= ");
            scanf("%d",&n);
            arrays[i]=n;
        }
    }else{
        return 0;
    }

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arrays[i]>arrays[j]){
                arrays[i]=arrays[i]+arrays[j];
                arrays[j]=arrays[i]-arrays[j];
                arrays[i]=arrays[i]-arrays[j];
            }
        }
    }
    printf("[");
    for(int i=0;i<size;i++){
        if(i!=size-1){
            printf("%d,",arrays[i]);
        }
        else{
            printf("%d",arrays[i]);
        }
    }
    printf("]\n");
    

}