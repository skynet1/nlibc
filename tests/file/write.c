#include "io.h"

int main()
{
	char buf[]={"hello\n"};
	write(1, buf, 6);
	return 0;
}
