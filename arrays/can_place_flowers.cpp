/*
UNDERSTAND: no two plants can be next to each other. The question wants to know when adding additional plants if it can be done while maintaining the stipulations.

Assumptions: 
there would not be an empty array given constraints 1 <= flowerbed.length <= 2 * 104
no input will consist of adjacent flowers

Input: integer array, integer n with additional flowers
Output: boolean

Happy case:
Input: flowerbed = [1,0,0,0,1], n = 1
Output: true

Edge cases: 
n = 0

PSEUDOCODE:
start 
accept input
start loop 
if i = 1
    then a flower can not be placed at i++
else if i = 0
    place flower at i++ 
    if flower right = 1
    else 
        n - 1
end loop
if n = 0 
    then return true
else
    return false
end

// pseudocode 2
if i=0 (first index)
    check right 
if i= flowerbed.size()-1 (last index)
    check left
else check right and left
    if i-1 && i+1 == 0
        flowerbed[i]=i
        n=n-1


*/
#include <vector>

class Solution {
public:
    bool checkRight(vector<int>&flowerbed, int i, int n){
        if (flowerbed[i+1]==0 && n>0){
            return true;
        }
    return false;
    }

    bool checkLeft(vector<int>&flowerbed, int i, int n){
        if (flowerbed[i-1]==0 && n>0){
            return true;
        }
    return false;
    }

    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool plant;
        for (int i = 0; i < flowerbed.size(); i++){
            if(i==0){
                if(checkRight(flowerbed, i,n) && flowerbed[i] !=1){
                    flowerbed[i]=1;
                    n=n-1;
                }
            }
            else if(i==flowerbed.size()-1){
                if(checkLeft(flowerbed,i,n) && flowerbed[i]!=1){
                    flowerbed[i]=1;
                    n=n-1;
                }
            }
            else{
                if(checkRight(flowerbed, i, n)&&checkLeft(flowerbed, i, n) && flowerbed[i]!=1){
                    flowerbed[i]=1;
                    n=n-1;
                }

            }
        }
        if (n==0){
            plant = true;
        }else
            plant = false;
    return plant;
    }
};
