#include <stdio.h>

int sum(int a, int b) {
    return a+b;
}

int main()
{
    int T;
    scanf("%d", &T);

    int a, b;
    for (int i = 1; i <= T; i++) {
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", i, sum(a, b));
    }

	return 0;
}

