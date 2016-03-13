#include <stdio.h>
#include "hash.h"

int main()
{
	char word[200];
	unsigned short int i, n = 0, m = 0;
	long int hash_w;
	occurance_t hash[3001];
	for(i=0; i < 3001; i++)
	{
		hash[i].hash_s=0;
		hash[i].a=0;
	}
	do{
		scanf("%s", word);
		i++;
		hash_w=hash(word);
		while(n < 3000){
			if(hash[n].hash_s == hash_w)
			{
				hash[n].a++;
				break;
			}
			else if(hash[n].hash_s == 0)
			{
				hash[n].hash_s = hash_w;
				hash[n].a = 1;
				break;
			}
			n++
		}
	}while(strcmp(word) != 0);
	i=0;
	while(hash[i].a != 0)
	{
		if(hash[i].a > m)
			m = i;
		i++;
	}
	printf("%d %ld",hash[m].a, hash[m].hash_s);
	return 0;
}
