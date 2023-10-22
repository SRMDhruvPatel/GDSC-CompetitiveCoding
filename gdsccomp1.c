#include <stdio.h>
#include <string.h>

int main() {
    char input_s[104];
    printf("Enter a string: ");
    fgets(input_s, sizeof(input_s), stdin);

    int length = strlen(input_s);
    if (input_s[length-1] == '\n') {
        input_s[length-1] = '\0';
        length--;
    }

    char *LW = NULL;
    int LWL = 0;

    char *token = strtok(input_s, " ");
    while (token != NULL) {
        LW = token;
        LWL = strlen(token);
        token = strtok(NULL, " ");
    }
    printf("%d\n", LWL);
    printf("Explanation: The last word is \"%s\" with length %d\n", LW, LWL);

    return 0;
}
