vector<int> nums;
    Solution(ListNode* head) {
        while(head!=NULL){
            nums.push_back(head->val);
            head=head->next;
        }
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        return nums[rand()%nums.size()];
    }
