//
//  issort.h
//  C
//
//  Created by baye on 2017/6/23.
//  Copyright © 2017年 baye. All rights reserved.
//

#ifndef issort_h
#define issort_h

#include <stdio.h>

int issort(void *data, int size, int esize, int (*compare)(const void *key1, const void *key2));

#endif /* issort_h */
