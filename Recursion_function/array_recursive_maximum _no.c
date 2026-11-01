#include<stdio.h>
int max_element(int array[],int elements){
    if(elements==1){
        return array[0];
    }
    int max=max_element(array,elements-1);
    if(array[elements-1]>max){
        return array[elements-1];
    }else{
        return max;
    }
}

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
        printf("Max no. is= %d\n",max_element(arrays,elements));
    }else{
        printf("Enter Proper Value for Array, value !=0 and positive\n");
    }
    return 0;


}
