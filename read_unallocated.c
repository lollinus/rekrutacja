/* Example program "How not to program" in C.
 * This example shows how to read from unallocated memory.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* declare pointer of char type */
    char* p;
    /* read from unallocated memory */
    printf("read unallocated memory region(%s)\n", p);
    exit(0);
}
