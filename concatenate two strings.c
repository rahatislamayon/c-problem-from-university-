#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100], result[200];
    //int i, j;

    printf("Enter the first string: ");
     gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    //for (i = 0; str1[i] != '\0'; i++) {
    //    result[i] = str1[i];
    //}

    //for (j = 0; str2[j] != '\0'; j++) {
      //  result[i + j] = str2[j];
   // }

   // result[i + j] = '\0';
   //strcpy(result,str1);
   //strcpy(result,str2);
   strcat(str1,str2);

    printf("Concatenated string: %s\n", str1);
}
