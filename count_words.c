//Count number of words in a sentence

#include <stdio.h>

int main() {
    char *s ="This is a cat billi en ut we wer";
    int count = 0;
    for (int i =0; s[i]!='\0';i++){
        if(s[i] == ' ' || s[i+1] == '\0')
            count++;
    }
    printf("Number of words in a string = %d\n", count);

    return 0;
}
