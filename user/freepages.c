#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

void
test_freepages(void)
{
    printf("free pages: %d\n", freepages());
    int *p = malloc(1024);
    p[0] = 1;
    printf("after alloc 1KB, free pages: %d\n", freepages());
}

int
main(void)
{
    test_freepages();
    return 0;
}