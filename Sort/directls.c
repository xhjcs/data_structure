//
//  directls.c
//  C
//
//  Created by baye on 2017/7/1.
//  Copyright © 2017年 baye. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "qksort.h"
#include "directls.h"

static int compare_dir(const void *key1, const void *key2) {
    int retval;
    
    if ((retval = strcmp(((const Directory*)key1)->name, ((const Directory *)key2)->name)) > 0) {
        return 1;
    }
    if (retval < 0) {
        return -1;
    }
    return 0;
}

/* directls */
int directls(const char *path, Directory **dir) {
    DIR *dirptr;
    Directory *temp;
    struct dirent *curdir;
    int count;
    
    /* Open the directory. */
    if ((dirptr = opendir(path)) == NULL) {
        return -1;
    }
    
    /* Get the directory. */
    *dir = NULL;
    count = 0;
    
    while ((curdir = readdir(dirptr)) != NULL) {
        count++;
        
        if ((temp = (Directory *)realloc(*dir, count * sizeof(Directory))) == NULL) {
            free(*dir);
            return -1;
        } else {
            *dir = temp;
        }
        strcpy(((*dir)[count - 1]).name, curdir->d_name);
    }
    
    closedir(dirptr);
    
    /* Sort the directory entries by name. */
    if (qksort(*dir, count, sizeof(Directory), 0, count - 1, compare_dir) != 0) {
        return -1;
    }
    
    /* Return the number of directory entries. */
    return count;
}



