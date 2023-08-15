/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

int length(Node *head)
{
    int count=1;
    Node* temp=new Node();
    temp=head;
    while(temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
	//Write your code here
}
