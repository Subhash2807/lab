// Author - Hardik Srivastava (oddlyspaced)
#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
} *first = NULL;

void create(int a[], int size) {
	struct node *temp, *last;
	int i;
	first = (struct node*) malloc(sizeof(struct node));
	first->data = a[0];
	first->next = NULL;
	last = first;
	for (i = 1; i < size; i++) {
		temp = (struct node*) malloc(sizeof(struct node));
		temp->data = a[i];
		temp->next = NULL;
		last->next = temp;
		last = temp;
	}
	
}

void insert_at(struct node *p) {
	int val, pos;
	printf("\nEnter value and position :");
	scanf("%d %d", &val, &pos);
	if (pos == 0) {
		struct node *temp = (struct node*) malloc(sizeof(struct node));
		temp->next = first;
		temp->data = val;
		first = temp;
		return;
	}
	// to insert node in middle
	int c = 0;
	while (c != pos-1) {
		printf("called\n");
		p = p->next;
		c++;
	}
	
	struct node *temp = (struct node*) malloc(sizeof(struct node));
	temp->next = p->next;
	temp->data = val;
	
	p->next = temp;	
}

void delete_at(struct node *p) {
	int pos;
	printf("\nEnter position :");
	scanf("%d", &pos);
	if (pos == 0) {
		first = first->next;
		return;
	}
	int c = 0;
	while (c != pos-1) {
		p = p->next;
		c++;
		if (p == NULL) {
			printf("\nThere are less than %d elements in linked list!", pos);
			return;
		}
	}
	p->next = p->next->next;
}

void delete_val(struct node *p) {
	int val;
	printf("\nEnter value:");
	scanf("%d", &val);
	
	if (first->data == val) { // first node
		first = first->next;
		return;
	}
	struct node *temp = p;
	p = p->next;
	
	while (p->next != NULL) { // middle node
		if (p->data == val) {
			temp->next = p->next;
			return;
		}
		p = p->next;
		temp = temp->next;
	}
	
	if (p->data == val) { // last node
		temp->next = NULL;
		return;
	}
	// value does not exist in list
	printf("\n%d does not exist in the linked list!", val);
}

void print_list(struct node *p) {
	int pos = 0;
	while (p) {
		printf("%d, ", p->data);
		p=p->next;
	}
}

void setup_list() {
	int i, size;
	printf("\nEnter size of Array: ");
	scanf("%d", &size);
	int arr[size];
	printf("\nEnter %d elements:", size);
	for (i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	create(arr, size);
}

void main() {
	int choice;
	setup_list();
	while (1) {
		printf("\n");
		print_list(first);
		printf("\n");
		printf("Enter \n1. Input Array\n2. Insert Node at a position\n3. Delete node from a position\n4. Delete node of specific value\n5. Exit\n");
		scanf("%d", &choice);
		switch(choice) {
			case 1:
				setup_list();
				break;
			case 2:
				insert_at(first);
				break;
			case 3:
				delete_at(first);
				break;
			case 4:
				delete_val(first);
				break;
			case 5: 
				exit(0);
				break;
			default:
				printf("\nInvalid choice!");
		}
	}
}

