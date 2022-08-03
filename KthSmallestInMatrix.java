// [Medium]
class Solution {
    // bruteforce but its time complexity is smaller than O(n^2)
    public int kthSmallest(int[][] matrix, int k) {
        int n = matrix.length;        // getting the x's dimension
        int m = matrix[0].length;     // getting the y's dimension
        int[] arr = new int[n * m];
        int ki=0;
        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                arr[ki++] = matrix[i][j];
            }
        }
        Arrays.sort(arr);
        return arr[k-1];
    }
}
