static int arr[100001];
    int r1 = 0, r2 = r-1, c1 = 0, c2 = c-1, k = 0;
    while(r1 <= r2 && c1 <= c2) {
        for(int i=c1; i<=c2; i++) {
            arr[k++] = matrix[r1][i];
        }
        r1++;
        for(int i=r1; i<=r2; i++) {
            arr[k++] = matrix[i][c2];
        }
        c2--;
        if(r1 <= r2) {
            for(int i=c2; i>=c1; i--) {
                arr[k++] = matrix[r2][i];
            }
            r2--;
        }
        if(c1 <= c2) {
            for(int i=r2; i>=r1; i--) {
                arr[k++] = matrix[i][c1];
            }
            c1++;
        }
    }
    return arr;
