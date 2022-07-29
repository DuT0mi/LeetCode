// [Hard]
void bubbleSort(int *pArray, int pSize){
    for(int i = 0; i < pSize - 1; i++){
        for(int j = 0; j < pSize -1 -i; j++){
            if(pArray[j]>pArray[j + 1]){
                int temp = pArray[j];
                pArray[j] = pArray[j + 1];
                pArray[j + 1] = temp;
            }
        }
    }
}
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    if(nums1Size == 0 && nums2Size == 0) return 0;
       int * mergedArray = (int*)malloc((nums1Size + nums2Size)* sizeof(int));
            // Fill
                int i,j;
                for(i = 0; i < nums1Size; i++)
                    mergedArray[i] = nums1[i];
                for( j = 0; j < nums2Size; j++){
                    mergedArray[i] = nums2[j];
                    i++;
                }
            // Sort
            bubbleSort(mergedArray,(nums1Size + nums2Size));
            // At this point the both way are similar
            //if it's even
            if(((nums1Size + nums2Size)%2) == 0){
                double median =  ( (double)mergedArray[(nums1Size + nums2Size)/2] + (double)mergedArray[(nums1Size + nums2Size)/2 - 1]);
                free(mergedArray);
                median /= 2;
                return median;
            }
            
            // Get the median
            double median = mergedArray[((nums1Size + nums2Size)/2)];
            free(mergedArray);
            return median;
}
