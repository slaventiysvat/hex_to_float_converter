
#include "float_converter.h"

int StrToHex(char* s);
void hex_sym_to_dec(char sym,char* buff);
int main(int argc, char* argv[]) {

    char* input_symbol = argv[1];
    char symb_arr[3] = { 0 };
    symb_arr[0] = input_symbol[0];
    symb_arr[1] = input_symbol[1];
    symb_arr[2] = input_symbol[2];
    float_num float_num;
    float_num.dw = 0;
    float_num.dw = 0.0;
    char h_arr[3] = "-h";
    char f_arr[3] = "-f";
    char* raw_val = argv[2];
    char num_arr[15] = { 0 };
    char num_arr_f[100] = { 0 };
    if (strcmp(symb_arr, h_arr) == 0) {

      
        int k = 0;
        while (raw_val[k] != '\0') {

            num_arr[k] = raw_val[k];
            k++;
        }
        num_arr[k] = raw_val[k];
        int num = StrToHex(num_arr);
        float_num.dw = num;
        float_num.fl = hex_to_float(float_num.dw);
      
    }else  if (strcmp(symb_arr, f_arr) == 0) {

        int k = 0;
        while (raw_val[k] != '\0') {

            num_arr_f[k] = raw_val[k];
            k++;
        }
        num_arr_f[k] = raw_val[k];
        float f2 = strtof(num_arr_f, NULL);
        float_num.fl = f2;
        float_num.dw = float_to_hex(float_num.fl);

    } else {
    
        printf("Do input please correct \n");
        printf("-h hex   to float \n");
        printf("-f float to hex  \n");
    }

     float_representation(float_num);

  
    return 0;
}

int StrToHex(char* s)
{
    int temp = 0; // число
    int i = 0;
    int sign = 0; // знак числа 0- положительное, 1 — отрицательное
    s = s + 2;
    int num = 0;
    int shift = 28;
    while (s[i] != '\0')
    {
        char buff[3]; //массив который будет хранить один символ
        buff[1] = '\0';//символ конца строки
        buff[2] = '\0';//символ конца строки
        hex_sym_to_dec(s[i],buff);
        //temp = strtol(buff, (char**)NULL, 10);
        temp = atoi(buff);
        num += temp << shift;
        shift = shift - 4;
        i++;
    }
    return(num);
}


void hex_sym_to_dec (char sym, char* buff) {

    switch (sym)
    {
       
    case 'A':
        buff[0] = '1';
        buff[1] = '0';
        buff[2] = '\0';
        break;
    case 'a':
        buff[0] = '1';
        buff[1] = '0';
        buff[2] = '\0';
        break;
    case 'B':
        buff[0] = '1';
        buff[1] = '1';
        buff[2] = '\0';
        break;
    case 'b':
        buff[0] = '1';
        buff[1] = '1';
        buff[2] = '\0';
        break;
    case 'C':
        buff[0] = '1';
        buff[1] = '2';
        buff[2] = '\0';
        break;
    case 'c':
        buff[0] = '1';
        buff[1] = '2';
        buff[2] = '\0';
        break;
    case 'D':
        buff[0] = '1';
        buff[1] = '3';
        buff[2] = '\0';
        break;
    case 'd':
        buff[0] = '1';
        buff[1] = '3';
        buff[2] = '\0';
        break;
    case 'E':
        buff[0] = '1';
        buff[1] = '4';
        buff[2] = '\0';
        break;
    case 'e':
        buff[0] = '1';
        buff[1] = '4';
        buff[2] = '\0';
        break;
    case 'F':
        buff[0] = '1';
        buff[1] = '5';
        buff[2] = '\0';
        break;
    case 'f':
        buff[0] = '1';
        buff[1] = '5';
        buff[2] = '\0';
        break;
    default:
        buff[0] = sym;
        buff[1] = '\0';
        buff[2] = '\0';
    }


}