class Solution {
public:
    int findLucky(vector<int>& arr) {
        int num[501] = {0};//設定一個有上限的陣列

        for (int j : arr) {//count=n(陣列arr的大小)
            num[j]++;//陣列若出現p次數字"Q"，就在num[Q]的位置加p
                     //等於計算數字"Q"共出現幾次
        }
        for (int i = 500; i > 0; i--) {//count=500
            //由大到小檢查
            if (i == num[i])//如果出現次數等於本身數字則回傳
                return i;
        }
        return -1;
    }
};
