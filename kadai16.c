// kadai-16
#include <stdio.h>
#include <stdlib.h>

typedef struct person {
    char name[20];
    char email[100];
} personData;

typedef struct company {
    personData ceo;
    personData employees[100];
} companyData;

int main(){
    personData p[100];
    companyData c[100];
    int i = 0;
    while( scanf("%s %s", p[i].name, p[i].email != EOF)){
        if(i == 0){
            c[i].ceo = p[i].name;
            printf("経営者：%s\n", c[i].ceo);
            i++;
        }else{
            c[i].employees[i] = p[i].name;
            printf("従業員：%s\n", c[i].employees);
            i++;
        }
    }
}