/* Example program "How not to program" in C.
 * This example shows how to write before allocated memory region
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int block_size=40;
    /* allocate 40 bytes of memory */
    char* p = (char*)malloc(block_size);
    /* initialize allocated memory */
    memset(p-2, 'C', block_size);
    /* read from memory before allocated region */
    printf("%s\n", p-100);
    free(p);
    exit(0);
}
