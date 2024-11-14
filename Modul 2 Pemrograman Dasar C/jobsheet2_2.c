#include <stdio.h>

int main()
{
    // Variable declaration
    char  name[64];
    int   nim;
    char  major[64];
    char  faculty[64];
    float practiceScore;
    float midScore;
    float finalsScore;
    float endScore;

    // Program input
    printf("Silahkan masukkan Nama Lengkap:\n  ");
    scanf(" %63[^\n]s", name);

    printf("Silahkan masukkan NIM:\n  ");
    scanf(" %d", &nim);

    printf("Silahkan masukkan Program Studi:\n  ");
    scanf(" %63[^\n]s", major);

    printf("Silahkan masukkan Fakultas:\n  ");
    scanf(" %63[^\n]s", faculty);

    printf("Silahkan masukkan Nilai Praktikum:\n  ");
    scanf(" %f", &practiceScore);

    printf("Silahkan masukkan Nilai UTS:\n  ");
    scanf(" %f", &midScore);

    printf("Silahkan masukkan Nilai UAS:\n  ");
    scanf(" %f", &finalsScore);

    endScore = 0.3f * practiceScore + 0.3f * midScore + 0.4f * finalsScore;

    // Program output
    printf("\n");
    printf("Nama            : %s\n", name);
    printf("NIM             : %d\n", nim);
    printf("Prodi           : %s\n", major);
    printf("Fakultas        : %s\n", faculty);
    printf("Nilai Praktikum : %.2f\n", practiceScore);
    printf("Nilai UTS       : %.2f\n", midScore);
    printf("Nilai UAS       : %.2f\n", finalsScore);
    printf("Nilai Akhir     : %.2f\n", endScore);

    return 0;
}
