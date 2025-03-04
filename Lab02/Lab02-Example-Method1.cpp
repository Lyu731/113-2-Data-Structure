//#Method1
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count[101] = {0}; 
        int n = num.size();  //陣列大小
        vector<int> result(n);//設定一個大小為n的陣列

        //count=nums，for執行nums次
        for (int num : nums) {
            count[num]++;//陣列若出現p次數字"Q"，就在count[Q]的位置加p
                         //等於計算數字"Q"共出現幾次
        }

        //count=1，for執行101次
        for (int i = 1; i < 101; i++) {
            count[i] += count[i - 1];//除了出現的"Q"以外位置的value接為0
                                     //等於把比"Q"小的a,b,c出現的次數加起來就等於有幾個小於"Q"的數字
        }

        //count=nums，for執行nums次
        for (int i = 0; i < n; i++) {
            result[i] = (nums[i] == 0) ? 0 : count[nums[i] - 1];
            // 如果nums[i] == 0，代表沒有比它更小的數字，就填 0
            // 相反，小於 nums[i] 的數量就是 count[nums[i] - 1]
        }
        return result;
    }
};
