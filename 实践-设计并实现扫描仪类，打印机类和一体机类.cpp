#include<iostream>
#include<vector>
#include<string>
using namespace std;
class PoweredDevice{
public:
	static int num_powereddevice;//all share the one counter
	string type_name;//to recognize the type of the address when releasing the memory
	PoweredDevice(){
        type_name = "PoweredDevice"; 
    }
    virtual ~PoweredDevice() {} 
};
int PoweredDevice::num_powereddevice=0;//defined in the class and initialized out the class
class Scanner:virtual public PoweredDevice{//must use the virtual when inherite the shared one
public:
	static int num_scanner;
	//vector<Scanner>*ptr_scanner=&scanner; u shouldnt get the address before define it
	Scanner(){
        type_name = "Scanner"; 
    }
};
int Scanner::num_scanner=0;
class Printer:virtual public PoweredDevice{
public:
	static int num_printer;
	Printer(){
        type_name = "Printer"; 
    }
};
int Printer::num_printer=0;
class Copier:public Scanner,public Printer{
public:
	static int num_copier;
	Copier(){
        type_name = "Copier"; 
    }
};
int Copier::num_copier=0;
int main()
{
	string op;
	vector<PoweredDevice*>ptr_array;
	//PoweredDevice poweredDevice;
	//Scanner scanner;
	//Printer printer;
	//Copier copier;
	while(cin>>op){
		if(op=="s"){
			PoweredDevice::num_powereddevice++;
			Scanner::num_scanner++;
			//cannot create the object to count cuz its not shared
			//scanner.num_scanner++;
			//poweredDevice.num_powereddevice++;
			//powereddevice.push_back(Scanner);
			ptr_array.push_back(new Scanner());
			//it means that "Scanner" is a Scanner,not Scanners
			//when u new a Scanner,first an object of Scanner is created,then it returns the address of this object to u,and the type of this address is Printer*
			cout<<"A new PoweredDevice is constructed."<<endl;
			cout<<"There are "<<PoweredDevice::num_powereddevice<<" PoweredDevices in total."<<endl;
			cout<<"A new Scanner is constructed."<<endl;
			cout<<"There are "<<Scanner::num_scanner<<" Scanner in total."<<endl;
		}
		else if(op=="p"){
			Printer::num_printer++;
			PoweredDevice::num_powereddevice++;
			ptr_array.push_back(new Printer());
			cout<<"A new PoweredDevice is constructed."<<endl;
			cout<<"There are "<<PoweredDevice::num_powereddevice<<" PoweredDevices in total."<<endl;
			cout<<"A new Printer is constructed."<<endl;
			cout<<"There are "<<Printer::num_printer<<" Printer in total."<<endl;
		}
		else if(op=="c"){
			PoweredDevice::num_powereddevice++;
			Scanner::num_scanner++;
			Printer::num_printer++;
			Copier::num_copier++;
			ptr_array.push_back(new Copier());
			cout<<"A new PoweredDevice is constructed."<<endl;
			cout<<"There are "<<PoweredDevice::num_powereddevice<<" PoweredDevices in total."<<endl;
			cout<<"A new Scanner is constructed."<<endl;
			cout<<"There are "<<Scanner::num_scanner<<" Scanner in total."<<endl;
			cout<<"A new Printer is constructed."<<endl;
			cout<<"There are "<<Printer::num_printer<<" Printer in total."<<endl;
			cout<<"A new Copier is constructed."<<endl;
			cout<<"There are "<<Copier::num_copier<<" Copiers in total."<<endl;
		}
		else if(op=="e"){
			cout<<"The devices are: "<<endl;
            for(int i = 0; i < ptr_array.size(); i++){
                cout<<ptr_array[i]->type_name<<endl;
            }//the ptr is "named after" the parent class,but it points to indidual objects of each subclass
		}
    }
    //release the memory
    for(int i=0;i<ptr_array.size();i++){
      	delete ptr_array[i];
	} 
	return 0;
}