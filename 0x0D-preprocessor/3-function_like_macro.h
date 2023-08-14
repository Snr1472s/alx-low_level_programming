#ifndef _MACRO_H_
#define _MACRO_H_
#include <stdio.h>
#include <stdlib.h>

/**
 * file -  3-function_like_macro.h
 * Desc: computes the absolute value of a number
 * @x: x parameter
 */

#define ABS(x) ((x) < (0) ? (-1) * (x) : (x))

#endif
