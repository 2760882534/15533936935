#include<stdio.h>
#include<string.h>
void word(char * first, char * end)//����һ���õ�������ĺ��� 
{
	char s;
	char str;
	while(first <= end){
		s = * first;
		* first = * end;
		* first++;
		* end = s;
		* end--;
	}
}
int main()
{
	char str[1000];	
	int i = 0;
    while((str[i] = getchar()) != '\n'){
    	i++;
	} 
	char * first = str, * end = str, * t;  
	for(int j = 0; ; j++){      //ѭ���ҵ�����һ������ ����������ǰ�ߵ�ÿһ������ 
		if(* end == '\n'){
			for(;;){
				--end;
				if((*end >= 65&&*end<=90)||(*end>=97&&*end<=122))
				{
				    word(first, end);
				    break;
				}
				
			}
			break;
		}
		if(* end == ' '){                    //����ÿһ�����ʲ��������� 
			t = end;           
			t++;
			--end;
			word(first, end);
			first = t;
			end = t;
		}
		else
		{
			end++;
		}
	}
	printf("%s", str);
	return 0;
}

