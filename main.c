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
	printf("�п�J����");
    scanf("%c",&key);
    switch (key)
	{
	case 'i':
	case 'I':
    	printf("�п�J�`�I�����e�G\n", k);
       	scanf("%d", &data[i]);
       	CreateBinaryTree(data, 5);
    break;
    case 't':
	case 'T':
		 //�I�s�إߤG���𤧰Ƶ{��
    	printf("�G���𤤧ǰl�ܪ����G�G\n");
    	Inorder(1);   //�I�s���Ǥ��Ƶ{��
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
void CreateBinaryTree(int data[Num],int n) {   //�إߤG����
    int j=1, temp,i;
    for ( i=0; i<Num; i++) {BinaryTree[j]=data[i];}  //��ȳ]�w
    for ( i=0; i<n; i++) {
        BinaryTree[j]=data[i];
        j= j+ 1;
        }
    }

void Inorder(int j) {  //���ǰl��
    if (BinaryTree[j] != 0) {
        Inorder(2*j);   //���j���l��
        if (BinaryTree[j] != 0) {  //�C�L���
            printf("%d ", BinaryTree[j]);
            }
        Inorder(2*j+1);  //���j�k�l��             
        }
    }





