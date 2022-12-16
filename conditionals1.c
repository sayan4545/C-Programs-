#include<stdio.h>
#include<math.h>
int main(){
    int marks;
    printf("Enter the marks obtained: \n");
    scanf("%d",&marks);
    if(marks>90 && marks<=100){
        printf("Your garde is A++\n");
    }
    else if(marks>80 && marks<=90){
        printf("Your grade is A+\n");
    }
    else if(marks>70 && marks<=80){
        printf("Your grade is A\n");
    }
    else if(marks>60 && marks<=70){
        printf("Your grade is B++\n");
    }
    else if(marks>50 && marks<=60){
        printf("Your grade is B+\n");

    }
    else if(marks>40 && marks<50){
        printf("Your grade is B\n");
    }
    else if(marks>34 && marks<40){
        printf("Your grade is C\n");
    }
    else{
        printf("Sorry! You have failed\n");
    }
    printf("Best of luck for the future endeavours!");
    return 0;


}