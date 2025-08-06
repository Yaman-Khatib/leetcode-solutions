// leetcode examples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
class Solution {
public:
    static int romanToInt(string s) {
       /* map<char, int> romanMap = {
           {'I',1},
           {'V',5},
           {'X',10},
           {'L',50},
           {'C',100},
           {'D',500},
           {'M',1000},
        };*/
        //The unordered_map depends on hash table (it has time complexity O(1) unlike map which have O(logn)
        unordered_map<char, int> romanMap = {
   {'I',1}, {'V',5}, {'X',10}, {'L',50},
   {'C',100}, {'D',500}, {'M',1000}
        };
        //VIXVII
       
        int total = 0;
        int maxSeen;
        int length = s.length();

        if (length == 0)
            return 0;

        maxSeen = romanMap[ s[length - 1]]; //initially it is equal to last value
        for (int i = length - 1; i >= 0; i--)
        {
            int value = romanMap[s[i]];
            if (value >= maxSeen)
            {
                total += value;
            maxSeen = value;
        }
            else 
                total -= value;

        }
        return total;
    }
};
int main()
{
    //4 + 90 + 900 + 1000 = 1994
    std::cout << Solution().romanToInt("MCMXCIV") << " | MCMXCIV\n";
    /*std::cout << Solution().romanToInt("IV") << " | IV\n";
    std::cout << Solution().romanToInt("XI") << " | XI\n";
    std::cout << Solution().romanToInt("IIX")<< " | IIX\n";*/
    
}
 
