#include <stdio.h>

struct student
{
    char name[50];
    int s[5];
    float percentage;
}students[5];

int theWholeProcess(int stu, int sub);

int main() {
    int noStu = 5, noSub = 5;
    theWholeProcess(noStu, noSub);
}

int theWholeProcess(int stu, int sub)
{
    int i, j, temp, s[5];
    float sum = 0, totalSum = 0;
    char name[50];

    for(i = 0; i < stu; i++)
    {
        printf("Enter name of student %d:\n", i+1);
        scanf("%s",  &students[i].name);
        printf("\n");
        for(j = 0; j < sub; j++)
        {
            printf("Enter %s's marks in sub%d:\n", students[i].name, j+1);
            scanf("%d", &students[i].s[j]);
            printf("\n");
            printf("Enter total marks of sub%d:\n", j+1);
            scanf("%d", &temp);
            printf("\n");
            sum = sum + students[i].s[j];
            totalSum = totalSum + temp;
        }
        students[i].percentage = (sum / totalSum) * 100;
        // printf("%f %f %d %f\n", sum, totalSum, temp, students[i].percentage);
        sum = 0;
        totalSum = 0;
        temp = 0;
        printf("\n");
        // printf("%s\n %d\n %d\n %d\n %d\n %d\n %f%\n", students[i].name, students[i].s[0], students[i].s[1], students[i].s[2], students[i].s[3], students[i].s[4], students[i].percentage);
    }

    printf("Students who scored more than 75%% (exclusive)\n");

    for(i = 0; i < stu; i++) 
    {
        if(students[i].percentage > 75)
        {
            printf("Name: %s\n", students[i].name);
            for(j = 0; j < sub; j++)
            {
                printf("Marks in Sub%d: %d\n", j+1, students[i].s[j]);
            }
            printf("Percentage: %.2f%%\n\n", students[i].percentage);
        }
    }



    return 0;
}