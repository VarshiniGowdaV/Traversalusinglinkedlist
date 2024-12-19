#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
struct Node* appendNode(struct Node* head, int data)
{
    struct Node* newNode = createNode(data);
    if (head == NULL)
    {
        return newNode;
    }
    struct Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}
void forwardTraversalAndCount(struct Node* head)
{
    int count = 0;
    struct Node* temp = head;

    printf("Linked List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        count++;
        temp = temp->next;
    }
    printf("NULL\n");
    printf("Total number of nodes: %d\n", count);
}

int main()
{
    struct Node* head = NULL;
    int choice, data;
    printf("Linked List Operations:\n");
    do {
        printf("1. Add node\n");
        printf("2. Forward traversal and count nodes\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data to add: ");
            scanf("%d", &data);
            head = appendNode(head, data);
            break;
        case 2:
            forwardTraversalAndCount(head);
            break;
        case 3:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
