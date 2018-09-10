//
//  page.h
//  C
//
//  Created by baye on 2017/5/8.
//  Copyright © 2017年 baye. All rights reserved.
//

#ifndef page_h
#define page_h

#include <stdio.h>
#include "clist.h"

/* Define a structure for information about pages. */
typedef struct Page_ {
    int number;
    int reference;
} Page;

/* Public Interface */
int replace_page(CListElmt **current);

#endif /* page_h */
