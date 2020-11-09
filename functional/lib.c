#include <stdio.h>
int getint();
int putint(int);
//int putchar(int);
int getint(){
    int tmp;
    scanf("%d", &tmp);
    return tmp;
}
int putint(int x){
    printf("%d", x);
    return 0;
}
//int putchar(int x){
//    printf("%c", (char)x);
//    return 0;
//}