// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of lines for the pattern: ");
//     scanf("%d", &n);

//     // Print the pattern
//     for (int i = 1; i <= n; ++i) {
//         // Print spaces
//         for (int j = 1; j <= n - i; ++j) {
//             printf(" ");
//         }
//         // Print asterisks
//         for (int j = 1; j <= n; ++j) {
//             if (i == 1 || i == n || j == 1 || j == n) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }
void f1(int *arr, int n) {
    for(int i = 0; i < n; ++i){
        if(*(arr+i)%2 !=0 || *(arr+i)%5==0) {
            printf("-%d- ", *(arr+i)+i*2);

    } }}
    int main(){
        int arr[] = {1,2,3,10,4,7,6,15,20};
        f1(arr,8);+
    }

    #include <stdio.h>
    #include <string.h>
    struct mobile
    {
    char model[20];
    int product_code;
    }m1
    int main(){
        m1.model="samsung";
        m1.product_code=101;
        mobile m2 ;
        mobile*m_ptr=m2;
        m_ptr.model="iPhone";
        m_ptr.product_code=102;
    }
    #include<stdio.h>
#include<string.h>
int main(){
char name[] ="shakib";
    char id[] = " 11202018";
    printf("%s\n",strcat(name,id));









    return 0;
}
