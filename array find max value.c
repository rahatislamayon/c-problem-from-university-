#include<stdio.h>
int main(){
// int arr[7]={6,8,9,6,5,2,3};
// int max =-1;// sob theke choto number  
// for(int i=0;i<=6;i++){
//     if(max<arr[i]){
//         max =arr[i];
//     }
// }printf("%d\n",max);


int arr[7]={-6,-8,-9,-6,-5,-7,-3};
int max =arr[0];// sob theke choto number  
for(int i=0;i<=6;i++){
    if(max<arr[i]){
        max =arr[i];
    }
}printf("%d\n",max);



 return 0;   
}