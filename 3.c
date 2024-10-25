#include <stdio.h>
#include <string.h>

// Function to find the occurrences of a pattern in the string
void findPattern(char *s, char *pattern) {
    int n = strlen(s);
    int m = strlen(pattern);
    int found = 0;

    for (int i = 0; i <= n - m; i++) {
        if (strncmp(&s[i], pattern, m) == 0) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("-1");
    }
    printf("\n");
}

int main() {
    int n;
    char s[1000];
    
    // Read the length of the string and the string itself
    scanf("%d", &n);
    scanf("%s", s);

    // Read and process each pattern until EOF
    char pattern[100];
    while (scanf("%s", pattern) != EOF) {
        findPattern(s, pattern);
    }

    return 0;
}
