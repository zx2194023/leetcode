/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    
    while(head != NULL && head->val == val) {
        head = head->next;
    }
    
    if(head == NULL) 
        return NULL;
    
    struct ListNode* p = head;
    struct ListNode* next = head->next;                                                                                                                                                                                                             
    while(p != NULL && next != NULL){
        if(next->val == val){
            next = next->next;
            p->next = next;
        }else{
            p = p->next;
            next = next->next;
        }
            
    }
    
    return head ;
}