//!
//! \file   hello_world.c
//! \author Karol Barski <lollinus@gmail.com>
//! \date   Sun Mar 11 20:49:59 2012
//!
//! \brief  simple C program
//!

#include <stdio.h>

//! Test program. Program prints all it's arguments
//!
//! \param argc argument count
//! \param argv argument values passed to program
//!
//! \return 0 if program executed properly in other case error code is returned.
//!
//! \todo list of error codes
//!
int main(int argc, char *argv[])
{
    do
    {
        printf ("argument count: (%d), value: (%s)\n", argc, argv[--argc]);
    } while (argc);

    return 0;
}
