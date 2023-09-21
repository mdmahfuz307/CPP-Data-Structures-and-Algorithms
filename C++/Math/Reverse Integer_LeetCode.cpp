class Solution {
public:
    int reverse(int x) {
        int revNum = 0;
    while(x!=0){
        int id = x % 10;
        revNum = (revNum * 10) + id;
        x = x / 10;
    }
    return revNum;
    }
};
