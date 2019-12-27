#include<stdio.h>
int main()
{
	//code
	int testcase;
	scanf("%d",&testcase);

	for(int i = 0; i < testcase; i++) {

	   // int c1[10000], c2[10000];
	    int score1 = 0, score2 = 0;
	    int n1, n2;
	    scanf("%d %d",&n1, &n2);
	    int c1[n1] , c2[n2];

	    for(int j = 0; j < n1; j++) {
	        scanf("%d",&c1[j]);
	    }
	    for(int j = 0; j < n1; j++) {
	       // scanf("%d",&c1[j]);
	       score1 += c1[j];
	    }

	    for(int k = 0; k < n2; k++) {
	        scanf("%d",&c2[k]);
	    }
	    for(int k = 0; k < n2; k++) {
	       // scanf("%d",&c2[k]);
	       score2 += c2[k];
	    }
	    if(score1 > score2) {
	        printf("C1\n");
	    }
	    else {
	        printf("C2\n");
	    }

	}
	return 0;
}
