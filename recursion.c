#include <stdio.h>
void display(int n)
{ 
  static int sum = 0;
    if (n >= 1)
    {
        if (n % 2 == 0)
        {
            printf("%d ", n);
            sum = sum + n;
        }

        display(n - 1);
    }
    else
    {
        printf("\nSum = %d", sum);
    }
}

int main()
{
    display(40);

    return 0;
}
