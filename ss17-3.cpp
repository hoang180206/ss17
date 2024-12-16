#include <stdio.h>
#include <ctype.h>
#include <string.h>
void soSanhChuoi(char *str1, char *str2);
void inHoaChuoi(char *str);
void themChuoi(char *str1, char *str2);
void nhapChuoi(char *str);
void inChuoiDaoNguoc(char *str);
int soLuongTu(char *str);


int main(){
    char str[100], str2[100];
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. Nhap vao chuoi khac, so sanh chuoi\n");
        printf("5. In hoa tat ca chu cai trong chuoi\n");
        printf("6. Nhap vao chuoi khac va them chuoi vao chuoi ban dau\n");
        printf("7. Thoat\n");
        printf("\nLua chon cua ban: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                nhapChuoi(str);
                break;
            case 2:
                inChuoiDaoNguoc(str);
                break;
            case 3:
                printf("So luong tu trong chuoi: %d\n", soLuongTu(str));
                break;
            case 4:
                nhapChuoi(str2);
                soSanhChuoi(str, str2);
                break;
            case 5:
                inHoaChuoi(str);
                break;
            case 6:
                nhapChuoi(str2);
                themChuoi(str, str2);
                break;
            case 7:
                printf("Thoat chuong trinh\n");
                return 0;
            default:
                printf("Khong co lua chon nay\n");
        }
    } while(1);

    return 0;
}
void nhapChuoi(char *str){
    printf("Nhap chuoi: ");
    fgets(str, 200, stdin);
    str[strcspn(str, "\n")]=0;
}
void inChuoiDaoNguoc(char *str){
    int len=strlen(str);
    printf("Chuoi dao nguoc: ");
    for(int i=len-1; i>=0; i--){
        putchar(str[i]);
    }
    printf("\n");
}
int soLuongTu(char *str){
    int count=0;
    while (*str!='\0'){
        while (*str == ' ') str++;
        if (*str!='\0'){
            count++;
            while (*str != ' ' && *str != '\0') str++;
        }
    }
    return count;
}
void soSanhChuoi(char *str1, char *str2){
    if(strlen(str1) < strlen(str2)) {
        printf("Chuoi 2 dai hon chuoi 1\n");
    }else if (strlen(str1) > strlen(str2)) {
        printf("Chuoi 2 ngan hon chuoi 1\n");
    }else{
        printf("Hai chuoi co do dai bang nhau\n");
    }
}
void inHoaChuoi(char *str){
    while (*str!='\0') {
        putchar(toupper(*str));
        str++;
    }
    printf("\n");
}
void themChuoi(char *str1, char *str2) {
    strcat(str1, str2);
    printf("Chuoi sau khi them: %s\n", str1);
}
