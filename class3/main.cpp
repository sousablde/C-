#include <iostream>
#include <fstream>

using namespace std;
//using regular swap function
void swap(int *int1, int *int2);

//using templates
template<typename T>
T swapi(T &int1, T &int2){
    T temp = int1;
    int1=int2;
    int2=temp;
}


int main() {
    int int1=1;
    int int2=2;

    swap(int1,int2);
    cout<<"1: "<<int1<<" 2: "<<int2<<endl;
    swapi(int1,int2);
    cout<<"1: "<<int1<<" 2: "<<int2<<endl;

    ifstream fin("order.dat");
    const int SIZE=20;
    int q[SIZE];
    double price[SIZE];
    double total=0;

    if (fin.is_open()){
        for (int i=0; i<6;i++){
            fin >> q[i];
            fin >> price[i];
            total=total+(q[i]*price[i]);

        }
    }
    cout << total;
}

void swap(int *int1, int *int2){//*here are pointers
    int temp= *int1;//here we are dereferencing to get value
    *int1=*int2;
    *int2=temp;
}

