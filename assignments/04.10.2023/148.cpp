/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* temp=head;
        vector<int> v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        ListNode* ans=NULL;
        ListNode* temp1=ans;
        int n=v.size();
        for(int i=0;i<n;i++){
            ListNode* newNode= new ListNode(v[i]);
            if(ans==NULL){
                ans=newNode;
                temp1=ans;
            }
            else{
                temp1->next=newNode;
                temp1=temp1->next;
            }
        }
        return ans;
    }
};