#include <iostream>
using namespace std;
class CountOfCats {
private:
    int count;
    string testString;
public:
    void getVal() {
        cout << this->count << this->testString;
    }
    int setVal(int v){
        return this->count = v;
    }
    void ifCount() {
        if (this->count>10) {
            cout << "Cats count more than 10. You're not old enough yet";
        }
        else if (this->count == 10) {
            cout << "Cats count equal 10. You`re old women";
        }
        else {
            cout << "Cats count less thenl 10. You`re old women";
        }
    }

};
int main()
{
    CountOfCats c;
    int num;
    cout << "Enter Your cats count: "; 
    cin >> num;
    c.setVal(num);
    c.getVal();
    cout << endl;
    c.ifCount();

}
