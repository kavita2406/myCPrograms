/* C program to check the endianness of the machine */

#include <stdio.h>

int main()
{
  unsigned int num = 1;
  char *ch = (char *)&num;
  
  if(*ch == 1)
    printf("Machine is little-endian");
  else
    printf("Machine is big-endian");
}
