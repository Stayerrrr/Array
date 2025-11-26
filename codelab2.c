#include <stdio.h>

int main() {
    int hadir[2][3] = {
        {50, 45, 60}, // Fakultas Teknik
        {40, 50, 55}  // Fakultas Ekonomi
    };

    int totalHari[3] = {0};
    int totalFakultas[2] = {0};

    // Hitung total per hari
    for (int hari = 0; hari < 3; hari++) {
        totalHari[hari] = hadir[0][hari] + hadir[1][hari];
    }

    // Hitung total per fakultas
    for (int fak = 0; fak < 2; fak++) {
        for (int hari = 0; hari < 3; hari++) {
            totalFakultas[fak] += hadir[fak][hari];
        }
    }

    // Output
    printf("Total Kehadiran Per Hari:\n");
    for (int hari = 0; hari < 3; hari++) {
        printf("Hari %d: %d Peserta\n", hari + 1, totalHari[hari]);
    }

    printf("\nTotal Kehadiran Per Fakultas:\n");
    printf("Fakultas Teknik: %d Peserta\n", totalFakultas[0]);
    printf("Fakultas Ekonomi: %d Peserta\n", totalFakultas[1]);

    return 0;
}
