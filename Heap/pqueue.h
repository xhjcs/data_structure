//
//  pqueue.h
//  C
//
//  Created by baye on 2017/6/12.
//  Copyright © 2017年 baye. All rights reserved.
//

#ifndef pqueue_h
#define pqueue_h

#include <stdio.h>

#include "heap.h"

/* Implement priority queues as heaps. */
typedef  Heap PQueue;

/* Public Interface */
#define pqueue_init heap_init
#define pqueue_destroy heap_destroy
#define pqueue_insert heap_insert
#define pqueue_extract heap_extract
#define pqueue_peek(pqueue) ((pqueue)->tree == NULL ? NULL : (pqueue)->tree[0])
#define pqueue_size heap_size

#endif /* pqueue_h */
