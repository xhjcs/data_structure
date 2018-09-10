//
//  set.h
//  C
//
//  Created by baye on 2017/5/9.
//  Copyright © 2017年 baye. All rights reserved.
//

#ifndef set_h
#define set_h

#include <stdio.h>
#include "list.h"

/* Implement sets as linked lists. */
typedef List Set;

/* Public Interface. */
void set_init(Set *set, int (*match)(const void *key1, const void *key2), void (*destroy)(void *data));
#define set_destroy list_destroy
int set_insert(Set *set, const void *data);
int set_remove(Set *set, void **data);
int set_union(Set *setu, const Set *set1, const Set *set2);
int set_intersection(Set *seti, const Set *set1, const Set *set2);
int set_difference(Set *setd, const Set *set1, const Set *set2);
int set_is_member(const Set *set, const void *data);
int set_is_subset(const Set *set1, const Set *set2);
int set_is_equal(const Set *set1, const Set *set2);
#define set_size list_size

#endif /* set_h */
