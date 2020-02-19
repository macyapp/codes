#include <stdio.h>
#include <iostream>

using namespace std;

// __FILE__ refers to the current file.
// So, it can be used by a program to print itself.

int main()
{
    FILE *fp = fopen(__FILE__, "r");
    char c = getc(fp);
    
    do
    {
        putchar(c);
        c = getc(fp);
    }while(c != EOF);
    
    fclose(fp);
    return 0;
}
