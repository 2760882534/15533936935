#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n=0;
    char score[3];
    int score_hight = 0;
    int score_low = 101;
    char name [10]={0};
    char name_low [10]={0};
    char name_hight [10]={0};
    char id [18]={0};
    char id_low [18]={0};
    char id_hight [18]={0};
    scanf("%d", &n);
    for(int i=0;i<n;++i)
    {
        scanf("%s %s %d",name ,id ,&score[3]);
        if(strcmp(score, "n/a") == 0)
        {
        	continue;
		}
        if(score[3] > score_hight)
        {   score_hight = score[3] ;
            name_hight[10]= name[10];
            id_hight[18] = id[18];
        }
        if(score[3] < score_low)
        {
            score_low = score[3];
            id_low[18] = id[18];
            name_low[10]=name[10];
        }
		if(score[3] == score_hight)
        {
			if(name < name_hight)
				score_hight = score[3];
				name_hight[10] = name[10];
				id_hight[18] = id[18];
	    }
		if(score[3] == score_low)
		{	
		    if(name > name_low)
			    score_low = score[3];
			    name_low[10]=name[10];
			    id_low[18] = id[18];
        } 
        if(score_hight == score_low)
        {
        	if(name_hight > name_low)
        	name_hight[10] = name_low[10];
			name_low[10] = name_hight[10];
			id_low[18] = id_hight[18];
			id_hight[18] = id_low[18];}
	}
    printf("%s %s\n",name_hight,id_hight);
    printf("%s %s\n",name_low,id_low);
    return 0;
}
