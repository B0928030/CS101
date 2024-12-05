#include <stdio.h>

int main()
{
    int i = 12345;
    int single,thousand;

    single = i % 10;
    thousand = (i % 10000)/1000;
    i = i - single - thousand*1000;
    i = i + thousand + single*1000;
    printf("%d",i);

    return 0;
}
