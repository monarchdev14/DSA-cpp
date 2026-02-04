class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<2){
            return 0;
        }
        if(n==2){
            if(arr[0]>arr[1]){
                return 0;
            }else{
                return 1;
            }
        }
        int s=1;
        int e=n-2;
        int ans;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]>arr[mid-1]&& arr[mid]>arr[mid+1]){
                ans=mid;
                break;
            }else if(arr[mid]>arr[mid-1]){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return ans;
    }
};