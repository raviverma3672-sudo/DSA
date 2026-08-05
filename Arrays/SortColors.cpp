lass Solution {
public:
    void sortColors(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        int mid=0;
        while(mid<=end){
            if(arr[mid]==0){
                swap(arr[start],arr[mid]);
                start++;
                mid++;

            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid],arr[end]);
                end--;
            }
            
        }
    }
};