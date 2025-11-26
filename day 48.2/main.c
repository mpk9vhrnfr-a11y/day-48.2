#include <stdio.h>

void reverse(char s[], int start, int end) {
    while(start < end) {
        char t = s[start];
        s[start] = s[end];
        s[end] = t;
        start++;
        end--;
    }
}

int main(void) {
    char str[200];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while(str[i] != '\0') {
        if(str[i] == ' ') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
        i++;
    }

    reverse(str, start, i - 1);

    printf("Reversed words: %s\n", str);

    return 0;
}
