#include<stdio.h>
int main(){
    int elements,n;
    printf("Enter a No. Of elements= ");
    scanf("%d",&elements);

    if(elements>0){

        int arrays[elements];

        for(int i=0;i<elements;i++){
            printf("Enter %d integer= ",elements);
            scanf("%d",&n);
            arrays[i]=n;
        }

        int max_numb=arrays[0];
        for(int i=0;i<elements;i++){
            if(max_numb<arrays[i]){
                max_numb=arrays[i];
            }
        }
        printf("Max No. In Array Is= %d\n",max_numb);

    }else{
        printf("Enter Proper Value for Array, value !=0 and positive\n");

    }
    return 0;
}


