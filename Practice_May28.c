#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

//�����Ҵ�
//A = (int*)malloc(sizeof(int)*4); -> arr[n]���� n�� �Է¹ް� ���� �� ���

//free(A) -> �޸� ���� ����  & ���Ḯ��Ʈ���� cur�� ����Ű�� �ִ°� free(cur)�� ���� ���� 
//node* newnode = (node*)malloc(sizeof(node) * 4) 

//���� �����
//fopen���� ���� �� fclose�� ���� ����

//��������� -> ���� �̸��� ���ڷ� �޾� �ش� ������ �о���� ���� ��
// int argc ���� �Լ��� ���޵Ǵ� ������ ����
// char *argv[] argc�� �޴� ������ ���ԵǾ� �ִ� ���� �Լ��� ���޵Ǵ� �������� �޸� ���� -> ���ڿ� �迭��
// argv[0]���� ���� �̸� ���� argv[1]���� �߰����� ������ �Է¹���
// CMD���� cd�� ���� ���ϴ� ���Ϸ� ���� �� �Է��ϸ� main�Լ����� ó����

int main()
{
	FILE* inFile = fopen("data.txt", "r");

	int i = 0, cnt = 0, value = 0;
	int cntTotal = 0;
	char tmp[100] = { NULL };
	char arr[100][100] = { NULL };
	char cmp[100];

	while (fscanf_s(inFile, "%s", arr[i], 100) != EOF) {
		i++;
		value = i;
	}

	for (int i = 0; i < value; i++)
	{
		for (int j = 0; j < value - 1; j++)
		{
			if (strcmp(arr[j], arr[j + 1]) >= 0)
			{
				strcpy(tmp, arr[j]);
				strcpy(arr[j], arr[j + 1]);
				strcpy(arr[j + 1], tmp);
			}
		}
	}

	for (int i = 0; i < value; i++)
	{
		strcpy(cmp, arr[i]);
		if (strcmp(cmp, arr[i + 1]) != 0)
		{
			printf("%s(%d) ", cmp, cnt);
			strcpy(cmp, arr[i + 1]);
			cntTotal += cnt;
			cnt = 1;
		}
		else
		{
			cnt++;
		}
	}
	printf("\n\nThe total >> %d", cntTotal);
}