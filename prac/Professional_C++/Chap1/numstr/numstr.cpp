#include <iostream>

int main()
{
    using namespace std;

    cout << "지금 사시는 아파느에 어제 입주하셨습니까?\n";
    int year;
    (cin >> year).get();
    cout << "사시는 도시를 말씀해 주시겠습니까? \n";
    char address[80];
    cin.getline(address,80);
    cout << "아파트 입주 연도: " << year << endl;
    cout << "도시: " << address << endl;
    cout << "등록이 완료되었습니다.! \n";
    return 0;
}