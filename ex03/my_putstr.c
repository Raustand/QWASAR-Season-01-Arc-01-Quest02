#include <unistd.h>

static int my_putchar(char c)
{
    return write(1, &c, 1);
}

void my_putstr(char* param_1)
{
    int i = 0;

    if (param_1 == NULL) {
        return;
    }
    while (param_1[i] != '\0') {
        my_putchar(param_1[i]);
        i++;
    }
}