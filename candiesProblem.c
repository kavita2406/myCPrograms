/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int i;
    int maxnum = candies[0];
    bool* result = malloc(candiesSize * sizeof(bool));

    for (i = 1; i < candiesSize; i++){
        if(maxnum < candies[i])
            maxnum = candies[i];
    }

    for (i = 0; i < candiesSize; i++)
        result[i] = (candies[i] + extraCandies >= maxnum);

    *returnSize = candiesSize;
    return result;
}
