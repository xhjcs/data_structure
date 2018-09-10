//
//  page.c
//  C
//
//  Created by baye on 2017/5/8.
//  Copyright © 2017年 baye. All rights reserved.
//

#include "page.h"

/* replace_page */
int replace_page(CListElmt **current) {
    /* Circle through the list of pages until one is found to replacel. */
    while (((Page *)(*current)->data)->reference != 0) {
        ((Page *)(*current)->data)->reference = 0;
        *current = clist_next(*current);
    }
    
    return ((Page *)(*current)->data)->number;
}
