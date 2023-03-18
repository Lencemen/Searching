int binarysearch(int arr[],int beg,int end,int item){
    int mid;
    while(beg<=end){
        mid=(beg+end)/2;
        if(item==arr[mid]){
            return mid;
        }
        if(item>arr[mid]){
            beg=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
