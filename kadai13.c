// kadai-13
#include <stdio.h>
#include <stdlib.h>

 void exchange(int *x, int *y){
    int i, j;
    i = *x;
    j = *y;
//    printf("i:%d, j:%d", i, j);
    *x = j;
    *y = i;
    return;
 }

int main(){
 int n, m;
 int *a = &n, *b = &m;
 //p = (char *)malloc(sizeof(char)*5);
 //str = (char *)malloc(sizeof(char) * 100);
 printf("2つの整数値を入力してください。:");
 scanf("%d, %d", a, b);
 printf("\n変数aの値は%d, 変数bの値は%dです.\n", *a, *b);
 exchange(a, b);
 printf("exchange()を呼び出した後の変数aの値は%d, 変数bの値は%dです.", *a, *b);
}