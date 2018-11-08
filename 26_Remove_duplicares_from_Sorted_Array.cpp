int removeDuplicates(vector<int>& nums) {
        set<int> set;
        for(auto num : nums){
            set.insert(num);
        }
        int i = 0;
        for(auto it : set)
            nums[i++] = it;
        int len = set.size();
        nums.resize(len);
        return len;
}

int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 1)
            return nums.size();
        int i = 0;
        for(int j = 1; j < nums.size(); j++){
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
}