#include "stdio.h"
int main(){
    int n;
    int div=2;
    int flag=1;
    int arr[1000]={};
    int index=0;
    printf("enter number:");
    scanf("%d",&n);
    while(div<=n/2){
        float ans=n%div;
        if(ans==0){
            flag=0;
            arr[index]=div;
            index++;
            div++;
        }
        else{
            div++;
        }
    }
    if (flag==0){
        printf("NOT PRIME\n");
        int i=0;
        printf("divisors of number are:[");
        printf("%d,",1);
        while(i<=(index-2)){
            printf("%d,",arr[i]);
            i++;}
        printf("%d,%d]",arr[index-1],n);
    }
    else{
        printf("PRIME\n");
        printf("divisors of number are:[");
        printf("%d,%d]",1,n);
    }
    return 0;
}
