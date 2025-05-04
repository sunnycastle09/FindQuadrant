#include <iostream>

void Plus_Minus(int* num) {  // 양수 0, 음수 1로 설정
    if (num[0]>0)
        num[1] = 0;  // 양수
    else
        num[1] = 1;  // 음수
}
    
int main() {
    int a[2], b[2];
    std::cin >> a[0] >> b[0];  // 입력 받기

    Plus_Minus(a);  // a 배열 처리
    Plus_Minus(b);  // b 배열 처리

    if ((a[1] == 0) && (b[1] == 0))
        std::cout << 1;
    else if ((a[1] == 0) && (b[1] != 0))
        std::cout << 4;
    else if ((a[1] != 0) && (b[1] == 0))
        std::cout << 2;
    else
        std::cout << 3;

}
