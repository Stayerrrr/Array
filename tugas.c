#include <stdio.h>

int main() {
    int jumlah;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlah);

    char nama[jumlah][50];
    char nim[jumlah][20];
    float ipk[jumlah];
    char jurusan[jumlah][50];
    int status[jumlah];

    // Input data
    for (int i = 0; i < jumlah; i++) {
        printf("\nMahasiswa ke-%d\n", i + 1);

        printf("Nama: ");
        scanf(" %[^\n]", nama[i]);

        printf("NIM: ");
        scanf(" %s", nim[i]);

        printf("IPK: ");
        scanf("%f", &ipk[i]);

        printf("Jurusan: ");
        scanf(" %[^\n]", jurusan[i]);

        printf("Status (0=Cuti, 1=Aktif, 2=Lulus): ");
        scanf("%d", &status[i]);
    }

    // Output data
    printf("\n=== DATA MAHASISWA ===\n");

    for (int i = 0; i < jumlah; i++) {
        printf("\nMahasiswa ke-%d\n", i + 1);
        printf("Nama    : %s\n", nama[i]);
        printf("NIM     : %s\n", nim[i]);
        printf("IPK     : %.2f\n", ipk[i]);
        printf("Jurusan : %s\n", jurusan[i]);

        char *statusText;
        if (status[i] == 0) statusText = "Cuti";
        else if (status[i] == 1) statusText = "Aktif";
        else statusText = "Lulus";

        printf("Status  : %s\n", statusText);
    }

    return 0;
}
