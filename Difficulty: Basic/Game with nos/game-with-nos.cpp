int* game_with_number(int arr[], int n) {
    int *res;
    res=new int[n];
    for(int i=0;i<n-1;i++){
        res[i]=(arr[i]^arr[i+1]);
    }
    res[n-1]=arr[n-1];
    return res;
}
