#include "file.h"
#include "assert.h"
#include "errno.h"

int main(int argc, char *argv[])
{
	char buf[50];
	assert(chdir("./tmp/chdir-badperm")==-EACCES);
	read(0, (char*) &buf, 1);
	assert(chdir("..")==0);
	read(0, (char*) &buf, 1);
	assert(chdir("/")==0);
	assert(argc >= 2);
	assert(chdir(argv[1])==-ENOENT);
	while (1) {}
	return 0;
}
