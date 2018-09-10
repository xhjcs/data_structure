//
//  qksort.h
//  C
//
//  Created by baye on 2017/6/27.
//  Copyright © 2017年 baye. All rights reserved.
//

#ifndef qksort_h
#define qksort_h

#include <stdio.h>

int qksort(void *data, int size, int esize, int i, int k, int (*compare)(const void *key1, const void *key2));

#endif /* qksort_h */
