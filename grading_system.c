#include <stdio.h>
//the main function of the program goes here
int main() {
    int phy,chem,math,bio,comp;
    float avgMarks;
    
    printf("enter the marks of five subjects:\n");
    
    scanf("%d %d %d %d %d",&phy,&chem,&math,&bio,&comp);
    
    avgMarks = (phy+chem+math+bio+comp)/5;
    
    printf("average marks = %f\n\n",avgMarks );
    
    if(avgMarks<=100 && avgMarks>=90){
        printf("grade = A+");
    }
    else if(avgMarks<=90 && avgMarks>=80){
        printf("grade = A");
    }
    else if(avgMarks<=80 && avgMarks>=70){
        printf("grade = B+");
    }
    else if(avgMarks<=70 && avgMarks>=60){
        printf("grade = B");
    }
    else if(avgMarks<=60 && avgMarks>=50){
        printf("grade = C+");
    }
    else if(avgMarks<=50 && avgMarks>=40){
        printf("grade = C"); 
    }
    else if(avgMarks<40){
        printf("you failed");
    }
    
    return 0;
}
