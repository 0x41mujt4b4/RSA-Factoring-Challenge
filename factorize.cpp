#include <cstdlib>
#include <cstdint>

/**
 * factorize - find factor of number
 * @buffer: pointer to the address of the number
 *
 * Return: int
 */
int factorize(char *buffer)
{
    long long unsigned int n;
    long long unsigned int i;

    n = std::atoi(buffer);

    if (n % 2 == 0)
        return 2;
    i = 3;
    while (i * i <= n)
    {
        if (n % i == 0)
            return i;
        i = i + 2;
    }
    return n;
}
