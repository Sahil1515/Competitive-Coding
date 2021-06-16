


// Approch
// By inserting in the beginning and removing from the beginning


//Function to push an integer into the stack.
void MyStack ::push(int x) 
{
    StackNode *node= new StackNode(x);
    if(top==NULL)
        top=node;
    else
        node->next=top;
        top=node;
    
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    // Your Code
    if(top!=NULL)
   {
       int data= top->data;
       top=top->next;
       
       return data;
   }
   
   return -1;
}



Correct Answer.Correct Answer
Execution Time:0.01