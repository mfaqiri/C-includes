#ifndef LINKEDLIST_H

struct listNode{

	unsigned int tag;
	char val;
	struct listNode prev;
	struct listNode next;

	

}node;

struct linkedList{
	node header = NULL;
	node cur;
};

void addNode(struct linkedList mut, node input){

	if(!mut->header){
		mut->header = input;
		mut->cur = mut->header;
	}else{
	cur->next = input;
	cur->next->prev = cur;
	cur = cur->next;
	}

}

void removeNode(node input){

	if(!input->prev)
		if(!input->next){
			printf("This is an isolated node\n");
			input = NULL;
			}
		else{
			input->next->prev = NULL;
		}

	else if(!input->next){
		input -> prev-> next = NULL;

	}
	else{
		input->prev->next = input->next;
		input->next->prev = input->prev;

	}

}

int findNodeOfVal(struct linkedList input,char val, node output){

	node header = linkedList->header;
	node mut = header;

	while(mut){
		if(mut->val == val){
			output = mut;
			return 1;
		}
		mut =mut->next;

	}

	return -1;


}



#endif
