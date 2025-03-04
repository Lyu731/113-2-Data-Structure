class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();//n=陣列大小
        vector<int> result(n);//設定一個大小為n的陣列
        result[0] = nums[0];//初始化
        for (int i = 1; i < n; i++) {//count=n-1，for跑n-1次
            result[i] = result[i - 1] + nums[i];//目前數字+前一個累加結果
        }
        return result;//回傳陣列
    }
};
