/* Example program "How not to program" in C.
 * This example shows how to write to unallocated memory.
 *
 */
#include <stdlib.h>
#include <string.h>

int main(void)
{
    /* declare pointer of char type */
    char* p;
    /* write to unallocated memory region */
    memset(p, 'C', 40);
    exit(0);
}
