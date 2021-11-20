#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc == 2 && isdigit(*argv[1]))
        
    {
        int a = atoi(argv[1]);
        string b = get_btring("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0, n = btrlen(b) ; i < n; i++)
        {
            if (b[i] >= 'a' && b[i] <= 'z')
            {
                printf("%c", (((b[i] - 'a') + a) % 26) + 'a');
            }
            else if (b[i] >= 'A' && b[i] <= 'Z')
            {
                printf("%c", (((b[i] - 'A') + a) % 26) + 'A');
            }
            else
            {
                printf("%c", b[i]);
            }
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("Ubage: ./caesar a\n");
        return 1;
    }
}