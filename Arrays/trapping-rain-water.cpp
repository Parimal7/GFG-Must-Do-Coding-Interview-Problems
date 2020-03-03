int trappingWater(int arr[], int n) {
        int ans = 0;
	    int maxLeft[n];
	    int maxRight[n];
	    int maxL = 0, maxR = 0;
	    for(int i = 0; i < n; ++i) {
		    maxLeft[i] = maxL;
		    maxL = max(maxL, arr[i]);
	    }
	    for(int i = n - 1; i >= 0; --i) {
		    maxRight[i] = maxR;
		    maxR = max(maxR, arr[i]);
	    }
	    for(int i = 0; i < n; ++i) {
		    int limiter = min(maxLeft[i], maxRight[i]);
		    if(arr[i] < limiter) {
			    ans += limiter - arr[i];
		    }
	    }
	    return ans;
}
