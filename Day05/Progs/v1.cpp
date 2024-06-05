#include <iostream>
#include <vector>
#include <exception>
#include <iterator>


using namespace std;

int main()
{

    /*
	vector<int> arr(30,20);
	vector<int> arr1 {1,2,3,4,5};

	cout<<arr[2]<<endl;
	cout<<arr.size()<<endl;
	// cout<<arr.capacity()<<endl;
	cout<<arr1[2]<<endl;
	cout<<arr1.size()<<endl;
	// cout<<arr1.capacity()<<endl;
    */

   vector<int> v1 ;
   v1.push_back(10);
   cout<<v1.size()<<endl;
   cout<<v1.capacity()<<endl;
   v1.push_back(20);
   cout<<v1.size()<<endl;
   cout<<v1.capacity()<<endl;
   v1.push_back(30);
   cout<<v1.size()<<endl;
   cout<<v1.capacity()<<endl;
   v1.push_back(40);
   cout<<v1.size()<<endl;
   cout<<v1.capacity()<<endl;

    v1.push_back(50);
   cout<<v1.size()<<endl;
   cout<<v1.capacity()<<endl;

    vector<int>v2 (10,100);
   cout<<v2.size()<<endl;
   cout<<v2.capacity()<<endl;
   v2.push_back(200);
   cout<<v2.size()<<endl;
   cout<<v2.capacity()<<endl;


    cout<<v1.front()<<endl;

    cout<<"List is "<<endl;

    for(int val:v1)
    {
        cout<<val<<endl;
    }

    cout<<"using iterator"<<endl;
    vector<int>::iterator it;
    it = v1.begin();
    do{
    cout<<*it<<endl;
    it++;
    }while(it!= v1.end())
	
}
