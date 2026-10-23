#include<stdio.h>
int main(){
    int n,value;
    printf("Enter Size Of Matrix= ");
    scanf("%d",&n);
    printf("\n");
    int matrix[n][n];
    for(int row=0;row<n;row++){
        for(int coloumn=0;coloumn<n;coloumn++){
            printf("Enter A value at Row= %d & Coloumn= %d= ",row,coloumn);
            scanf("%d",&value);
            matrix[row][coloumn]=value;
            printf("\n");
        }
    }
    printf("---------------");
    printf("\nMatrix--->>>\n");
    printf("---------------\n");

    for(int row=0;row<n;row++){
        printf("[");
        for(int coloumn=0;coloumn<n;coloumn++){
            
            if(coloumn!=n-1){
                printf("%d,",matrix[row][coloumn]);
            }else{
                printf("%d",matrix[row][coloumn]);
            }
            
            
        }
        printf("]");
        printf("\n");
    }
    for(int row=0;row<n;row++){
        for(int coloumn=n-1;coloumn>=0;coloumn--){
            if(row<coloumn){
                int swap=matrix[coloumn][row];
                matrix[coloumn][row]=matrix[row][coloumn];
                matrix[row][coloumn]=swap;
            }
            
            
        }
    }
    
    printf("---------------");
    printf("\nRotated Clockwise--->>>\n");
    printf("---------------\n");
    for(int row=0;row<n;row++){
        int left=0,right=n-1;
        while(left<right){
            int swap=matrix[row][left];
            matrix[row][left]=matrix[row][right];
            matrix[row][right]=swap;
            left++;
            right--;
        }
    }

    for(int row=0;row<n;row++){
        printf("[");
        for(int coloumn=0;coloumn<n;coloumn++){
            
            if(coloumn!=n-1){
                printf("%d,",matrix[row][coloumn]);
            }else{
                printf("%d",matrix[row][coloumn]);
            }
            
            
        }
        printf("]");
        printf("\n");
    }
    printf("\n");
    return 0;
}



