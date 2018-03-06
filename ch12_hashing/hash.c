/*
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	hash �˰���
*/

#include <stdio.h>
#include <string.h>

#define HASHSIZE 101 

//����ü ����
struct nlist {
	struct nlist *next;	//���� ����ü(����Ʈ)
	char *name;			//key
	char *defn;
}; 

//����ü ���̺� ����
static struct nlist *hashtab [HASHSIZE];
 
//hash �Լ�: ���ڿ� s�� ���� �ؽ� �� ����
unsigned hash (char *s) 
{ 
	unsigned hashval; 

	for (hashval = 0; *s != '\0'; s++)  //���ڿ� s�� ���̸�ŭ �ݺ�
		hashval = *s + 31 * hashval;    //���� *s�� �����ϴ� ��������(random) ��

	return hashval % HASHSIZE;  //HASHSIZE �̳��� ��(0 <= ��ȯ�� < HASHSIZE)
} 
 
//�ؽ��Լ��� ���Ͽ� �ؽ� ���̺��� ��ҿ� ������
//����� ����ü ����Ʈ�� ���󰡸� �ݺ� Ž��
struct nlist* lookup (char *s) 
{ 
	struct nlist *np; 

	for (np = hashtab[hash(s)];  np != NULL; np = np->next) 
		if (strcmp(s, np->name) == 0) 
			return np;     //found (ã�� ��ġ ������)
	return NULL;           //not found
} 

//���ڿ� s�� �޸𸮿� �Ҵ��� ������ ��ȯ
char *strdup (char *s)
{ 
	char *p; 
	p = (char *) malloc(strlen(s)+1);	//+1 for '\0'
	if (p != NULL) 
		strcpy (p, s); 
	return p; 
} 
 
//�ؽ� ���̺� ����ü �Ҵ�(����)
struct nlist* install (char *name, char *defn) 
{ 
	struct nlist *np; 
	unsigned hashval; 

	if ((np = lookup (name)) == NULL) {	//not found (���Ӱ� �Ҵ�)
		np = (struct nlist *) malloc(sizeof(*np)); 
		if (np == NULL || (np->name = strdup (name)) == NULL) 
			return NULL; 
		hashval = hash (name); 
		np->next = hashtab[hashval]; //���� �ؽð��� �ִ� ����ü�� ����(��)���� ����
		hashtab[hashval] = np; 

	} else	//�̹� �����ϸ�
	   free ((void *) np->defn);	//defn ����

	if ((np->defn = strdup (defn)) == NULL)	//defn �ٽ� �Ҵ�
		return NULL; 

	return np; 
} 

int main ()
{
	char *name[] = {"apple", "bananna", "chally", "delta", "echo", "flog", "gloy"};
	char *defn[] = {"fruits", "fruits", "person", "name", "name", "animal", "name"};
	int i, n = sizeof(name) / sizeof(name[0]);
	struct nlist *head, *ptr; 

	//���� ����Ʈ�� ����
	for (i = 0; i < n; i++) {
		printf ("%d: %s\n", hash (name[i]), name[i]);
		//����ü�� �Ҵ�
		install (name[i], defn[i]);
	}

	//�ؽ� ���̺� ����� ����Ʈ ���
	printf ("\nHash Table List ----------------------------------\n");
	for (i = 0; i < HASHSIZE; i++) {
		head = hashtab [i];
		for (ptr = head; ptr != NULL; ptr = ptr->next) {
			printf("%d: %s, %s\n", i, ptr->name, ptr->defn);
		}
	}

	printf ("\nHash Table Search ----------------------------------\n");
	ptr = lookup ("echo") ;
	printf("found: %s, %s\n", ptr->name, ptr->defn);

	printf ("\nPress any key to end...");
	getchar();
	return 0;
}
