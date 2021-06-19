#include <stdio.h>
#include <stdlib.h>



int main()
{
    const char studentName[25];
    printf("Enter your name: ");
    fgets(studentName, 25, stdin);

    printf("Enter the subject names and marks from your class 10th result, Highest 4 subjects only\n");

    int marks[5];
    char subject1[20];
    char subject2[20];
    char subject3[20];
    char subject4[20];

    /* Subject1 */


    printf("Enter subject1 name: ");
    fgets(subject1, 20, stdin);
    printf("Enter marks obtained in subject1: ");
    scanf("%d", &marks[0]);


    /* Subject2 */


    printf("Enter subject2 name: ");
    scanf("%s", subject2);
    printf("Enter marks obtained in subject2: ");
    scanf("%d", &marks[1]);


    /* Subject3 */


    printf("Enter subject3 name: ");
    scanf("%s", subject3);
    printf("Enter marks obtained in subject3: ");
    scanf("%d", &marks[2]);


    /* Subject4 */


    printf("Enter subject4 name: ");
    scanf("%s", subject4);
    printf("Enter marks obtained in subject4: ");
    scanf("%d", &marks[3]);


    /* Class 11th */

    printf("Write your individual marks and subjects name from class 11th also with Practical/Project Marks\n");


    int fullMarks[6];
    int marksinTheory[6];
    int projectPractical[6];
    char asubject1[20];
    char asubject2[20];
    char asubject3[20];
    char asubject4[20];
    char asubject5[20];

    /* asubject1 */


    printf("Enter First Subject name: ");
    scanf("%s", asubject1);
    printf("Full marks of First subject: ");
    scanf("%d", &fullMarks[0]);
    printf("Obtained marks in theory: ");
    scanf("%d", &marksinTheory[0]);
    printf("Marks from project/practical: ");
    scanf("%d", &projectPractical[0]);


    /* asubject2 */


    printf("Enter Second subject name: ");
    scanf("%s", asubject2);
    printf("Full marks of Second subject: ");
    scanf("%d", &fullMarks[1]);
    printf("Obtained marks in theory: ");
    scanf("%d", &marksinTheory[1]);
    printf("Marks from project/practical: ");
    scanf("%d", &projectPractical[1]);


   /* asubject3 */

    printf("Enter Third subject name: ");
    scanf("%s", asubject3);
    printf("Full marks of Third subject: ");
    scanf("%d", &fullMarks[2]);
    printf("Obtained marks in theory: ");
    scanf("%d", &marksinTheory[2]);
    printf("Marks from project/practical: ");
    scanf("%d", &projectPractical[2]);


    /* asubject4 */


    printf("Enter Fourth subject name: ");
    scanf("%s", asubject4);
    printf("Full marks of Fourth subject: ");
    scanf("%d", &fullMarks[3]);
    printf("Obtained marks in theory: ");
    scanf("%d", &marksinTheory[3]);
    printf("Marks from project/practical: ");
    scanf("%d", &projectPractical[3]);


   /* asubject5 */

    printf("Enter Fifth subject name: ");
    scanf("%s", asubject5);
    printf("Full marks of Fifth subject: ");
    scanf("%d", &fullMarks[4]);
    printf("Obtained marks in theory: ");
    scanf("%d", &marksinTheory[4]);
    printf("Marks from project/practical: ");
    scanf("%d", &projectPractical[4]);


    /* calculation */


    /* Total number in class 10th */

    int totalNumber10;
    totalNumber10 = marks[0] + marks[1] + marks[2] + marks[3];




    double theoryA[6];
    double theoryB[6];
    double marksA[6];
    double marksB[6];
    double marksinasubject[6];
    double totalmarks12[6];
    double fullmarksin12th;

    /* Marks obtained  in class 12th in asubject1 */


    theoryA[0] = 0.4 * fullMarks[0];
    theoryB[0] = 0.6 * fullMarks[0];
    marksA[0] = theoryA[0] * totalNumber10/400;
    marksB[0] = theoryB[0] * marksinTheory[0]/fullMarks[0];
    totalmarks12[0] = marksA[0] + marksB[0] + projectPractical[0];


    /* Marks obtained  in class 12th in asubject2 */


    theoryA[1] = 0.4 * fullMarks[1];
    theoryB[1] = 0.6 * fullMarks[1];
    marksA[1] = theoryA[1] * totalNumber10/400;
    marksB[1] = theoryB[1] * marksinTheory[1]/fullMarks[1];
    totalmarks12[1] = marksA[1] + marksB[1] + projectPractical[1];


    /* Marks obtained  in class 12th in asubject3 */


    theoryA[2] = 0.4 * fullMarks[2];
    theoryB[2] = 0.6 * fullMarks[2];
    marksA[2] = theoryA[2] * totalNumber10/400;
    marksB[2] = theoryB[2] * marksinTheory[2]/fullMarks[2];
    totalmarks12[2] = marksA[2] + marksB[2] + projectPractical[2];


    /* Marks obtained  in class 12th in asubject4 */


    theoryA[3] = 0.4 * fullMarks[3];
    theoryB[3] = 0.6 * fullMarks[3];
    marksA[3] = theoryA[3] * totalNumber10/400;
    marksB[3] = theoryB[3] * marksinTheory[3]/fullMarks[3];
    totalmarks12[3] = marksA[0] + marksB[3] + projectPractical[3];


    /* Marks obtained  in class 12th in asubject5 */


    theoryA[4] = 0.4 * fullMarks[4];
    theoryB[4] = 0.6 * fullMarks[4];
    marksA[4] = theoryA[4] * totalNumber10/400;
    marksB[4] = theoryB[4] * marksinTheory[4]/fullMarks[4];
    totalmarks12[4] = marksA[4] + marksB[4] + projectPractical[4];


    /* Full Marks */

    fullmarksin12th = totalmarks12[0] + totalmarks12[1] + totalmarks12[2] + totalmarks12[3] + totalmarks12[4];


    /* Printout the result */

    printf("Student Name: %s", studentName);
    printf("%s = %lf\n", asubject1, totalmarks12[0]);
    printf("%s = %lf\n", asubject2, totalmarks12[1]);
    printf("%s = %lf\n", asubject2, totalmarks12[2]);
    printf("%s = %lf\n", asubject4, totalmarks12[3]);
    printf("%s = %lf\n", asubject5, totalmarks12[4]);
    printf("Grand Total = %lf\n", asubject5, totalmarks12[4]);








    return 0;
}








