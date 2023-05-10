#pragma once
#include <cstdio>
const int MAX_STACK_SIZE = 20; // ������ �ִ� ũ�� ����
class ArrayStack
{
	int top; // ����� ����
	int data[MAX_STACK_SIZE]; // ����� �迭
public:
	ArrayStack() { top = -1; } // ���� ������
	~ArrayStack() {} // ���� �Ҹ���
	bool isEmpty() { return top == -1; }
	bool isFull() { return top == MAX_STACK_SIZE - 1; }
	void push(int e) { // �� ���� �׸� ����
		if (isFull()) printf("���� ��ȭ ����");
		else
			data[++top] = e;
	}
	int pop() { // �� ���� ��Ҹ� �����ϰ� ��ȯ
		if (isEmpty()) printf("���� ���� ����");
		return data[top--];
	}
	int peek() { // �������� �ʰ� ��� ��ȯ
		if (isEmpty()) printf("���� ���� ����");
		return data[top];
	}
	void display() { // ���� ������ ȭ�鿡 ���
		printf("[���� �׸��� �� = %2d] ==> ", top + 1);
		for (int i = 0; i <= top; i++)
			printf("<%2d>", data[i]);
		printf("\n");
	}
};