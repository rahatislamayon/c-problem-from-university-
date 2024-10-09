#include<stdio.h>
int main(){
int arr[5];
for(int i=0; i<4; i++){
    printf("enter the element number : %d \n", i+1);
    scanf("%d", &arr[i]);
}
printf("%d", arr[1]);


    return 0;
}