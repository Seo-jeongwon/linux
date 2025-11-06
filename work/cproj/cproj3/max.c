#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int data_input(){
    int a;
    printf("Input:");
    scanf("%d", &a);
    return a;
}

int data_max(int a, int b){
    if(a>b) return a;
    else return b;
}

void data_print(int max){
    printf("Max:%d\n", max);
}