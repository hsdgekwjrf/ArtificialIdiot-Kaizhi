#include <fstream>
#include <iostream>
#include "b1.h"
//#include "json.hpp"
//#include <cmath>
using std::clog;
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::ifstream;
using std::ofstream;

void read_f_file(string name){
	ifstream f_file;
	f_file.open(name);
	for(int i=1;i<=1000;i++){
			f_file >> *f_value[i];
	}
}

void write_f_file(string name){
	ofstream f_file;
	f_file.open(name);
	for(int i=1;i<=1000;i++){
			f_file << *f_value[i] << endl;
	}
}

void read_d_file(string name){
	ifstream d_file;
	d_file.open(name);
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			d_file >> datas[i][j];
		}
	}
}

int main(){
	clog<<"Loading net...\n";
	load();
	clog<<"Loaded.\n";
	for(;;){
		string cmd;
		cout<<">";
		cin>>cmd;
		if(cmd == "f_read"){
			string name;
			cin>>name;
			read_f_file(name);
		}
		else if(cmd == "f_write"){
			string name;
			cin>>name;
			write_f_file(name);
		}
		else if(cmd == "d_read"){
			string name;
			cin>>name;
			read_d_file(name);
		}
		else if(cmd == "cat_d"){
			for(int i=1;i<=9;i++){
				for(int j=1;j<=9;j++){
					cout<<datas[i][j]<<" ";
				}
				cout<<endl;
			}
		}
		else if(cmd == "run"){
			run();
			cout<<"Output:"<<return_output;
		}
		else if(cmd == "training"){
			long long t_i;
			int max;
			double step,answer;
			cin>>step>>answer>>t_i>>max;
			for(long long i=1;i<=t_i;i++){
				training(step,answer,max);
				run();
				cout<<"Training "<<i<<" Result:"<<return_output<<endl;
				step = -step;
			}
		}
		else{
			cout<<"[ERR] Command Not Found Error"<<endl;
		}
		cout<<endl;
	}
}