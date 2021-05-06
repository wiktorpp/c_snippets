#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char buf2[5] = "buf2";
    char buf1[10] = "sjsjdjdj";

    strcpy(buf2, buf1);

    printf("buf1 val:  %s\n", buf1);
    printf("buf2 val:  %s\n", buf2);
    printf("buf1 addr: %p\n", (void *)buf1);
    printf("buf2 addr: %p\n", (void *)buf2);
}