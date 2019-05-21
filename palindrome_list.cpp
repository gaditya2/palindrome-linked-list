/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
int Solution::lPalin(ListNode* A) 
{
    stack<int>mystack;
    ListNode* current=A;
    int palin=0;
    int i;
    while(current!=NULL)
    {
        mystack.push(current->val);
        current=current->next;
    }
    while(A!=NULL)
    {
         i=mystack.top();
        
         //return mystack.top();
        if(A->val==i)
        {
            palin=1;
        }
        else
        {
            palin=0;
            break;
        }
         A=A->next;
          mystack.pop();
         
    }
   // return mystack.top();
    return palin;
    
}
