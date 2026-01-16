#include<stdio.h>
int main(){
    char grade;
    
    printf("enter grade (A , B , C , D , E) :");
    scanf(" %c" , &grade);
    
    switch(grade){
     case 'A' :
        printf("Excellence \n ");
        break;
     case 'B' :
        printf(" Very Good \n");
        break;
     case 'C' :
        printf("Good \n");
        break;
     case 'D' :
        printf("Bad \n");
        break;
     case 'E' : 
        printf("Worst \n");
        break;
     default :
        printf("Invalid grade.");
    }
    return 0;
}