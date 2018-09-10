//
//  issort.c
//  C
//
//  Created by baye on 2017/6/23.
//  Copyright © 2017年 baye. All rights reserved.
//

#include <stdlib.h>
#include <string.h>

#include "issort.h"

int issort(void *data, int size, int esize, int (*compare)(const void *key1, const void *key2)) {
    char *a = data;
    void *key;
    int i, j;
    
    if ((key = (char *)malloc(esize)) == NULL) {
        return -1;
    }
    
    for (i = 1; i < size; i++) {
        memcpy(key, &a[i * esize], esize);
        j = i - 1;
        while (j >= 0 && compare(key, &a[j * esize])) {
            memcpy(&a[(j + 1) * esize], &a[j * esize], esize);
            j--;
        }
        memcpy(&a[(j + 1) * esize], key, esize);
    }
    
    free(key);
    
    return 0;
}
