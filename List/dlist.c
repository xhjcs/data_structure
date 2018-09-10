//
//  dlist.c
//  C
//
//  Created by baye on 2017/5/8.
//  Copyright © 2017年 baye. All rights reserved.
//

#include <stdlib.h>

#include "dlist.h"

void dlist_init(DList *list, void (*destroy)(void *data)) {
    list->size = 0;
    list->destroy = destroy;
    list->head = NULL;
    list->tail = NULL;
}

void dlist_destroy(DList *list) {
    void *data;
    while (dlist_size(list) > 0) {
        if (dlist_remove(list, dlist_tail(list), (void **)&data) == 0 && list->destroy != NULL) {
            /* Call a user-defined function to free dynamically allocated data. */
            list->destroy(data);
        }
    }
    
    /* No operations are allowed now, but clear the structure as a precaution. */
    memset(list, 0, sizeof(DList));
}

/* dlist_ins_next */
int dlist_ins_next(DList *list, DListElmt *element, const void *data) {
    DListElmt *new_element;
    
    /* Do not allow a NULL element unless the list is empty. */
    if (element == NULL && dlist_size(list) != 0) {
        return -1;
    }
    
    /* Allocate storage for the element. */
    if ((new_element = (DListElmt *)malloc(sizeof(DListElmt))) == NULL) {
        return -1;
    }
    
    /* Insert the new element into the list. */
    new_element->data = (void *)data;
    
    if (dlist_size(list) == 0) {
        new_element->next = NULL;
        new_element->prev = NULL;
        list->head = new_element;
        list->tail = new_element;
    } else {
        new_element->next = element->next;
        new_element->prev = element;
        
        if (element->next == NULL) {
            list->tail = new_element;
        } else {
            element->next->prev = new_element;
        }
        
        element->next = new_element;
    }
    
    /* Adjust the size of the list to account for the inserted element. */
    list->size++;
    
    return 0;
}

int dlist_ins_prev(DList *list, DListElmt *element, const void *data) {
    DListElmt *new_element;
    
    /* Do not allow a NULL element unless the list is empty. */
    if (element == NULL && dlist_size(list) != 0) {
        return -1;
    }
    
    /* Allocate storage for the element. */
    if ((new_element = (DListElmt *)malloc(sizeof(DListElmt))) == NULL) {
        return -1;
    }
    
    /* Insert the new element into the list. */
    new_element->data = (void *)data;
    
    if (dlist_size(list) == 0) {
        new_element->next = NULL;
        new_element->prev = NULL;
        list->head = new_element;
        list->tail = new_element;
    } else {
        new_element->next = element;
        new_element->prev = element->prev;
        
        if (element->prev == NULL) {
            list->head = new_element;
        } else {
            element->prev->next = new_element;
        }
        
        element->prev = new_element;
    }
    
    /* Adjust the size of the list to account for the new element. */
    list->size++;
    
    return 0;
}

int dlist_remove(DList *list, DListElmt *element, void **data) {
    /* Do not allow a NULL element or removal from an empty list. */
    if (element == NULL || dlist_size(list) == 0) {
        return -1;
    }
    
    /* Remove the element from the list. */
    *data = element->data;
    
    if (element == list->head) {
        /* Handle removal from the head of the list. */
        list->head = element->next;
        
        if (list->head == NULL) {
            list->tail = NULL;
        } else {
            element->next->prev = NULL;
        }
    } else {
        /* Handle removal from other than the head of the list. */
        element->next->prev = element->prev;
        
        if (element->next == NULL) {
            list->tail = element->prev;
        } else {
            element->next->prev = element->prev;
        }
    }
    
    /* Free the storage allocated by the abstract datatype. */
    
    free(element);
    
    /* Adjust the size of the list to account for the removed element. */
    list->size--;
    
    return 0;
}
