
//on遍历
int peakIndexInMountainArray(int* A, int ASize){

}

//https://leetcode.com/problems/peak-index-in-a-mountain-array/
//ologn , 从中间开始，三种情况，在左边山中间，在山顶，在右边山中间
//如果在山顶，那往左和往右移都是减小
//如果在左边（左移减小，右移增大），那说明山顶在右边，在[mid+1+r/2,和r]继续找
//如果在右边，说明山顶在左边，在[0,l+mid-1/2]继续找
