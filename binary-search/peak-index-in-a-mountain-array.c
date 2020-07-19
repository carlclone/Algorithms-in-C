
//ologn , 从中间开始，三种情况，在左边山中间，在山顶，在右边山中间
//如果在山顶，那往左和往右移都是减小
//如果在左边（左移减小，右移增大），那说明山顶在右边，在[mid+1+r/2,和r]继续找
//如果在右边，说明山顶在左边，在[0,l+mid-1/2]继续找

//边界情况讨论
// 左边越界 ,右边的值在减小，返回
// 右边越界 ， 左边的值减小，返回
// 左右都越界，直接返回 （题目>=3,没有这种case)
int peakIndexInMountainArray(int* A, int ASize){
    
    int l=0;
    int r=ASize-1;
    int mid;
    while (l<=r) {
        mid=(l+r)/2;
        int lp = mid-1;
        int rp = mid+1;
        if (mid==0 && A[mid+1]<A[mid]) {
            return mid;
        } 
        else if (mid==ASize-1 && A[mid-1]<A[mid]) {
            return mid;
        }
        else if (A[mid]>A[lp] && A[mid]>A[rp]) {
            return mid;
        }
        else if (A[mid]>A[lp] && A[mid]<A[rp]) {
            l = mid+1;
        }
        else if (A[mid]<A[lp] && A[mid]>A[rp]) {
            r = mid-1;
        }

        
    }
    return -1;
}

