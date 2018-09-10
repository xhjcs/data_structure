//
//  rxsort.c
//  C
//
//  Created by baye on 2017/7/26.
//  Copyright © 2017年 baye. All rights reserved.
//

/* rxsort.c */
#include <limits.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "rxsort.h"

/* rxsort */
//int rxsort(int *data, int size, int p, int k) {
//    int *counts, *temp;
//    int index, pval, i, j, n;
//    
//    /* Allocate storage for the counts. */
//    if ((counts = (int *)malloc(k * sizeof(int))) == NULL) {
//        return -1;
//    }
//    
//    /* Allocate storage for the sorted elements. */
//    if ((temp = (int *)malloc(size * sizeof(int))) == NULL) {
//        return -1;
//    }
//    
//    /* Sort from the least significant position to the most significant. */
//    for (n = 0; n < p; n++) {
//        /* Initialize the counts. */
//        for (i = 0; i < k; i++) {
//            counts[i] = 0;
//        }
//        
//        /* Calculate the position value. */
//        pval = (int)pow((double)k, (double)n);
//        
//        /* Count the occurrences of each digit value. */
//        for (j = 0; j < size; j++) {
//            index = (int)(data[j] / pval) % k;
//            counts[index]++;
//        }
//        
//        /* Adjust each count to reflect the counts before it. */
//        for (i = 1; i < k; i++) {
//            counts
//        }
//    }
//    
//}
