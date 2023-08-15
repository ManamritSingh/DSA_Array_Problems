//{ Driver Code Starts
#include <bits/stdc++.h>


using namespace std;




// } Driver Code Ends

class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        
        // Complete the function
        
        int cnt = 0, s = 0, e = n-1;
        while(s < e){
            if(arr[s] + arr[e] == sum) s++, e--, cnt++;
            else if(arr[s] + arr[e] < sum) s++;
            else e--;
        }
        if(cnt == 0) return -1;
        return cnt;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int sum;
        cin>>sum;
        Solution obj;
        cout << obj.Countpair(arr, n, sum) << endl;
        
    }
	return 0;
}

// } Driver Code Ends