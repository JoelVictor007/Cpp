#include<iostream>
using namespace std;

class Consumer{
    int ItemID[100];
    int ItemPrize[100];
    int counter;
    public:
    void initcounter(){counter=1;}
    void SetPrize(void);
    void Display(void);

};
void Consumer :: SetPrize(void){
    cout<<"Enter the ID of product no.: "<<counter<<endl;
    cin>>ItemID[counter];
    cout<<"Enter the prize of product no.: "<<counter<<endl;
    cin>>ItemPrize[counter];
    counter++;
}
void Consumer :: Display(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The no."<<counter<<"Product of your list has an ItemID "<<ItemID<<" with a Prize of "<<ItemPrize<<endl;
    }
}
int main(){
    Consumer Joel;
    Joel.initcounter();
    Joel.SetPrize();
    Joel.SetPrize();
    Joel.SetPrize();
    Joel.Display();
}
    

