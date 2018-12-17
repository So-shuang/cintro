// kadai-11
#include <stdio.h>
#include <stdlib.h>
int main(){
 int i;
 char *p;
 char *str;
 i = 0;
 p = (char *)malloc(sizeof(char)*5);
 str = (char *)malloc(sizeof(char) * 2);
 char* q = p;
 printf("文字を5個入力してください。入力毎に改行を押してください。:\n");
 while(i < 5){
    if(i == 4){
        scanf("%s\n", str);
        *p = *str;
        p = q;
        i++;
        printf("配列の中身は以下の通りです。\n");        
    }else{
        scanf("%s\n", str);
        *p = *str;
        p++;
        i++;
    }
 }
 i = 0;
 while(i < 5){
     printf("要素:%c アドレス：%p\n", *p, p);
     p++;
     i++;
 }


}