#include <stdio.h>
void print (int a);

int main()
{
    int N;
    scanf("%d", &N);
    print(N);
}

void print (int a)
{
    if(a == 1)
        printf("%d\n" , a);
    else
    {
        print(a-1);
        printf("%d\n", a);
    }
}