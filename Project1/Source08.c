//#include "Header.h"
//
////반복문 for문
//int main()
//{
//	for(int i = 1; i <= 10; i++)
//	{
//		printf("안녕하세요.\n");
//	}
//	//1. int i = 1; 최초 실행
//	//2. i <= 10;의 조건에 따라 작업을 진행합니다.
//	//2-1. i <= 10;이 만족한다면 아래에 설계한 코드를 실행합니다.
//	//2-2. 설계한 코드의 작업이 끝났다면 i++에 의해 i를 1 증가시킵니다.
//	//     이 작업을 i <= 10;이 만족하지 않을 때까지 반복합니다.(2-1 ~ 2-2)
//	//3. i <= 10이 만족하지 않는 경우 작업 종료
//	//printf("%d", i); //for문 안에서 만들어준 int i는 for문이 끝나면 사라집니다.
//
//	//2. 이중 for문(for문 안에 for문이 있는 형태)
//	for (int i = 1; i <= 5; i++)
//	{
//		for (int j = 1; j <= 5; j++)
//		{
//			printf("ㅁ");
//		}
//		printf("\n"); //안의 for문 끝날 때마다 띄어쓰기 진행
//	}
//	//1. int i = 1; 실행
//	//2. i <= 5; 조건 확인
//	//2-1.  내부 for문 실행
//	//         1. int j = 1; 실행
//	//         2. j <= 5; 확인
//	//		   2-1. 조건 맞으면 printf("ㅁ");
//	//		   2-2. j++ 실행
//	//		   3. j <= 5 조건 안맞으면 종료
//	//2-2. printf("\n") 실행
//	//2-3. i++
//	//     2 ~ 2-3까지의 과정을 i <= 5의 조건을 만족하지 않을 때까지 반복
//	//>>  i 1번 당 j가 5번 반복하는 코드 
//
//
//	//3. 반복문에 특정 제어문을 작성하는 경우
//	//3-1. if문(반복 중에서 조건에 맞는 작업만 진행할 수 있습니다.)
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)//2의 배수인 조건 , 짝수인 조건
//		{
//			printf("%d ", i);
//		}
//	}
//	//3-2. continue
//	//반복문을 건너뛰는 기능을 가지고 있습니다. continue 다음 동작을 실행하지 않고
//	//다음 반복의 차례로 넘기는 용도
//	for (int i = 1; i <= 5; i++)
//	{
//		if (i == 3)
//		{
//			continue;
//			printf("i가 3입니다.\n"); //continue 아래의 문장은 실행되지 않습니다!
//		}
//		printf("i = %d\n", i);
//	}
//	//i = 1
//	//i = 2
//	//i = 4
//	//i = 5
//	//3-3. break
//	//반복문의 작업을 종료하는 명령어입니다.
//	for (int i = 1; i <= 5; i++)
//	{
//		if (i == 3)
//		{
//			break;
//			printf("i가 3입니다.\n"); 
//		}
//		printf("i = %d\n", i);
//	}
//	return 0;
//}