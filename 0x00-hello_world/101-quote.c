#include <unistd.h>
/**
 * main - prints to string
 * Description: Prints without puts and printf
 * Returns: 1 (Failure)
 */
int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, msg, 59);
return (1);
}
