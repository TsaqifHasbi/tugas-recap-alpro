#include <stdio.h>

int main()
{
    int elemen, i;
    int nilai[100];
    int jumlah = 0;

    printf("Masukan jumlah elemen yan akan diinput : ");
    scanf("%d", &elemen);
    for (i = 0; i < elemen; i++)
    {
        printf("Masukan nilai elemen ke-%d : ", i + 1);
        scanf("%d", &nilai[i]);
        jumlah += nilai[i];
    }

    printf("Jumlah semua nilainya adalah %d", jumlah);
    
    
    return 0;
}
