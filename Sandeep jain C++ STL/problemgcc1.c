// #include<stdio.h>
// int main()
// {
// 	//code
//   char a = 'A';
//   a = a + 2;
//   printf("%c\n",a);
//
// 	// int testcase;
// 	// scanf("%d",&testcase);
// 	// for(int i = 0 ; i < testcase ; i++) {
//   //
// 	//     int no;
// 	//     int count = 0;
// 	//     scanf("%d",&no);
// 	//     int arr[no];
//   //
// 	//     for(int j = 0; j < no; j++) {
// 	//         scanf("%d",&arr[j]);
// 	//     }
//   //
// 	//     for(int k = 0; k < no;) {
//   //
// 	//         if((arr[k + 1] - arr[k] == 1) && (arr[k + 2] - arr[k + 1] != 1)) {
// 	//             count++;
// 	//             k++;
// 	//         }
// 	//         else if((arr[k + 1] - arr[k] == 1) && (arr[k + 2] - arr[k + 1] == 1)) {
// 	//            // int n = 3;
// 	//            // while(arr[k + n] - arr[k + n - 1] != 1){
// 	//            //     k++;
// 	//            //     n++;
// 	//            // }
// 	//             count++;
// 	//         }
// 	//     }
// 	//     printf("%d\n",count);
//   //
// 	// }
// 	return 0;
// }
#include<stdio.h>
int main()
{
	//code

	int testcase;
	scanf("%d",&testcase);
	for(int i = 0 ; i < testcase ; i++) {

	    int no;
	    int count = 0;
	    scanf("%d",&no);
	    int arr[no];

	    for(int j = 0; j < no; j++) {
	        scanf("%d ",&arr[j]);
	    }

	    for(int t = 0; t < no;) {
	        int n = 1;
	        if(arr[t + n] - arr[t] == 1) {
	            if(arr[t + n + 1] - arr[t + n] != 1) {
	                count++;
	            }
	            else {
	                while(arr[t + n + 1] - arr[t + n] != 1) {
	                    n++;
	                }
	                count++;
	            }
	        }
          t = n;
	    }

	   // for(int k = 0; k < no;) {

	   //     if((arr[k + 1] - arr[k] == 1) && (arr[k + 2] - arr[k + 1] != 1)) {
	   //         count++;
	   //     }
	   //     else if((arr[k + 1] - arr[k] == 1) && (arr[k + 2] - arr[k + 1] == 1)) {
	   //         int n = 3;
	   //         while(arr[k + n] - arr[k + n - 1] != 1){
	   //             k++;
	   //             n++;
	   //         }
	   //         count++;
	   //         k--;
	   //     }
	   //     k++;
	   // }
	    printf("%d\n",count);

	}
	return 0;
}
