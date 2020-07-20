#ifndef FLOAT_CONVERTER
#define FLOAT_CONVERTER
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef unsigned int uint32_t;

typedef struct {
    float    fl;
    uint32_t dw;
} float_num;

float hex_to_float(int num);
int float_to_hex(float num);
void float_representation(float_num num);

#endif/*FLOAT_CONVERTER*/
