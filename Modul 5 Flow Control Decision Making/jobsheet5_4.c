#include <stdio.h>

int main()
{
    float precenseScore;
    float assignmentScore;
    float utsScore;
    float uasScore;
    int   finalScore;
    char  grade[3] = "E-";

    printf("---=== Analisa Nilai Akhir ===---\n");

    printf("Masukkan Nilai kehadiran: ");
    scanf(" %f", &precenseScore);

    printf("Masukkan Nilai tugas: ");
    scanf(" %f", &assignmentScore);

    printf("Masukkan Nilai UTS: ");
    scanf(" %f", &utsScore);

    printf("Masukkan Nilai UAS: ");
    scanf(" %f", &uasScore);

    finalScore = (int)(0.2f * precenseScore +
                       0.2f * assignmentScore +
                       0.25f * utsScore +
                       0.35f * uasScore);

    if (finalScore <= 44)
    {
        grade[0] = 'E';
        grade[1] = '\0';
    }
    else if (finalScore >= 45 && finalScore <= 55)
    {
        grade[0] = 'D';
        grade[1] = '\0';
    }
    else if (finalScore >= 56 && finalScore <= 65)
    {
        grade[0] = 'C';
        grade[1] = '\0';
    }
    else if (finalScore >= 66 && finalScore <= 75)
    {
        grade[0] = 'B';
        grade[1] = '-';
    }
    else if (finalScore >= 76 && finalScore <= 80)
    {
        grade[0] = 'B';
        grade[1] = '\0';
    }
    else if (finalScore >= 81 && finalScore <= 85)
    {
        grade[0] = 'B';
        grade[1] = '+';
    }
    else if (finalScore >= 86 && finalScore <= 90)
    {
        grade[0] = 'A';
        grade[1] = '-';
    }
    else if (finalScore >= 91 && finalScore <= 100)
    {
        grade[0] = 'A';
        grade[1] = '\0';
    }
    else
    {
        grade[0] = '?';
        grade[1] = '?';
    }

    printf("\n");
    printf("Nilai akhir anda adalah %d (%s)\n", finalScore, grade);
    if (finalScore <= 55)
        printf("Maaf, anda tidak lulus!\n");
    else if (finalScore > 55 && finalScore <= 65)
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    else if (finalScore > 65 && finalScore <= 85)
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    else if (finalScore > 85)
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");

    return 0;
}
