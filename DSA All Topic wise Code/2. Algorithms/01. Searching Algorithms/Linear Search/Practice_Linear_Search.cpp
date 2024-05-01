//https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int N, int X)
    {
        
        for(int i =0;i<N;i++)
        {
            if(arr[i] == X)
            return i;
        }
        return -1;
        
    }

};
