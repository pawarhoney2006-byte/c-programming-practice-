#include<stdio.h>
#include<string.h>

  int main(){
      char str[20];
      int len = 0,i;
      
     printf("Enter the string: ");
     scanf("%s",str);
     printf("The reversed string is: ");
     
     while(str[len]!=0){
         len++;
     }
     for (i=len-1;i>=0;i--) {
       printf("%c",str[i]);  
     }
     printf("\n");
     return 0;
  }