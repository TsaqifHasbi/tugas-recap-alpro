#include <stdio.h>

int main()
{
    int trans, i;
    int nominal[100];
    int pengeluaran = 0;

    printf("Masukan jumlah transaksi : ");
    scanf("%d", &trans);

    if (trans <= 0)
    {
        printf("Tidak ada transaksi hari ini.");
        return 0;
    }

    for (i = 0; i < trans; i++){
        printf("Masukan nominal transaksi ke-%d : ", i + 1);
        scanf("%d", &nominal[i]);
        pengeluaran += nominal[i];
    }

    printf("Total pengeluaran hari ini : %d", pengeluaran);
      
    return 0;
}
