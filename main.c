#include <stdio.h>
#include <stdlib.h>

#define Num 1000 


void Inorder(int);

int data[Num];
int BinaryTree[Num];

int main(void) 
{
    int n,i,k;
    char key;
    char dkey;
 while(1)
 {   
	printf("請輸入指示");
    scanf("%c",&key);
    switch (key)
	{
	case 'i':
	case 'I':
    	printf("請輸入節點的內容：\n", k);
       	scanf("%d", &data[i]);
       	CreateBinaryTree(data, 5);
    break;
    case 't':
	case 'T':
		 //呼叫建立二元樹之副程式
    	printf("二元樹中序追蹤的結果：\n");
    	Inorder(1);   //呼叫中序之副程式
    	printf("\n");
    	break;
    
    	case 'd':
		case 'D':
    
   case 'q':
   case 'Q':
		printf("End");
		break;
	}
}
}
void CreateBinaryTree(int data[Num],int n) {   //建立二元樹
    int j=1, temp,i;
    for ( i=0; i<Num; i++) {BinaryTree[j]=data[i];}  //初值設定
    for ( i=0; i<n; i++) {
        BinaryTree[j]=data[i];
        j= j+ 1;
        }
    }

void Inorder(int j) {  //中序追蹤
    if (BinaryTree[j] != 0) {
        Inorder(2*j);   //遞迴左子樹
        if (BinaryTree[j] != 0) {  //列印樹根
            printf("%d ", BinaryTree[j]);
            }
        Inorder(2*j+1);  //遞迴右子樹             
        }
    }





