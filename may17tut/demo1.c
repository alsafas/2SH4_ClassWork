#include <stdio.h>


struct Mac_Student{
    char name;
    int level;
    double grade;
};

int main(void){
    int i,n;
    double sum=0;
    printf("How many students do you have? ");
    scanf("%d", &n);
    
    struct Mac_Student Students[n];

    //acquire data for gradebook
    printf("Enter your students data:\n");
    for (i=0; i<n; i++){
        printf("Enter the name of student %d: \n", i+1);
        scanf(" %c", &Students[i].name);

        printf("Enter the level of student %d: \n", i+1);
        scanf("%d", &Students[i].level);

        printf("Enter the grade of student %d: \n", i+1);
        scanf("%lf", &Students[i].grade);
    }

    //print gradebook
    printf("here is the complete Gradbook: \n");
    for (i=0; i<n; i++){
        printf("Student %d: Name: %c, Level: %d, Grade: %.3f\n", i+1, Students[i].name, Students[i].level, Students[i].grade);

    }

    //print the class average
    for (i=0; i<n; i++){
        sum += Students[i].grade;
    }
    printf("The class average is: %.3f", sum/n);

    return 0;
}