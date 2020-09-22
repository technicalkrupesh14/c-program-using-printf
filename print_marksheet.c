#include <stdio.h>

int main(){

    float C, Web, Fundamental, English, Total, Per;
    printf("Student Marksheet");
    printf("\nEnter C marks here - ");
    scanf("%f", &C);
    printf("\nEnter Web Development marks here - ");
    scanf("%f", &Web);
    printf("\nEnter Computer Fundamental marks here - ");
    scanf("%f", &Fundamental);
    printf("\nEnter English marks here - ");
    scanf("%f", &English);
    Total = C + Web + Fundamental + English;
    Per = (Total/400) *100;

    printf("\n * * * * * * * * * * * * * * * *");
    printf("\n* Total Marks Obientad = %.2f *",Total);
    printf("\n* Persentage Obientad = %.2f   *",Per);
    printf("\n * * * * * * * * * * * * * * * *");
    return 0;
}