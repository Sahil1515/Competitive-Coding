


//Function to push an integer into the stack.
void MyStack :: push(int x)
{
    // Your Code
    arr[++top]=x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code   
    if(top>=0)
    return arr[top--];
}


Correct Answer.Correct Answer
Execution Time:0.01