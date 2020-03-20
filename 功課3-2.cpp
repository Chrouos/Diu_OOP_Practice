#include<iostream>
using namespace std;
int times(int C8[]);
int main(){
	
	int C8[4]={},total=0,counter=0;
	for(int i=0; i<4;i++){
		cin>>C8[i];
	} //input
	
	if( C8[0]==C8[1] && C8[0]==C8[2] && C8[0]==C8[3]){
		cout<<"WIN"; //全都依樣 
		return 0;
	} 	
	
	if(C8[0]==C8[1] && C8[0]==C8[2] || C8[0]==C8[2] && C8[0]==C8[3] || C8[0]==C8[1] && C8[0]==C8[3] || C8[1]==C8[2] && C8[1]==C8[3]  ){
		cout<<"LOSE";
		return 0;
	}
		
	if( C8[0]!=C8[1] && C8[0]!=C8[2] && C8[0]!=C8[3] && C8[1]!=C8[2] && C8[1]!=C8[3] && C8[2]!=C8[3]){//都不一樣 
		cout<<"LOSE"; 
		return 0; 
	} //都不一樣 
	
	for(int i=0; i<4; i++){ //兩組配對一樣 
		for(int j=i+1; j<4; j++){			
			if(C8[i]==C8[j]) counter++;
		}//for j
	}//for i
	
	for(int i=0; i<4; i++){ //兩組配對一樣 
		for(int j=i+1; j<4; j++){
			
			if(counter==2){ 
				if( C8[i]+C8[j]==12){
					cout<<"EIGHTEEN R";	
					return 0;
				}
			}
		}//for j
	}//for i	
	
	for(int i=0; i<4; i++){ //兩組配對一樣 
		for(int j=i+1; j<4; j++){
			
			if(counter==2){ 			
				if(C8[i]>C8[j]){
					cout<<C8[i]*2;
					return 0;		
				}//if	
			}//if 	
		}//for j
		if(counter==2){ 
			if(i==3){
				cout<<C8[3]*2;
				return 0;
			}
		}
	}//for i	
	
	

	for(int i=0; i<4; i++){ //只有一組   
		for(int j=i+1; j<4; j++){
			
			if(C8[i]==C8[j]){
				C8[i]=0;
				C8[j]=0;
				for(int k=0; k<4; k++){
					total+=C8[k];
				}//for k
				if(total==3){
					cout<<"BG R";
					return 0;	
				}
				else{
					cout<<total;
					return 0;
				}		
			}//if	
		}//for j
	}//for i		
	

	

} //main
