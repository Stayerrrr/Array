#include <stdio.h>

int main() {
    int stok[3][2] = {
        {15, 10},
        {12,  8},
        {10,  5}
    };

    char *hari[3] = {"Senin", "Selasa", "Rabu"};

    // Tampilkan sebelum perubahan
    printf("Data stok makanan sebelum restock:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s - Nasi Goreng: %d, Ayam Geprek: %d\n",
               hari[i], stok[i][0], stok[i][1]);
    }

    // Restock Ayam Geprek pada Rabu (+7)
    stok[2][1] += 7;

    // Tampilkan setelah perubahan
    printf("\nData stok makanan setelah restock:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s - Nasi Goreng: %d, Ayam Geprek: %d\n",
               hari[i], stok[i][0], stok[i][1]);
    }

    return 0;
}
