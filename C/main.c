//
//  main.c
//  C
//
//  Created by baye on 2017/5/8.
//  Copyright © 2017年 baye. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "qksort.h"

#define DATA_COUNT  (11)

/* compare_int */
static int compare_long(const void *key1, const void *key2) {
    /* Compare two integers (used during median-of-three partitioning). */
    const long *long1 = key1, *long2 = key2;
    printf("baye:%ld\n\n", *long2);
    if (*(const int *)long1 > *(const int *)long2) {
        return 1;
    }
    if (*(const int *)long1 < *(const int *)long2) {
        return -1;
    }
    return 0;
}

typedef union Test_{
    short i;
    char str[sizeof(short)];
} Test;

int main(int argc, const char * argv[]) {
//    long a[DATA_COUNT] = {1, 7, 6, 2, 1, 7, 7, 1, 6, 0, 0};
//    for (int i = 0; i < DATA_COUNT; i++) {
////        a[i] = arc4random() % DATA_COUNT;
//        printf("%ld, ", a[i]);
//    }
//    printf("\n\n\n\n");
//    qksort(a, DATA_COUNT, sizeof(long), 0, DATA_COUNT - 1, compare_long);
//    
//    for (int i = 0; i < DATA_COUNT; i++) {
//        printf("%ld, ", a[i]);
//    }
//    
//    printf("\n\n\n\n");
    
    Test *test = (Test *)malloc(sizeof(Test));
    test->i = 0x0011;
    printf("%d, %d", test->str[0], test->str[1]);
//    if (sizeof(short) == 2) {
//        if (test->str[1] == 1 && test->str[1] == 2) {
//            printf("大端字节序");
//        }
//        else if (test->str[0] == 2 && test->str[1] == 1) {
//            printf("小端字节序");
//        }
//        else {
//            printf("结果未知");
//        }
//    }
//    else {
//        printf("sizeof(short)=%ld, 不等于2", sizeof(short));
//    }
}
