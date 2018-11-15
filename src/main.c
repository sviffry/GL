#include "my_header.h"

int main(void)

{
    unsigned long long S1=1;
    unsigned long n=3;

    while(n<9876)
    {
        S1=S1*n;
        n=n+3;
    }
    return 0;
}
