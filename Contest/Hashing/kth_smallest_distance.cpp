int kthDiff(int a[], int n, int k) 
{ 
   //Your code here
    sort(a,a+n);
    vector<int>nums(a,a+n);
    int l = nums[1] - nums[0];
    for(int i = 2; i < n; i++){
        if(nums[i] - nums[i-1] < l){
            l = nums[i] - nums[i-1];
        } 
    }
    int r = nums[n-1] - nums[0];
    while(l<r){
        int mid = l + (r - l)/2;
        int count = 0;
        for(int i = 0; i < n; i++){
            int pos = upper_bound(nums.begin(), nums.end(), nums[i] + mid) - nums.begin();
            count += pos - i - 1;
        }
        if(count < k){
            l = mid+1;
        }
        else
            r = mid;
    }
    return l;
  
  
  
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<kthDiff(arr,n,k)<<endl;
    }
}
