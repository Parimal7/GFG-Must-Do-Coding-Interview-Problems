int maxLen(int arr[], int n) {
    int maxLength = 0;
    unordered_map<int, int> umap;
    for(int i = 0; i < n; ++i) {
        if(arr[i] == 0) arr[i] = -1;
    }
    umap[0] = 0;
    int sum = 0;
    for(int i = 0; i < n; ++i) {
        sum += arr[i];
        if (umap.find(sum) == umap.end()) {
            umap[sum] = i + 1;
        }
        else {
            maxLength = max(maxLength, i - umap[sum]);
        }
    }
    if(maxLength == 0) return 0;
    else return maxLength + 1;
   
}
