
#include<stdio.h>

int main(){
    int matrix[3][3],n,flag=0;

    for(int row=0;row<3;row++){

        for(int coloumn=0;coloumn<3;coloumn++){
            printf("Enter Elements In Matrix Row=%d, Coloumn=%d = ",row,coloumn);
            scanf("%d",&n);
            
            matrix[row][coloumn]=n;
        }
    }

    for(int row=0;row<3;row++){

        for(int coloumn=row+1;coloumn<3;coloumn++){

            if(matrix[row][coloumn]!=matrix[coloumn][row]){
                flag=1;
                break;

            }
        }

        if(flag!=0){
            break;
        }
    }

    if(flag==0){

        printf("The Symmetric Matrix\n");

    }else{

        printf("Matrix is not symmetric\n");
    }

    return 0;

}

