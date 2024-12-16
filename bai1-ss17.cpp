#include <stdio.h>

void nhapMang(int size, int arr[]);

void hienThiMang(int arr[], int size);

void tinhdodaimang(int arr[], int size);

void timphantulonnhat(int arr[], int size);

void tinhtongmang(int arr[], int size);

int main(){
    int choice, size;
    int arr[1000];
    do{
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        printf("\n");

        switch(choice){
            case 1:
                printf("nhap so phan tu: ");
                scanf("%d",&size);
                nhapMang(size, arr);
                break;

            case 2:
                printf("2. Hien thi cac phan tu trong mang.\n");
                hienThiMang(arr, size);
                break;

            case 3:
                printf("3. Tinh do dai mang.\n");
                tinhdodaimang(arr, size);
                break;
            
            case 4:
                printf("4. Tinh tong cac phan tu trong mang.\n");
                tinhtongmang(arr, size);
                break;
            
            case 5:
                printf("5. Hien thi phan tu lon nhat.\n");
                timphantulonnhat(arr, size);
                break;

            default: 
                printf("Lua chon khong hop le'\n");
                break;
        }
        

    }while(choice!=6);
}

void nhapMang(int size, int arr[]){
    for(int i=0; i<size; i++){
        printf("nhap phan tu thu %d: ", i+1);
        scanf("%d",&arr[i]);
    }
}

void hienThiMang(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("Phan tu thu %d la: %d\n", i, arr[i]);
    }
}

void tinhdodaimang(int arr[],int size){
    printf("do dai cua mang: %d\n", size);
}

void tinhtongmang(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    printf("Tong cac phan tu trong mang: %d\n", sum);
}

void timphantulonnhat(int arr[], int size){
    int max=arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Phan tu lon nhat: %d\n", max);
}
