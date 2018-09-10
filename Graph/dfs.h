//
//  dfs.h
//  C
//
//  Created by baye on 2017/6/13.
//  Copyright © 2017年 baye. All rights reserved.
//

#ifndef dfs_h
#define dfs_h

#include <stdio.h>

#include "graph.h"
#include "list.h"

/* Define a structure for vertices in a depth-first search. */
typedef struct DfsVertex_ {
    void *data;
    VertexColor color;
} DfsVertex;

/* Public Interface */
int dfs(Graph *graph, List *ordered);

#endif /* dfs_h */
