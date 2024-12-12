#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Xin chao";
    printf("Chuoi goc: %s\n", chuoi);
    int len = strlen(chuoi);
    char chuoiDaoNguoc[len + 1]; 
    for (int i = 0; i < len; i++) {
        chuoiDaoNguoc[i] = chuoi[len - 1 - i];
    }
    chuoiDaoNguoc[len] = '\0'; 
    printf("Chuoi dao nguoc: %s\n", chuoiDaoNguoc);

    return 0;
}

