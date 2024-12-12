#include <stdio.h>

int main() {
    char chuoi[] = "Xin chao";
    printf("Chuoi da khai bao: %s\n", chuoi);
    printf("Cac ky tu trong chuoi cach nhau boi dau cach:\n");
    for (int i = 0; chuoi[i] != '\0'; i++) {
        printf("%c ", chuoi[i]);
    }
    printf("\n");
    return 0;
}

