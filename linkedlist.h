#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct linked_list //자기참조 구조체에 대한 정의다.
{
	char *name;
	struct linked_list *next;
};

typedef struct linked_list NODE; //struct linked_list를 NODE라 재정의한다.

typedef NODE * LINK; //NODE 포인터를 링크로 재정의한다.



