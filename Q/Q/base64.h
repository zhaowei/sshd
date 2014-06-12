#ifndef _BASE64H
#define _BASE64H


int decode_base64(unsigned char *dest, const char *src) ;
void encode_base64(char *out, unsigned char *src, int size);


#endif
