#include <iostream>
#include <vector>

using namespace std;

//̰������,̰���ֵ
//������ֵ���ֵ
class MaxGap {
public:
	int findMaxGap(vector<int> A, int n) {
		// write code here
		int max = A[0];
		//����ȡ��������������ֵ,����������һ���������Ĺ���(����Ԫ�ظ�������)
		//������������Ĺ�����,���ӽ���һ���ȱ߽�ֵ�����,���������Ԫ�ط����仯,�������ղ�ֵ��С
		//��֮,����һ���ȱ߽�ֵС����,���������Ԫ�ز������仯,��ֵ����
		//����ȡ����֮�н�С��һ��Ԫ��
		int min = A[0] > A[n - 1] ? A[n - 1] : A[0];

		for (int i = 1; i < n; ++i)
		{
			if (A[i] > max)
				max = A[i];//�ҵ����������ֵ
			//����������ô�仯,�����ҵ���һ�ߵ����ֵһ��Ϊ���������ֵ
		}

		return max - min;
	}
};

int main()
{


	return 0;
}