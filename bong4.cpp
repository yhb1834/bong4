#include <iostream>
using namespace std;
class player{
    int money;
    
public:
    int Money(){return money;}
    void getMoney(int data){
        money += data;
    }
};

class item{
    //소모품
    int bomb, poison, medicine, gotgam, money;
    //퀘스트 아이템
    int thunder, tornado;

    int damage;
public:
    int sord = 8, bow = 7, hammer = 6, helmet = 7, armor = 8, shield = 8;
    //소모품
    void Bomb(){
        bomb += 8;
    }
    void Poison(){
        poison += 6;
    }
    void Medicine(){
        medicine += 9;
    }
    void Gotgam(){
        gotgam += 10;
    }
    void Money (int data){
        money += data;
    }
    //퀘스트 아이템
    void Thunder(){
        thunder += 2;
    }
    void Tornado(){
        tornado += 3;
    }
};

void Choose(player player, item item, int choose){
        switch (choose){
            case 1:
                if (player.Money()<300){
                    cout << "잔액이 부족합니다" << endl;
                }
                else{
                    player.getMoney(-300);
                    item.Bomb();
                }
           break;
           case 2:
               if (player.Money()<200){
                   cout << "잔액이 부족합니다" << endl;
               }
               else{
                   player.getMoney(-200);
                   item.Poison();
               }
            break;
            case 3:
                if (player.Money()<320){
                    cout << "잔액이 부족합니다" << endl;
                }
                else{
                    player.getMoney(-320);
                    item.Medicine();
                }
            break;
            case 4:
                if (player.Money()<200){
                    cout << "잔액이 부족합니다" << endl;
                }
                else{
                    player.getMoney(-300);
                    item.Gotgam();
                
                }
            break;
            case 5:
                if (player.Money()<55){
                    cout << "잔액이 부족합니다" << endl;
                }
                else{
                    player.getMoney(-55);
                    item.Thunder();
                }
                break;
            case 6:
                if (player.Money()<60){
                    cout << "잔액이 부족합니다" << endl;
                }
                else{
                    player.getMoney(-60);
                    item.Tornado();
                }
                break;
        }
}

void shop(player player, item item){
    cout << "-----------상점에 오신 것을 환영합니다-----------" << endl;
    cout << "money : " << player.Money() << endl
    << "1. 폭탄 [공격력 80] [가격 300]" << endl
    << "2. 세균 [공격력 60] [가격 200]" << endl
    << "3. 물약 [회복력 90] [가격 320]" << endl
    << "4. 곶감 [공격력 100] [가격 200] 호랑이공격에만 사용가능" << endl
    << "5. 번개 [공격력 20] [가격 55]" << endl
    << "6. 태풍 [공격력 30] [가격 60]" << endl;
    
    int choose;
    cout << "아이템을 선택하세요."<<endl;
    cin >> choose;
    Choose(player, item, choose);
    
    int more;
    cout << "더 선택하시겠습니까? [YES 1] [NO 2]"<<endl;
    cin >> more ;
    if (more == 1){
        Choose(player, item, choose);
    }
    if (more == 2){
        system("pause");
    }
}


int main() {
    player me;
    item me_item;
    shop(me, me_item);
}

