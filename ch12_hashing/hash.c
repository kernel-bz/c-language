/*
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	hash 알고리즘
*/

#include <stdio.h>
#include <string.h>

#define HASHSIZE 101 

//구조체 선언
struct nlist {
	struct nlist *next;	//연결 구조체(리스트)
	char *name;			//key
	char *defn;
}; 

//구조체 테이블 정의
static struct nlist *hashtab [HASHSIZE];
 
//hash 함수: 문자열 s를 위한 해시 값 산출
unsigned hash (char *s) 
{ 
	unsigned hashval; 

	for (hashval = 0; *s != '\0'; s++)  //문자열 s의 길이만큼 반복
		hashval = *s + 31 * hashval;    //문자 *s에 의존하는 난수적인(random) 값

	return hashval % HASHSIZE;  //HASHSIZE 이내의 값(0 <= 반환값 < HASHSIZE)
} 
 
//해시함수를 통하여 해시 테이블의 요소에 접근후
//연결된 구조체 리스트를 따라가며 반복 탐색
struct nlist* lookup (char *s) 
{ 
	struct nlist *np; 

	for (np = hashtab[hash(s)];  np != NULL; np = np->next) 
		if (strcmp(s, np->name) == 0) 
			return np;     //found (찾은 위치 포인터)
	return NULL;           //not found
} 

//문자열 s를 메모리에 할당한 포인터 반환
char *strdup (char *s)
{ 
	char *p; 
	p = (char *) malloc(strlen(s)+1);	//+1 for '\0'
	if (p != NULL) 
		strcpy (p, s); 
	return p; 
} 
 
//해시 테이블에 구조체 할당(저장)
struct nlist* install (char *name, char *defn) 
{ 
	struct nlist *np; 
	unsigned hashval; 

	if ((np = lookup (name)) == NULL) {	//not found (새롭게 할당)
		np = (struct nlist *) malloc(sizeof(*np)); 
		if (np == NULL || (np->name = strdup (name)) == NULL) 
			return NULL; 
		hashval = hash (name); 
		np->next = hashtab[hashval]; //현재 해시값에 있는 구조체는 다음(뒤)으로 연결
		hashtab[hashval] = np; 

	} else	//이미 존재하면
	   free ((void *) np->defn);	//defn 해제

	if ((np->defn = strdup (defn)) == NULL)	//defn 다시 할당
		return NULL; 

	return np; 
} 

int main ()
{
	char *name[] = {"apple", "bananna", "chally", "delta", "echo", "flog", "gloy"};
	char *defn[] = {"fruits", "fruits", "person", "name", "name", "animal", "name"};
	int i, n = sizeof(name) / sizeof(name[0]);
	struct nlist *head, *ptr; 

	//연결 리스트에 저장
	for (i = 0; i < n; i++) {
		printf ("%d: %s\n", hash (name[i]), name[i]);
		//구조체에 할당
		install (name[i], defn[i]);
	}

	//해시 테이블에 연결된 리스트 출력
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
