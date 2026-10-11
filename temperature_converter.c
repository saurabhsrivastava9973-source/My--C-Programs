#include<stdio.h>
float c_to_f(float temp){ //1//
    return (9.00/5.00)*temp+32;
}
float f_to_c(float temp){ //2//
    return (temp-32)*(5.00/9.00);
}
float c_to_k(float temp){ //3//
    return temp+273.15;
}
float k_to_c(float temp){ //4//
    return temp-273.15;
}
float f_to_k(float temp){ //5//
    return ((temp-32)*(5.00/9.00))+273.15;
}
float k_to_f(float temp){ //6//
    return ((temp-273.15)*(9.00/5.00)+32);
}
int main(){
    printf("-=-=-=-=XXX Welcome To Temerature Calculator XXX=-=-=-=-\n");
    float temp,ans;
    char unit,cho;
    printf("Temperature's Unit= ");
    scanf(" %c",&unit);
    printf("Temprature is = ");
    scanf("%f",&temp);
    printf("Temperature's Unit To Convert= ");
    scanf(" %c",&cho);
    if ((unit== 'C'||unit=='c') && (cho=='f'||cho=='F')){
        ans=c_to_f(temp);
        printf("Temperature= %0.2f F\n",ans);

    }else if((unit=='F'||unit=='f') && (cho=='C'||cho=='c')){
        ans=f_to_c(temp);
        printf("Temperature= %0.2f C\n",ans);
        
    }else if((unit=='k'||unit=='K') && (cho=='F'||cho=='f')){ 
        ans=k_to_f(temp);
        printf("Temperature= %0.2f F\n",ans);

    }else if((unit=='K'||unit=='k')&& (cho=='C'||cho=='c')){ 
        ans=k_to_c(temp);
        printf("Temperature= %0.2f C\n",ans);

    }else if ((unit== 'F'||unit=='f')&& (cho== 'K'||cho=='k')){ 
        ans=f_to_k(temp);
        printf("Temperature= %0.2f K\n",ans);
    }else if((unit=='C'||unit=='c') && (cho=='k'||cho=='K')){
        ans=c_to_k(temp);
        printf("Temperature= %0.2f K\n",ans);
    }else if((unit=='c'&&cho=='c')||(unit=='C'&&cho=='C')||(unit=='k'&&cho=='k')||(unit=='K'&&cho=='K')||(unit=='f'&&cho=='f')||(unit=='F'&&cho=='F')){
        printf("Temperature= %0.2f %c\n",temp,unit);
    }else{
        printf("Enter a valid unit\n");
    }
    printf("-=-=-=-=XXX Thanku, Welcome Again XXX=-=-=-=-\n");
    return 0;
    
}