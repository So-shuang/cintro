// kadai-14
#include <stdio.h>
#include <stdlib.h>
typedef struct shouhin {
    char code[10];
    char name[40];
    int price;
} shouhinData;

int main(){
    shouhinData items[100];
    int i = 0;

    while( scanf("%s %s %d", items[i].code, items[i].name, &(items[i].price)) != EOF){
        printf("商品コード：%s\n", items[i].code);
        printf("商品名：%s\n", items[i].name);
        printf("値段：%d\n\n", items[i].price);
        i++;
    }
}