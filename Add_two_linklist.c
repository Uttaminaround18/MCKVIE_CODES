#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void print(struct Node* head){
    struct Node * ptr = head;
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
        
    }
}

struct Node* add(struct Node * head, struct Node * head1){
    int sum = 0 ,carry = 0;
    struct Node * l1 = head;
    struct Node * l2 = head1;

    while(l1!=NULL || l2!=NULL){
        sum = l1->data + l2->data + carry;
        if(sum>9){
            sum = sum%10;
            carry = sum/10;
        }
        l1->data = sum;
        l1 = l1->next;
        l2 = l2->next;
        
    }


}

struct Node * rev(struct Node* head){
    struct Node* curr = head;
    struct Node * prev = NULL;
    struct Node * fut = head;

    while(curr!=NULL){
        fut = fut->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
    }
    return prev;

}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 2;
    head->next = second;

    // Link second and third nodes
    second->data = 5;
    second->next = third;

    // Link third and fourth nodes
    third->data = 6;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 9;
    fourth->next = NULL;

    head = rev(head);
    print(head);

    struct Node *head1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third1 = (struct Node *)malloc(sizeof(struct Node));

    head1->data = 5;
    head1->next = second1;
    second1->data = 9;
    second1->next = third1;
    third1->data = 8;
    third1->next = NULL;
   
    return 0;
}
