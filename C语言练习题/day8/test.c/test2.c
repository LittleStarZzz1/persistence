#include <stdio.h>
#include <stdlib.h>

//����ƹ����ӽ��б���,ÿ���ӳ�������
//�׶�Ϊa,b,c  �Ҷ�Ϊx,y,z
//�������Ա������Ӳμӱ�����Ա�Ķ������
//a˵������x��   c˵������x,z��
//��̵õ��������ֶ������
int main(){
	char a, b, c;
	for (a = 'x'; a <= 'z'; ++a){
		for (b = 'x'; b <= 'z'; ++b){
			if (a != b){
				for (c = 'x'; c <= 'z'; ++c){
					if (a != c && b != c){
						if (a != 'x' && c != 'x' && c != 'z'){
							printf("a VS %c\nb VS %c\nc VS %c\n",
								a, b, c);
						}

					}
				}
			}
		}
	}
	system("pause");
	return 0;
}