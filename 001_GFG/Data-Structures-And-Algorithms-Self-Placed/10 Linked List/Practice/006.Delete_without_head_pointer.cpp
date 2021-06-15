class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       del->data=del->next->data;
       Node * temp=del->next;
       del->next=del->next->next;
       delete temp;
    }
};

Correct Answer.Correct Answer
Execution Time:0.05

class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
      *del=*(del->next);
    }

};
Correct Answer.Correct Answer
Execution Time:0.05