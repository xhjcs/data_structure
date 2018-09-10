//
//  bfs.h
//  C
//
//  Created by baye on 2017/6/13.
//  Copyright © 2017年 baye. All rights reserved.
//

#ifndef bfs_h
#define bfs_h

#include <stdio.h>

#include "graph.h"
#include "list.h"

/* Define a struceture for vertices in a breadth-first search. */
typedef struct BfsVertex_ {
    void *data;
    VertexColor color;
    int hops;
} BfsVertex;

/* Public Interface */
int bfs(Graph *graph, BfsVertex *start, List *hops);

#endif /* bfs_h */
