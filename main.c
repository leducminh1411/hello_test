#include <stdio.h>

void hello ();

int main()
{
    int a = 3, b = 4;
    int sum;
    
    hello();

    sum = a + b;
    printf ("tong %d và %d la %d",a, b, sum);

    return 0;
}

void hello()
{

    printf ( "hello\n");

}
