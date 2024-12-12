#include <stdio.h>
#include <string.h>

int demSoTu(const char* chuoi) {
    int dem = 0;
    int len = strlen(chuoi);
    int trongTu = 0;
    for (int i = 0; i < len; i++) {
        if (chuoi[i] != ' ' && chuoi[i] != '\t' && chuoi[i] != '\n') {
            if (!trongTu) {
                dem++;
                trongTu = 1;
            }
        } else {
            trongTu = 0;
        }
    }
    return dem;
}
int main() {
    char chuoi[] = "Xin chao cac ban";
    printf("Chuoi: %s\n", chuoi);
    int soTu = demSoTu(chuoi);
    printf("So tu trong chuoi: %d\n", soTu);
    return 0;
}

