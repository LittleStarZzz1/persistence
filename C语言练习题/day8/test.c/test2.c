#include <stdio.h>
#include <stdlib.h>

//两个乒乓球队进行比赛,每个队出三个人
//甲队为a,b,c  乙队为x,y,z
//有人向队员打听球队参加比赛队员的对阵情况
//a说他不和x比   c说他不和x,z比
//编程得到两队赛手对阵情况
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