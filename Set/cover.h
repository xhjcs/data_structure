//
//  cover.h
//  C
//
//  Created by baye on 2017/5/10.
//  Copyright © 2017年 baye. All rights reserved.
//

#ifndef cover_h
#define cover_h

#include <stdio.h>
#include "set.h"

/* Define a structure for subsets identified by a key. */
typedef struct KSet_ {
    void *key;
    Set set;
} KSet;

/* Public Interface */
int cover(Set *members, Set *subsets, Set *covering);

#endif /* cover_h */
