#include <iostream>
using namespace std;

int main() 
{
	 int testcases,num,rotate;
	 scanf("%d",&testcases);
	while(testcases>0)
   {   
     	scanf("%d %d",&num,&rotate);
    	int arr[100]={0};
       
	  for(int i=0; i<num; i++)
	  {
	      scanf("%d",&arr[i]);
	  }
	  for(int i=0; i<(num-rotate); i++)
	  {
	      printf("%d ",arr[i+rotate]);
	      
	  }
	  for(int i=0; i<rotate; i++)
	  {
	      printf("%d ",arr[i]);
	  }
	    printf("\n");
	  testcases--;
	}
	return 0;
}