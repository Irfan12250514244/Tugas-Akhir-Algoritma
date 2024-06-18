#include <stdio.h>


int main() {
    int pin = 1456; 
    int input_pin;
    float saldo = 1000000.00;  
    int pilihan;
    float jumlah;

    printf("Selamat datang di Irvan ATM!\n");

    printf("Silakan masukkan PIN Anda: ");
    scanf("%d", &input_pin);

    if (input_pin != pin) {
        printf("PIN yang Anda masukkan salah. Program berakhir.\n");
        return 0; 
    }

    printf("\nMenu ATM:\n");
    printf("1. Cek Saldo\n");
    printf("2. Tarik Tunai\n");
    printf("3. Setor Tunai\n");
    printf("4. Keluar\n");

    printf("\nSilakan pilih menu (1-4): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("\nSaldo Anda saat ini: %.2f\n", saldo);
            break;
        case 2:
            printf("\nMasukkan jumlah yang ingin Anda tarik: ");
            scanf("%f", &jumlah);
            if (jumlah > saldo) {
                printf("Maaf, saldo Anda tidak mencukupi.\n");
            } else {
                saldo -= jumlah;
                printf("Penarikan berhasil. Saldo Anda sekarang: %.2f\n", saldo);
            }
            break;
        case 3:
            printf("\nMasukkan jumlah yang ingin Anda setorkan: ");
            scanf("%f", &jumlah);
            saldo += jumlah;
            printf("Setoran berhasil. Saldo Anda sekarang: %.2f\n", saldo);
            break;
        case 4:
            printf("\nTerima kasih telah menggunakan ATM. Program berakhir.\n");
            break;
        default:
            printf("\nPilihan menu tidak valid.\n");
            break;
    }

    return 0;
}
