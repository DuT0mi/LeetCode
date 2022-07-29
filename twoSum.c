// [Easy]
// BruteFroce version


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
        int* twoSum(int* nums, int numsSize, int target, int* returnSize){
                            
    *returnSize = 2 ;
    int * rArray = (int*)malloc(2 *sizeof(int));
    for(int i = 0; i < numsSize ; i++){
        for(int j = i + 1; j < numsSize ; j++){
            if((nums[i] + nums[j]) == target){
                rArray[0] = j;
                rArray[1] = i;
            }
        }
    }
            return rArray;
}
//Fancy Java
import java.util.HashMap;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> hashMap = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            if(!hashMap.containsKey(target - nums[i]))
                hashMap.put(nums[i], i);
             else 
                int[] result = {i, hashMap.get(target - nums[i]);
                return result;
            }
        }
    return null;
    }
}
