#include <stdio.h>

int main() {
    char chuoi[] = "Xin chao cac ban!";

    int soKyTuLaChuCai = 0;
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if ((chuoi[i] >= 'A' && chuoi[i] <= 'Z') || (chuoi[i] >= 'a' && chuoi[i] <= 'z')) {
            soKyTuLaChuCai++;
        }
    }
    printf("Chuoi goc: %s\n", chuoi);
    printf("So ky tu la chu cai trong chuoi: %d\n", soKyTuLaChuCai);

    return 0;
}

