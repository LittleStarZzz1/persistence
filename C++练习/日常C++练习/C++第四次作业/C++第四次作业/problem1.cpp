//#include <iostream>
//#include <cstring>
//#include <cstdio>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
////全局变量 g_ , 局部静态变量 s_ , 成员变量 m_ .
//
//enum{
//	SPADES,	//黑桃
//	HEARTS,	//红桃
//	CLUBS,	//梅花
//	DIAMONDS,	//方片
//	JOKER
//};
//
//class Poker{
//	char m_type;	//表示花色
//	int m_point;	//表示点数
//public:
//	void makePoker(char type, int point){
//		m_type = type;
//		m_point = point;
//
//		if (m_type == JOKER){
//			m_point += 13;
//		}
//	}
//
//	void outputPoker(){
//		char * type[5] = { "黑桃", "红桃", "梅花", "方片", "" };
//		char * point[16] = { "", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "小王", "大王" };
//
//		printf("%s%s", type[m_type], point[m_point]);
//	}
//
//	bool cmppoker(Poker tmp){
//		return (m_point < tmp.m_point) ||
//			(m_point == tmp.m_point && m_type > tmp.m_type);
//	}
//
//	bool IsEff(){
//		if (m_type == JOKER && (m_point == 14 || m_point == 15)){
//			return true;	//判断是大小王时的情况
//		}
//
//		if ((unsigned char)m_type > 3 || (unsigned char)m_point - 1 > 13){
//			return false;	//在排除掉大小王的情况下,m_type > 3与m_point - 1 > 13均无效
//		}
//		return true;
//	}
//
//};
//
//class Player{
//	Poker m_HandCard[18];
//	int m_size;
//public:
//
//	Player(){	//构造函数
//		m_size = 0;
//	}
//
//	//Player() : m_size(0){}	另一种写法
//
//
//	void getCard(Poker newCard){
//		int i;
//		for (i = m_size; i > 0 && m_HandCard[i - 1].cmppoker(newCard); i--){
//			m_HandCard[i] = m_HandCard[i - 1];
//		}
//		m_HandCard[i] = newCard;
//		m_size++;
//	}
//
//	void showCard(){
//		for (auto & i : m_HandCard){
//			i.outputPoker();
//			putchar(' ');
//		}
//		putchar('\n');
//	}
//};
//
//void pokerTest(){
//	srand((unsigned)time(NULL));
//	Player p1;
//	Poker tmp;
//
//	int i;
//	for (i = 0; i < 18; ++i){
//		tmp.makePoker(rand() % 4, rand() % 13 + 1);
//		p1.getCard(tmp);
//	}
//
//	p1.showCard();
//
//}
//
//int randnum(Poker * cardHeap){	//判断拿到的牌是否有效(判断该张扑克是否被取走),有效则返回下标
//	int tmp = rand() % 54;
//
//	while (1){
//		if (cardHeap[tmp].IsEff()){
//			return tmp;
//		}
//		else {
//			tmp++;
//			if (tmp == 54){
//				tmp = 0;
//			}
//		}
//	}
//}
//
//int main1(){
//
//	Poker tmp[54];
//
//	int j = 0;
//
//	Player game1;
//	Player game2;
//	Player game3;
//
//	for (auto & i : tmp){	//产生54张扑克牌
//		i.makePoker(j / 13, j % 13 + 1);
//		j++;
//	}
//
//	srand((unsigned)time(NULL));
//
//	int delcard;
//
//	int i;
//	for (i = 0; i < 18; ++i){
//		delcard = randnum(tmp);
//		game1.getCard(tmp[delcard]);
//		tmp[delcard].makePoker(-1, -1);
//
//		delcard = randnum(tmp);
//		game2.getCard(tmp[delcard]);
//		tmp[delcard].makePoker(-1, -1);
//
//		delcard = randnum(tmp);
//		game3.getCard(tmp[delcard]);
//		tmp[delcard].makePoker(-1, -1);
//
//	}
//
//	game1.showCard();
//	game2.showCard();
//	game3.showCard();
//
//	system("pause");
//	return 0;
//}