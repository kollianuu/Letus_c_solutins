//Kolli Anusha(CH.EN.U4CYS21030)
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the angles");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c == 180){
        printf("triangle can be formed");
    }else{
        printf("triangle cannot be formed");
    }
    return 0;
}
