/* Calculate the number of bottles Leetcode Problem solution */
int numWaterBottles(int numBottles, int numExchange) {
    int ans = numBottles;
        while(numBottles >= numExchange){
            numBottles = numBottles - numExchange + 1;
            ans += 1;
        }
    return ans;
}
int main()
{
int num_bottles = 9;
int num_exchanges = 3;

int total_bottles_drinkable = numWaterBottles(num_bottles, num_exchanges);
printf("Number of bottles drinkable = %d\n", total_bottles_drinkable);

return 0;
}
