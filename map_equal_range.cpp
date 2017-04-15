#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
void main(){
  map<int,char*> mapA;
  mapA[1] = "asd";
  mapA[2] = "qwe";
  mapA[1] = "qwasdae";
  map<int,char*>::iterator itA = mapA.begin();
  while(itA != mapA.end()){
    cout<< itA->first << "--->" << itA->second << endl;
    itA++;
  }
  pair<map<int,char*>::iterator,map<int,char*>::iterator> pA;
  pA = mapA.equal_range(1);
  map<int,char*>::iterator theMap;
  for(theMap = pA.first;theMap != pA.second;theMap++){
  	cout<<"theMap-->("<<theMap->first<<",\""<<theMap->second<<"\")"<<endl;
  }
  cout<<"pA.second-->"<<pA.second->first<<",\""<<pA.second->second<<"\")"<<endl;
  
  vector<int> vcA;
  vector<int>::iterator itVa = vcA.begin();
  
  pair<vector<int>::iterator,vector<int>::iterator> pB;
  vcA.push_back(1);
  vcA.push_back(3);
  vcA.push_back(5);
  vcA.push_back(7);
  vcA.push_back(9);
  vcA.push_back(1);
  vcA.push_back(11);
  sort(vcA.begin(),vcA.end());
  pB = equal_range(vcA.begin(),vcA.end(),1);
  
  vector<int>::iterator theVc;
  for (theVc = pB.first ; theVc != pB.second ; theVc++){
  	cout<<"num: "<< *theVc<<endl; 
  }
}
