#include <iostream>

#include<string>

#include<algorithm>

#include"deque"

using namespace std;

void printD(deque<int>&d){


    for(deque<int>::iterator it = d.begin();it!= d.end();it++){


                cout<<*it<<" ";
    }

    cout<<endl;
}

void main41(){

    deque<int> d1;

    d1.push_back(1);

    d1.push_back(2);

    d1.push_back(5);

    d1.push_front(-12);

    d1.push_front(-11);

    d1.push_front(-55);

    cout<<"ͷ��Ԫ�أ� "<<d1.front()<<endl;

    cout<<"β��Ԫ�أ� "<<d1.back()<<endl;

    printD(d1);

    d1.pop_front();//ɾ��ͷ��Ԫ��


    d1.pop_back();//ɾ��β��Ԫ�ء�


    printD(d1);

    //����-33�������±��ֵ��


    deque<int>::iterator it = find(d1.begin(),d1.end(),-12);

    if(it!=d1.end()){

        cout<<"-33 �����±��ǣ�"<<distance(d1.begin(),it)<<endl;

    }else {

       cout<<"û���ҵ�ֵ"<<endl;
    }

}
int main()
{


    main41();

    return 0;
}

