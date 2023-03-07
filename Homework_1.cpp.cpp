#include <iostream>

using namespace std;
int main()
{
    float shares = 1000;
    float expense = 1000*45.5;
    float commission = expense*0.02;
    float sold = shares*56.9;
    float s_commission = sold*0.02;
    float profit = sold-(expense+commission+s_commission);

    cout<<"joe paid "<<expense<<" for his stock.\n";
    cout<<"Joe paid "<<commission<<" in commission for his stockbroker.\n";
    cout<<"Joe sold the stock for "<<sold<<std::endl;
    cout<<"Joe paid "<<s_commission<<" in commission to his stockbroker after selling.\n";
    cout<<"Joe made "<<profit<<" in profit.";
    return 0;
}