#include <stdio.h>


int keliling(int s) {
    return 4 * s;
}

int luas(int s) {
    return s * s;
}

int volume(int s) {
    return s * s * s;
}

int main() {
    int s;
    printf("Masukkan panjang sisi persegi: ");
    scanf("%d", &s);

    int kelilingPersegi = keliling(s);
    int luasPersegi = luas(s);
    int volumeKubus = volume(s);

    printf("Keliling persegi: %d\n", kelilingPersegi);
    printf("Luas persegi: %d\n", luasPersegi);
    printf("Volume kubus: %d\n", volumeKubus);

    return 0;
}