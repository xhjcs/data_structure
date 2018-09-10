//
//  traverse.c
//  C
//
//  Created by baye on 2017/5/26.
//  Copyright © 2017年 baye. All rights reserved.
//

/* traverse.c */
#include "list.h"
#include "bitree.h"

/* preorder */
int bitree_preorder(const BiTreeNode *node, List *list) {
    /* Load the list with a preorder listing of the tree. */
    if (!bitree_is_eob(node)) {
        if (list_ins_next(list, list_tail(list), bitree_data(node)) != 0) {
            return -1;
        }
        
        if (!bitree_is_eob(bitree_left(node))) {
            if (bitree_preorder(bitree_left(node), list) != 0) {
                return -1;
            }
            
        }
        
        if (!bitree_is_eob(bitree_right(node))) {
            if (bitree_preorder(bitree_right(node), list) != 0) {
                return -1;
            }
        }
    }
    return 0;
}

/* inorder */
int bitree_inorder(const BiTreeNode *node, List *list) {
    /* Load the list with an inorder listing of the tree. */
    if (!bitree_is_eob(node)) {
        if (!bitree_is_eob(bitree_left(node))) {
            if (bitree_inorder(bitree_left(node), list) != 0) {
                return -1;
            };
        }
        
        if (list_ins_next(list, list_tail(list), bitree_data(node)) != 0) {
            return -1;
        }
        
        if (!bitree_is_eob(bitree_right(node))) {
            if (bitree_inorder(bitree_right(node), list) != 0) {
                return -1;
            }
        }
    }
    
    return 0;
}

/* postorder */
int bitree_postorder(const BiTreeNode *node, List *list) {
    /* Load the list with a postorder lsiting of the tree. */
    if (!bitree_is_eob(node)) {
        if (!bitree_is_eob(bitree_left(node))) {
            if (bitree_postorder(bitree_left(node), list) != 0) {
                return -1;
            }
        }
        
        if (!bitree_is_eob(bitree_right(node))) {
            if (bitree_postorder(bitree_right(node), list) != 0) {
                return -1;
            }
        }
        
        if (list_ins_next(list, list_tail(list), bitree_data(node)) != 0) {
            return -1;
        }
    }
    
    return 0;
}
