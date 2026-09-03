/*
Problem: Add Digits
Platform: LeetCode
Topic: Basic Math
Difficulty: Easy

Time Complexity: O(log(n))
*/
#include <iostream>
using namespace std;
int add(int num)
{
    int s=0,j;
        while(num>9)
        {
            s=0;
            while(num>0)
            {
            j=num%10;
            s+=j;
            num=num/10;
            }
              num=s;
        }
    return num;
}
int main()
{
    int n;
    cout <<" enter a number\n";
    cin >> n;
    cout <<"the digit is  "<< add(n);
    return 0;
}
