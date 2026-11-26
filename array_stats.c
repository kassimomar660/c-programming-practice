
#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4
int minimum(const int grade[][EXAMS],size_t students);
int maximum(const int grade[][EXAMS],size_t students);
double average(const int setOfGrades[],size_t exams);
void printArray(const int grade[][EXAMS],size_t students);

int main(){
    int StudentGrades[STUDENTS][EXAMS]={
        {77,68,86,73},
        {96,87,89,78},
        {70,90,86,81}
    };
    puts("The array is:");
    printArray(StudentGrades,STUDENTS);
    printf("The maximum number of an array is %d\n",maximum(StudentGrades,STUDENTS));
    printf("The minimum value of an array is %d\n",minimum(StudentGrades,STUDENTS));
    for(size_t i=0;i<STUDENTS;i++){
        printf("The average grade for student %d is %.2f\n",i,average(StudentGrades[i],EXAMS));

    }
    return 0;

}
int minimum(const int grade[][EXAMS],size_t students){
    int lowGrade=100;
    for(size_t i=0;i<students;i++){
        for(size_t j=0;j<EXAMS;j++){
            if(grade[i][j]<lowGrade){
                lowGrade=grade[i][j];
            }
        }
    }
    return lowGrade;
    
    
}
int maximum(const int grade[][EXAMS],size_t students){
    int HighGrade=0;
    for(size_t i=0;i<students;i++){
        for(size_t j=0;j<EXAMS;j++){
            if(grade[i][j]>HighGrade){
                HighGrade=grade[i][j];
            }
        }
    }
    return HighGrade;
}

double average(const int SetOfGrades[],size_t exams){
    int sum=0;
    for(size_t i=0;i<exams;i++){
        sum+=SetOfGrades[i];
    }
    return (double)sum/exams;

}

void printArray(const int grade[][EXAMS],size_t students){
    printf("%36s\n","[0]  [1]  [2]  [3]");
    for(size_t i=0;i<students;i++){
        printf("StudentsGrades[%u]  ",i);
        for(size_t j=0;j<EXAMS;j++){
    printf("%d   ",grade[i][j]);
        }
        printf("\n");
    }


}