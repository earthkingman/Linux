/*
* 6장 기본 함수
* 파일이름: testtsearch.c
*/
#include <search.h>
#include <stdio.h>
#include <string.h>
struct node {
char *name;
int mid;
int final;
};

int compare(const void *cp1, const void *cp2)
{
return strcmp(((struct node *)cp1)->name, ((struct node *)cp2)->name);
}

void print_node(const void *nodeptr, VISIT order, int level)
{
if (order == preorder || order == leaf)
printf("이름 = %-20s, 중간점수 = %d, 기말점수 = %d\n",(*(struct node **)nodeptr)->name,(*(struct node **)nodeptr)->mid,(*(struct node **)nodeptr)->final);
}


int main()
{
int num;
printf(" 사람 수는 ? ");
scanf("%d",&num);
struct node *root = NULL; /* 루트 노드 */
char *nameptr = (char *)malloc(num* sizeof(char));
struct node *nodeptr = (struct node *)malloc(num* sizeof(struct node));
struct node **ret;
int i = 0;
while (scanf("%s%d%d", nameptr, &nodeptr->mid ,&nodeptr->final ) != EOF && i++ < num) {
nodeptr->name = nameptr;
/* 트리에 넣기 */
ret = (struct node **) tsearch((void *) nodeptr,
(void **) &root, compare);
printf("\"%s\" 님이 ", (*ret)->name);
if (*ret == nodeptr)
printf("트리에 추가되었습니다.\n");
else
printf("트리에 이미 존재합니다.\n");
nameptr += strlen(nameptr) + 1;
nodeptr++;
}
twalk((void *) root, print_node);
}


/* twalk 가 노드를 처음 만날때 출력 */

