#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the co-ordinates: ");
    scanf("%d%d",&x,&y);
    if(x==0 && y!=0){
        printf("Points are on y axis");
    }else if(x!=0 && y==0){
        printf("Points are  on x axis");
    }else if(x==0 && y==0){
        printf("Points are on Origin");
    }else{
        printf("Points are on the plane");
    }
    return 0;
}