#include "my_lib.h"

   
    
int main(int argc, char const *argv[])
{
    int i;

    i = 1;
    while (i < argc)
    {
        __MKDIR(argv[i],argc);
        i++;
    }
    
   
}
