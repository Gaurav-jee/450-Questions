#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    int start = 0;
    int end;
    int count = 0;
    char s[1000];
    char r[1000];

    printf("Enter a number!\n");
    scanf("%d", &t);
    while (t != 0)
    {
        printf("enter a string:\n");
        scanf("%s", s);

        while (s[count] != '\0')
        {
            count++;
        }
        printf("%d\n\n", count);

        end = count - 1;
        for (start = 0; start < count; ++start)
        {
            r[start] = s[end];
            --end;
        }

        r[start] = '\0';
        printf("%s\n", r);
        t--;
    }
}
