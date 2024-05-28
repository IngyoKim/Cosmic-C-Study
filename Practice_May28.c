#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

//동적할당
//A = (int*)malloc(sizeof(int)*4); -> arr[n]에서 n을 입력받고 싶을 떄 사용

//free(A) -> 메모리 누수 방지  & 연결리스트에서 cur이 가르키고 있는거 free(cur)로 삭제 가능 
//node* newnode = (node*)malloc(sizeof(node) * 4) 

//파일 입출력
//fopen으로 선언 후 fclose로 연결 해제

//명령형인자 -> 파일 이름을 인자로 받아 해당 파일을 읽어오고 싶을 때
// int argc 메인 함수에 전달되는 정보의 개수
// char *argv[] argc로 받는 정보가 포함되어 있는 메인 함수에 전달되는 실질적인 메모리 정보 -> 문자열 배열임
// argv[0]에는 파일 이름 저장 argv[1]부터 추가적인 정보를 입력받음
// CMD에서 cd를 통해 원하는 파일로 접속 후 입력하면 main함수에서 처리됨

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