//
//  mgsort.h
//  C
//
//  Created by baye on 2017/7/1.
//  Copyright © 2017年 baye. All rights reserved.
//

#ifndef mgsort_h
#define mgsort_h

#include <stdio.h>

int mgsort(void *data, int size, int esize, int i, int k, int (*compare)(const void *key1, const void *key2));

#endif /* mgsort_h */
