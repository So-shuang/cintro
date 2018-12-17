// sample 2-1
#include <stdio.h>
#include <stdlib.h>
int main(){
 int i, *p;
 i = 0;
 p = (int*)malloc(sizeof(int)*5);
 int* q = p;
 printf("整数値を5個入力してください。入力毎に改行を押してください。:\n");
 while(i < 5){
    if(i == 4){
        scanf("%d", p);
        p = q;
        i++;
        printf("配列の中身は以下の通りです。\n");        
    }else{
        scanf("%d\n", p);
        p++;
        i++;
    }
 }
 i = 0;

 while(i < 5){
     printf("値:%d アドレス：%p\n", *p, p);
     p++;
     i++;
 }


}