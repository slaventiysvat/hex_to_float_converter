# hex to float converter
Here you can transform hex representation of float to 
scientific notation or float number to hexadecimal representation in 32 bits

How to use programm.
Plese attach the path to your .exe file
Use 2 different keys
-f the floating point number in on input
Example:
-f -123.25

-h the hexadecimal representation of 32 bits number with floating point
Example
-h 0x1234578

The call of programm looks like:

/your/path/float_converter.exe -f -123.25

the output looks like:
The float_32 =  0xC2F68000 value has such parameters
The float_32 =       -123.25 value has such parameters
 sign (1 bit) | exponent (8 bits) | fraction (23 bits)
=======================In decimal=====================
 sign  = 1   | exponent  =  194  | fraction  =  16154624
 =======================In hex=========================
 sign  = 0x1   | exponent  =  0xC2  | fraction  =  0xF68000
