#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    int n;
    while (T) {
        scanf("%d", &n);
        if (n <= 10)
            printf("0 %d\n", n);
        else {
            printf("%d 10\n", n-10);
        }
        T--;
    }

	return 0;
}

