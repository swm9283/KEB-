// Linked list 구현.
# include <iostream>
using namespace std;

// Node 구조체 선언.
struct Node
{
    int data;
    Node *nextNode;
};

// simply Linked List clas
class LinkedList
{
    private:
      Node* head;
      Node *tail;
    
    public:
        // Simple Linked List 생성자.
        LinkedList()
        {
            head = NULL;
            tail = NULL;
        };

        // 맨 앞의 노드 추가 
        void addFirstNode(int n); 
        
        // 노드 추가
        void addNode(int n);

        // 중간 노드 삽입.
        void addMidNode(Node * preNode, int n);

        // 노드 삭제
        void removeNode(Node *preNode);

        // Linked list 출력
        void printLinkeList(Node *head);

        //첫 번째 노드 가져오기
        Node *getHead() { return head; }
};


// Main 함수 선언
int main(void)
{
    // LinkedList 객체 생성.
    LinkedList ll;
    ll.addNode(1);
    ll.addNode(2);
    ll.addNode(3);
    ll.printLinkeList(ll.getHead());

    // 노드 삽입.
    ll.addMidNode(ll.getHead()->nextNode, 4);
    ll.printLinkeList(ll.getHead());

    // 3번째 노드 삭제.
    ll.removeNode(ll.getHead()->nextNode);
    ll.printLinkeList(ll.getHead());

    return 0;
}



//  맨 앞의 노드 추가
void LinkedList :: addFirstNode(int n)
{
    // 추가할 노드 생성 = 메모리를 동적 할당.
    Node *temp = new Node;
    temp->data = n;

    // LinkedList가 비어있을 경우.
    if( head == NULL)
    {
        // head node : temp
        head = temp;
        // tail node : temp
        tail = temp;
    }
    // LinkedList가 비어있지 않은 경우
    else
    {
        // temp node의 next Node : 현 head node
        temp->nextNode = head;
        // head : temp
        head = temp;
    }
}

// 노드 추가
void LinkedList :: addNode(int n)
{
    // 추가할 노드 생성 = 메모리를 동적 할당.
    Node* temp = new Node;
    temp->data = n;
    temp->nextNode = NULL;

    // LinkedList가 비어있을 경우.
    if (head == NULL)
    {
        // head node : temp
        head = temp;
        // tail node : temp
        tail = temp;
    }
    // LinkedList가 비어있지 않은 경우
    else
    {
        // 현 tail의 next node를 temp로 설정
        tail->nextNode = temp;
        // tail을 temp로 설정.
        tail = temp;
    }
}

// 중간 노드 삽입
void LinkedList :: addMidNode(Node* preNode ,int n)
{
    // 추가할 노드 생성 = 메모리를 동적 할당.
    Node *temp = new Node;
    temp->data = n;

    //LinkedList가 비어있는 경우
    if( head == NULL)
    {
        // head node : temp
        head = temp;
        // tail node : temp
        tail = temp;
    }
    //LinkedList가 비어있지 않은 경우
    else
    {
        temp->nextNode = preNode->nextNode;
        preNode->nextNode = temp;
    }
}

// 노드 삭제.
void LinkedList :: removeNode(Node *preNode)
{
    // 삭제할 Node 저장.
    Node* temp = preNode ->nextNode;

    // 현재 노드의 링크를 삭제할 노드에 연결된 노드로 바꿈.
    preNode->nextNode = temp ->nextNode;

    // temp 제거.
    delete temp;
}

// LikedList 출력
void LinkedList :: printLinkeList(Node* head)
{
    if (head == NULL)
    {
        cout << "출력이 끝났습니다." << endl;
    }
    else
    {
        cout << head->data << "->";
        printLinkeList(head->nextNode);
    }
    cout << endl;
}