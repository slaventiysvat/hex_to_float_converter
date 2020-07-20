#include "float_converter.h"

float hex_to_float(int num) {

    float ui;
    uint32_t val = (uint32_t)num;
    memcpy(&ui, &val, sizeof(ui));
    return ui;
}

int float_to_hex(float num) {
    unsigned int ui;
    memcpy(&ui, &num, sizeof(ui));
    return ui;
}

void float_representation(float_num float_num) {

    int s = (float_num.dw >> 31) ? 1 : 0;                                               /* Знак */
    int e = (float_num.dw >> 24) & 0xFF;                                                /* Порядок */
    int m =  float_num.dw & 0x00FFFFFF;                                                 /* Мантисса */

    printf("The float_32 =  0x%X value has such parameters \n", float_num.dw);
    printf("The float_32 =    %10.15g value has such parameters \n", float_num.fl);
    printf(" sign (1 bit) | exponent (8 bits) | fraction (23 bits) \n");
    printf("=======================In decimal===================== \n");
    printf(" sign  = %d   | exponent  =  %d  | fraction  =  %d \n ",s,e,m);
    printf("=======================In hex========================= \n");
    printf(" sign  = 0x%X   | exponent  =  0x%02X  | fraction  =  0x%04X \n ", s, e, m);

}