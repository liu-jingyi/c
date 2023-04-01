#include<stdio.h>
#include<stdlib.h>
int delx(int *arr,int len,int x){
	int k=0,i=0;   //k用来记录删除元素的总数 
	while(i<len){
		if (*(arr+i)==x){
			k++;
		}
		else{
			*(arr+i-k)=*(arr+i);
		}
		i++;
	}
	for(int i=len-k;i<len;i++){     
		*(arr +i)=NULL;       //将k后面元素删除         
	}
	return k;
}
int main(){
	int arr[]={1,2,3,2,4,5};
	int len=sizeof(arr)/sizeof(int),k;    //用k来接收 
	k=delx(arr,len,2);
	for(int i=0;i<len-k;i++){     
		printf("%d",*(arr+i));          
	}
	return 0;
}
