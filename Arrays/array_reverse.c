#include<stdio.h>
int main(){
    int elements,n,temp;
    printf("Enter a no. oF Elements= ");
    scanf("%d",&elements);
    int array1[elements],array2[elements];
    
    for(int i=0;i<elements;i++){
        printf("Enter %d integers= ",elements);
        scanf("%d",&n);
        array1[i]=n;
    }
    int j=0;
    for(int i=(elements-1)-j,j=0;j<elements;i--,j++){
        array2[j]=array1[i];
    }
    printf("{");
    for(int i=0;i<elements;i++){
        
        if(i==elements-1){
            printf("%d",array1[i]);
        }else{
            
            printf("%d",array1[i]);
            printf(",");
        }
    }
    printf("}");

    printf("{");
    for(int i=0;i<elements;i++){
        
        if(i==elements-1){
            printf("%d",array2[i]);
        }else{
            
            printf("%d",array2[i]);
            printf(",");
        }
    }
    printf("}");
return 0;
}
