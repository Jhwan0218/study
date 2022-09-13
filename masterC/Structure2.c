#include<stdio.h>
#include<stdlib.h>
struct book{
    char author[50];
    char title[50];
    int page;
};
int main(void)
{
    int N;
    struct book *B;
    printf("몇권의 도서 정보를 입력하시겠습니까?\n");
    scanf("%d",&N);
    B = (struct book *)malloc(sizeof(struct book)*N);
    for(int i=0;i<N;i++)
    {
        printf("저자 : ");
        scanf("%s",B[i].author);
        printf("제목 : ");
        scanf("%s",B[i].title);
        printf("페이지 수 : ");
        scanf("%d",&B[i].page);
    }
    printf("도서정보출력\n");
    for(int i=0;i<N;i++)
    {
        printf("book%d\n",i+1);
        printf("%s\n",B[i].author);
        printf("%s\n",B[i].title);
        printf("%d\n",B[i].page);
    }
    return 0;
}