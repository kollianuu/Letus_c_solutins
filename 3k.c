#include<stdio.h>
#include<math.h>
int main(){
    int r,x,y;
    printf("Enter radius of the Circle: ");
    scanf("%d", &r);
    printf("Enter the coordinates");
    scanf("%d%d", &x,&y);
    if(pow(x*x+y*y,0.5) > r){
        printf("Outside the circle");
    }else{
        printf("Inside the circle");
    }
}