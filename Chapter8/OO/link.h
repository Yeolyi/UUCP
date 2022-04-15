typedef void *Data; // pointer to void. 별이 void쪽에 붙어야되는거 아닌가??
typedef struct _linkedList LinkedList;

LinkedList* getLinkedListInstance();
void removeLinkedListInstance(LinkedList* list);
void addNode(LinkedList*, Data);
Data removeNode(LinkedList*);
