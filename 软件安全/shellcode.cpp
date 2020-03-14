#include<windows.h>

int main()
{
	HINSTANCE LibHandle;
	char dllbuf[11]="user32.dll";
	 
	LibHandle=LoadLibrary(dllbuf);
	__asm("sub %sp,$0x400");
	__asm("xor %ebx,%ebx");
	__asm("push %ebx");
	__asm("push $0x74736577");
    __asm("push $0x6c696166");
    __asm("mov %esp,%eax");
	__asm("push %ebx");
    __asm("push %eax");
    __asm("push %ebx");
    __asm("mov 0x76617E90,%eax");
    __asm("call %eax");	
	
	return 0;
	
 } 
