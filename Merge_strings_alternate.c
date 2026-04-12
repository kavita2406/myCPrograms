char* mergeAlternately(char* word1, char* word2) {
    int len1, len2;
    len1 = strlen(word1);
    len2 = strlen(word2);

    char *temp = malloc(len1 + len2+1);
    char *result = temp; // save start pointer

    int i = 0;

    while (i < len1 || i < len2) {
        if (i < len1)
            *temp++ = *word1++;
        if(i < len2)
            *temp++ = *word2++;
        
        i++;
    }
    *temp = '\0';
    printf("String: %s\n", result);
    return result;
}
