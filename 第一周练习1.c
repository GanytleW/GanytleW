#include <stdio.h>
#include <string.h>
 
void reverseString(char* str) {
    int length = strlen(str); // ��ȡ�ַ�������
    
    for (int i = 0; i <= length / 2 - 1; ++i) {
        char temp = str[i]; // ������Ӧλ���ϵ��ַ�
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
 
int main() {
    char inputStr[100]; // �����������ַ���������
    
    printf("������һ���ַ�����");
    scanf("%s", inputStr);
    
    reverseString(inputStr); // ���ú������з�ת����
    
    printf("\n�����Ľ��Ϊ��%s\n", inputStr);
    
    return 0;
}
