/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

/*class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) 
    {
        int i;
        for(i=0;i<array.length();i++)
        {
            if([i]arr[i+1]>arr[i])
            {
                if (i==target)
                    return i;
                else 
                    return -1;
            }
        }
        return i;
    }
};
*/
int FindTop(MountainArray &m){
  int l = 0, r = m.length() - 1;
  while(r - l != 2){
    int mid = (r+l); mid = mid>>1;
    if(m.get(mid+1) > m.get(mid)) l = mid;
    else r = mid + 1;
  }
  return l+1;
}

int binarySearchUp(MountainArray &arr, int l, int r, int x){ 
  while (l <= r) { 
    int m = (l + r); m = m>>1; 
   
    if (arr.get(m) == x) return m; 
    if (arr.get(m) < x) l = m + 1; 
      else r = m - 1; 
    } 
    return -1; 
}

int binarySearchDown(MountainArray &arr, int l, int r, int x){ 
  while (l <= r) { 
    int m = (l + r); m = m>>1; 
   
    if (arr.get(m) == x) return m; 
    if (arr.get(m) > x) l = m + 1; 
      else r = m - 1; 
    } 
    return -1; 
} 

class Solution {
public:
  int findInMountainArray(int target, MountainArray &c) {
    int idx = FindTop(c), answeridx = -1;
    
    answeridx = binarySearchUp(c, 0, idx , target);
    if(answeridx == -1) answeridx = binarySearchDown(c, idx ,c.length()- 1, target);
    
    return answeridx;
  }
};