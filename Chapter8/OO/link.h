typedef void *Data; // pointer to void. ���� void�ʿ� �پ�ߵǴ°� �ƴѰ�??
typedef struct _linkedList LinkedList;

LinkedList* getLinkedListInstance();
void removeLinkedListInstance(LinkedList* list);
void addNode(LinkedList*, Data);
Data removeNode(LinkedList*);
