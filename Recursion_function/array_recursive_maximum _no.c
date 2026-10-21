#include<stdio.h>
int max_element(int array[],int n){
    if(n==1){
        return array[0];
    }
    int max=max_element(array,n-1);
    if(array[n-1]>max){
        return array[n-1];
    }else{
        return max;
    }
}

int main(){
    int elements,n;
    printf("Enter a No. Of elements= ");
    scanf("%d",&elements);
    int arrays[elements];
    for(int i=0;i<elements;i++){
        printf("Enter %d integer= ",elements);
        scanf("%d",&n);
        arrays[i]=n;
    }
    printf("Max no. is= %d\n",max_element(arrays,elements));
    return 0;


}
