#pragma once
#include <cstdio>
const int MAX_STACK_SIZE = 20; // 스택의 최대 크기 설정
class ArrayStack
{
	int top; // 요소의 개수
	int data[MAX_STACK_SIZE]; // 요소의 배열
public:
	ArrayStack() { top = -1; } // 스택 생성자
	~ArrayStack() {} // 스택 소멸자
	bool isEmpty() { return top == -1; }
	bool isFull() { return top == MAX_STACK_SIZE - 1; }
	void push(int e) { // 맨 위에 항목 삽입
		if (isFull()) printf("스택 포화 에러");
		else
			data[++top] = e;
	}
	int pop() { // 맨 위의 요소를 삭제하고 반환
		if (isEmpty()) printf("스택 공백 에러");
		return data[top--];
	}
	int peek() { // 삭제하지 않고 요소 반환
		if (isEmpty()) printf("스택 공백 에러");
		return data[top];
	}
	void display() { // 스택 내용을 화면에 출력
		printf("[스택 항목의 수 = %2d] ==> ", top + 1);
		for (int i = 0; i <= top; i++)
			printf("<%2d>", data[i]);
		printf("\n");
	}
};