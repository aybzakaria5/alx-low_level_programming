#include<unistd.h>
/**
 *main-a quote
 *
 *Return:Always 1
 */
int main(void)
{
char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, str, 59);
return (1);
}
