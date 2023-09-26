#include <stdio.h>
#define MAX_PRIMES 100

int isprime(int n);
int get_primes(int n1, int n2, int primes[]);

int main()
{
    // Write C code here
    int i, num1, num2;
    int primes[MAX_PRIMES] = {0};
    int prime_count;

    printf("Enter two numbers with space between them: ");
    scanf("%d%d", &num1, &num2);

    prime_count = get_primes(num1, num2, primes);

    if (prime_count == 0)
    {
        printf("No primes between %d and %d", num1, num2);
    }
    else if (prime_count > MAX_PRIMES)
    {
        printf("Too many prime numbers to fit in the array");
    }
    else
    {
        for (i = 0; i < prime_count; i++)
        {
            printf("%d ", primes[i]);
        }
    }

    return 0;
}

int get_primes(int n1, int n2, int primes[])
{
    int i, counter = 0;
    for (i = n1; i <= n2; i++)
    {
        if (isprime(i))
        {
            if (counter >= MAX_PRIMES)
            {
                printf("Too many prime numbers to fit in the array");
                break;
            }
            primes[counter++] = i;
        }
    }
    return counter;
}

int isprime(int n)
{
    int i;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}