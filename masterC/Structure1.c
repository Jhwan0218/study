#include<stdio.h>
#include<stdlib.h>

struct student{
    int StuNum;
    double hei;
    double wei;
};

int main(void)
{
    double heiavg = 0.0;
    double weiavg = 0.0;
    int N;
    scanf("%d", &N);
    struct student *s;
    s = (struct student *)malloc(sizeof(struct student) * N);
    for(int i=0;i<N;i++)
    {
        scanf("%d %lf %lf",&s[i].StuNum,&s[i].hei,&s[i].wei);
    }
    for(int i=0;i<N;i++)
    {
        heiavg += s[i].hei;
        weiavg += s[i].wei;
    }
    heiavg /= (double)N;
    weiavg /= (double)N;
    for(int i=0;i<N;i++)
    {
        if(s[i].hei >= heiavg)
        {
            if(s[i].wei >= weiavg)
                printf("%d super\n",s[i].StuNum);
            else
                printf("%d average\n",s[i].StuNum);
        }
        if(s[i].hei < heiavg)
        {
            if(s[i].wei >= weiavg)
                printf("%d average\n",s[i].StuNum);
            else
                printf("%d below\n",s[i].StuNum);
        }

    }
    free(s);
    return 0;
}