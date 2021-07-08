long long minCost(long long arr[], long long n) {
    long long count = 0;
    priority_queue<long long,vector<long long>,greater<long long>> pq(arr,arr+n);
    while(pq.size() != 1){
        long long a = pq.top();
        pq.pop();
        long long b = pq.top();
        pq.pop();
        count += (a+b);
        pq.push(a+b);
    }
    return count;
}
