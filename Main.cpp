#include<Windows.h>

int main()
	{
		
	byte shellcode[] = { NULL };
	void *exec = VirtualAlloc(0, sizeof shellcode, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	memcpy(exec, shellcode, sizeof shellcode);
	((void(*)())exec)();

	return 0;
	}
