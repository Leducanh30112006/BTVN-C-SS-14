#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Xin chao";
    printf("Chuoi goc: %s\n", chuoi);
    char kyTu;
    printf("Nhap vao mot ky tu bat ky: ");
    scanf(" %c", &kyTu); 
    int dem = 0;
    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == kyTu) {
            dem++;
        }
    }
    printf("So lan xuat hien cua ky tu '%c' trong chuoi la: %d\n", kyTu, dem);

    return 0;
}

