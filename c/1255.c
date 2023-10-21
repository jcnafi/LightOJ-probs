// Didin't work! :(
#include <stdio.h>
#include <string.h>

int search(char A[], char B[])
{
    int count = 0;
    int lenB = strlen(B);
    int diff = strlen(A) - lenB;

    char temp[lenB+1];
    for (int i = 0; i <= diff; i++) {
        for (int j = 0; j < lenB; j++) {
            temp[j] = A[i+j];
        }
        temp[lenB] = '\0';
        if (strcmp(temp, B) == 0) {
            count++;
        }
    }

    return count;
}

int main()
{
    int T, times;
    scanf("%d", &T);

    char A[1000001], B[1000001];
    for (int i = 1; i <= T; i++) {
        scanf("%s", A);
        scanf("%s", B);
        times = search(A, B);
        printf("Case %d: %d\n", i, times);
    }

	return 0;
}

