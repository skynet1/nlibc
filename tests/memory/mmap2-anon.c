#include "memory.h"
#include "assert.h"
#include "string.h"
#include "file.h"
#include "errno.h"
#include "stddef.h"

int main()
{
	char buf[4];
	read(0, &buf, 1);
	int x=(int) mmap2(NULL, 100, 0, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
	read(0, &buf, 1);
	return 0;
}
