#include<windows.h>
#include<stdio.h>
#define DLL_NAME"user32.dll"
int main()
{
	BYTE* ptr;
	int  position,address;
	HINSTANCE handle;
	BOOL done_flag = FALSE;
	
	handle = LoadLibrary(DLL_NAME);
	if(!handle)
	{
		printf("load dll error");
		exit(0);
		
	}
	ptr = (BYTE*)handle;
	for(position = 0;!done_flag;position++)
	{
		
		try
		{
			if(ptr[position] == 0xFF &&ptr[position+1]==0xE4)
			{
				address = (int)ptr + position;
				printf("at 0x%x\n",address); 
				
			}
			
			
		}
		catch(...)
		{
				address = (int)ptr + position;
					printf("at 0x%x\n",address); 
					done_flag = true;
			
		}
		
	}
	return 0;
	
	
}
