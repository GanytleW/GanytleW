#include <stdio.h>
#include <string.h>
 
void reverseString(char* str) {
    int length = strlen(str); // 获取字符串长度
    
    for (int i = 0; i <= length / 2 - 1; ++i) {
        char temp = str[i]; // 交换相应位置上的字符
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
 
int main() {
    char inputStr[100]; // 定义存放输入字符串的数组
    
    printf("请输入一个字符串：");
    scanf("%s", inputStr);
    
    reverseString(inputStr); // 调用函数进行反转操作
    
    printf("\n逆序后的结果为：%s\n", inputStr);
    
    return 0;
}
