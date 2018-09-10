//
//  lex.h
//  C
//
//  Created by baye on 2017/5/15.
//  Copyright © 2017年 baye. All rights reserved.
//

#ifndef lex_h
#define lex_h

#include <stdio.h>
#include "chtbl.h"

/* Define the token types recognized by the lexical analyzer. */
typedef enum Token_ {
    lexit,
    error,
    digit,
    other
} Token;

/* Public Interface */
Token lex(const char *istream, CHTbl *symtbl);

#endif /* lex_h */
