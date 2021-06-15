


class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* reverse(Node * head)
    {
        Node * temp=NULL;
        Node * prev=NULL;
        Node * cur=head;
        
        while(cur!=NULL)
        {
            temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
        return prev;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {

        first=reverse(first);
        second=reverse(second);
        
        Node * result= NULL;
        Node * returnNode=NULL;
        
        int c=0;
        while(first!=NULL && second!=NULL)
        {
            //Adding two nodes
            int data=first->data+second->data+c;
            // cout<<"data"<<data;
            
            // Getting carry
            c=0;
            if (data >= 10)
            c=1;
            // Making new node
            Node * temp= new Node(data%10);
            if(result==NULL)
            {
                result=temp;
                returnNode=result;
            }
            
            else 
            {
                result->next=temp;
                result=result->next;   
            }
            first=first->next;
            second=second->next;
        }
        while(first!=NULL)
        {
            
            int data=first->data+c;
            c=0;
            if (data >= 10)
            c=1;
            // Making new node
            Node * temp= new Node(data%10);
            if(result==NULL)
            {
                result=temp;
                returnNode=result;
            }
            
            else 
            {
                result->next=temp;
                result=result->next;   
            }
            first=first->next;
        }
         while(second!=NULL)
        {
            int data=second->data+c;
            c=0;
            if (data >= 10)
            c=1;
            // Making new node
            Node * temp= new Node(data%10);
            if(result==NULL)
            {
                result=temp;
                returnNode=result;
            }
            
            else 
            {
                result->next=temp;
                result=result->next;   
            }
            second=second->next;
        }
        if(c==1)
        {
            Node * temp= new Node(1);
            result->next=temp;
            result=result->next;   
        }
        returnNode =reverse(returnNode);
        
        return returnNode;
    }
};


Correct Answer.Correct Answer
Execution Time:0.07