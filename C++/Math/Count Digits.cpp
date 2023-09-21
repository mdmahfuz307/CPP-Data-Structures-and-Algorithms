// https://practice.geeksforgeeks.org/problems/count-digits5716/1?utm_source=youtube&utm_medium=courseteam_school_desc&utm_campaign=practice_problem


class Solution{
public:
    int evenlyDivides(int N){
        int tmp = N;
        int count =0;
        while(N>0){
            
            int lastdigit = N % 10;
            N = N / 10;
            if(lastdigit != 0 && tmp%lastdigit==0)
            count++;
            
        }
        return count;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
