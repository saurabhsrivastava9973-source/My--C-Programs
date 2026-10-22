#include<stdio.h>

int main(){

    int elements,n,sum=0,check=0,flag=0;

    printf("Enter a no. of elements= ");
    scanf("%d",&elements);

    int arrays[elements+1];

    for(int i=0;i<elements;i++){

        printf("Enter %d out of %d integers to Array= ",i,elements);
        scanf("%d",&n);

        arrays[i]=n;
        sum=sum+arrays[i]; 
    }
    for(int i=0;i<elements;i++){
        sum-=arrays[i];
        if(check==sum){
            printf("Balanced %d is answer\n",arrays[i]);
            flag=1;
            break;
            

        }else if(check!=sum){
            check+=arrays[i];
        }
    }
    if(flag==0){
        printf("No Equilibirum Exists\n");
    }

    return 0; 

}


