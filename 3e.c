//Kolli Anusha(CH.EN.U4CYS21030)
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int digit=0;
    int n2=1;
    
    printf("enter a 5-digit number: ");
    scanf("%d", &n);
    int j=n;
    for(int i=4;i>=0;i--){
        digit = (n%10);
        n2 += digit*pow(10,i);
        n=n/10;
    }
    // printf("%d", j);
    if(n2==j){
        printf("Same numbers");
    }else{
        printf("different numbers");
    }
    return 0;
}
