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

    printf("\n%-5s %-15s %-15s %-5s %-20s %-10s\n",
       "No", "Nama", "NIM", "IPK", "Jurusan", "Status");

    for (int i = 0; i < jumlah; i++) {

        char *statusText;
        if (status[i] == 0) statusText = "Cuti";
        else if (status[i] == 1) statusText = "Aktif";
        else statusText = "Lulus";

        printf("%-5d %-15s %-15s %-5.2f %-20s %-10s\n",
             i + 1, nama[i], nim[i], ipk[i], jurusan[i], statusText);
}

}
