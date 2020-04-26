#include<stdio.h>
int main(){
    char a[100];
    char b[100];
    printf("Enter the string: ");
    gets(a);
    for(int i=0; i<100; i++){
        b[i] = a[i];

    }
    printf("the copy of the string is: ");
    puts(b);
}