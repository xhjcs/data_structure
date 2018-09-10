//
//  directls.h
//  C
//
//  Created by baye on 2017/7/1.
//  Copyright © 2017年 baye. All rights reserved.
//

#ifndef directls_h
#define directls_h

#include <dirent.h>

#include <stdio.h>

/* Define a structure for directory entries. */
typedef struct Directory_ {
    char name[MAXNAMLEN + 1];
} Directory;

/* Public Interface. */
int directls(const char *path, Directory **dir);

#endif /* directls_h */
