#include<windows.h>
#include<stdio.h>
int main()
{
	HINSTANCE LibHandle;
	char dllbuf[11]="user32.dll";
	 
	LibHandle=LoadLibrary(dllbuf);
    __asm{
	sub sp,0x400
	xor ebx,ebx
	push 0x74736577
	push 0x6c696166
	mov eax,esp
	push ebx
	push eax
	bush eax
	push ebx
	mov eax,0x758BEA99
	call eax
	
	
	}
	return 0;
	
 } 
