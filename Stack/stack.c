//
//  stack.c
//  C
//
//  Created by baye on 2017/5/9.
//  Copyright © 2017年 baye. All rights reserved.
//

#include <stdlib.h>

#include "stack.h"

/* stack_push */
int stack_push(Stack *stack, const void *data) {
    /* Push the data noto the stack. */
    return list_ins_next(stack, NULL, data);
}

/* stack_pop */
int stack_pop(Stack *stack, void **data) {
    /* Pop the data off the stack. */
    return list_rem_next(stack, NULL, data);
}


