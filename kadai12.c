// kadai-12
#include <stdio.h>
#include <stdlib.h>
int main(){
 char *p, *str;
 //p = (char *)malloc(sizeof(char)*5);
 str = (char *)malloc(sizeof(char) * 100);
 printf("文字列を入力してください。:\n");
 scanf("%s", str);
 p = str;
// int strLength(char *str){
//     int n = 0;
//     while( *str != '\0'){
//         str++;
//         n++;
//     }
//     return n;
// }
 while(*p != '\0'){
    printf("%c", *p);
    p++;
    }
 printf("\n");
 while(p >= str){    
    printf("%c", *p);
    p--;
 }
}