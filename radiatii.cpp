//declaring libraries that I need   
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h> //system("CLS");
using namespace std;
int n,m,i,j;
//function show condition 1
char showCondition1()
{
	cout<<"Actualizeaza(prin substituire in fisierul de intrare) continutul zonelor"<<endl;
	cout<<"de pe perimetrul(marginea) terenului;";	
}
//function show condition 2
char showCondition2()
{
	cout<<"Exclude din planul terenului un rind/o coloana(marginal); pozitia rindului(nord/sud)"<<endl;
			cout<<"/coloanei(vest/est) de exclus se va preciza de la tastatura";
			cout<<endl;	
}
//function show condition 3
char showCondition3()
{
	cout<<"Determina indicii liniilor ce contin zone cu doza maximala de poluare"; 	
}
//function show condition 4
char showCondition4()
{
	cout<<"Inscrie in tabloul liniar B[1...m], in ordinea ascendenta valorile /Dij/; datele se vor"<<endl;
			cout<<"sorta prin metoda numarului";	
}
//function show condition 5
char showCondition5()
{
	cout<<"Determina doza medie de radiatie pe zonele intregului teren in studiu";	
}
//function show condition 6
char showCondition6()
{
	cout<<"Creeaza fisieul text ImparLin.txt in care se vor transcrie liniile impare ale fisierului de intrare"<<endl;
			cout<<"Radiatii.in";	
}
//function show condition 7
char showCondition7()
{
	cout<<"Determina nr de patratele trasate pe diagonala terenului in studiu";	
}
//function show condition 8
char showCondition8()
{
	cout<<"Rezolva problema: Un cercetator trebuie sa ajunga din zona [1,1] in zona [n,m]"<<endl;
			cout<<"a terenului poluat in studiu. Trecerea dintr-un patratel in altul se poate efectua numai prin laturile"<<endl;
			cout<<"adiacente. Este cunoscut faptul ca la parcurgerea patratelului [i,j] cercetatorul va primi o doza de radiatie de Dij"<<endl;
			cout<<"unitati, doza totala reprezentind suna dozelor patratelelor parcurse. Alegind diferite drumuri, cercetatorul ar putea "<<endl;
			cout<<"minimiza doza totala"<<endl;
			cout<<"Elaborati un subprogram ce calculeaza doza totala minimia";	
}
int main()
{
		string line;
		
		
		
    //create file and equals it to variable: "myfile"
	        
	        
	        
		ifstream myfile;
            myfile.open("Radiatii.in.txt",ios::in);	 

		ofstream myfileOff;
			myfileOff.open("ImparLin.txt",ios::out);
			
			 	
            //check if file is opened and read it
            if (myfile.is_open())
                 {
                    	myfile>>n; //read from the file
                        	myfile>>m; //also read from file
                        		cout<<n<<" "<<m<<endl;//print n & m variables
                        			cout<<endl;
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
            //read from file matrixrix
			int matrix[n][m];
  				for (int i = 0; i < n; i++) {
    				for (int j = 0; j < m; j++){
      					myfile >> matrix[i][j];}	}
  							for (int i = 0; i < n; i++) {
		cout << "|";	//just for beautifullness
    						for (int j = 0; j < m; j++){
    		if(j>0) cout << " ";
      			cout << matrix[i][j];
      				if(j==m-1) cout << "|";}
    					cout << endl;}

/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/					   
char show, ch, line[75], printCondition, rowColumn, ex2;
		int varFor1Time, sum=0, chosenNumber, poz, c, value, pozition, maxElement=0;
			float media;
		
		cout<<endl;
			cout<<"Aceste sunt matricea cu care va propun sa facem citeva operatii: "<<endl;
				cout<<"Alegeti unul din punctele de la 1 la 8: "<<endl;
					cout<<endl;	
						cin>>value;
					if(value == 1){
						cout<<"Samuel";
					}
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/					   
			if(value == 2){
		cout<<"Dati pozitia rindului/coloanei care va fi eliminata:"<<endl;
		cout<<"Nord=1/Sud=2/Vest=3/Est=4"<<endl;
			cin>>pozition;
				if(pozition==1){
					for (int i = 0; i < n; i++) {
    				for (int j = 0; j < m; j++){
      					myfile >> matrix[i][j];}	}
  							for (int i = 1; i < n; i++) {
							  cout << "|";//just for beautifullness
    						for (int j = 0; j < m; j++){
    			if(j>0) cout << " ";
      				cout << matrix[i][j];
      					if(j==m-1) cout << "|";}
    						cout << endl;}
									
				}else if(pozition==2){
					for (int i = 0; i < n; i++) {
    				for (int j = 0; j < m; j++){
      					myfile >> matrix[i][j];}	}
  							for (int i = 0; i < n-1; i++) {
								cout << "|";//just for beautifullness
    						for (int j = 0; j < m; j++){
    			if(j>0) cout << " ";
      				cout << matrix[i][j];
      					if(j==m-1) cout << "|";}
    						cout << endl;}
					
				}else if(pozition==3){
					for (int i = 0; i < n; i++) {
    				for (int j = 0; j < m; j++){
      					myfile >> matrix[i][j];}	}
  							for (int i = 0; i < n; i++) {
								cout << "|";//just for beautifullness
    						for (int j = 1; j < m; j++){
    			if(j>0) cout << " ";
      				cout << matrix[i][j];
      					if(j==m-1) cout << "|";}
    						cout << endl;}
					
				}else if(pozition==4){
					for (int i = 0; i < n; i++) {
    				for (int j = 0; j < m; j++){
      					myfile >> matrix[i][j];}	}
  							for (int i = 0; i < n; i++) {
								cout << "|";//just for beautifullness
    						for (int j = 0; j < m-1; j++){
    			if(j>0) cout << " ";
      				cout << matrix[i][j];
      					if(j==m-1) cout << "|";}
    						cout << endl;}	
				}};				
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/					   
			if(value == 3){
				for (int i = 0; i < n; i++) {
    				for (int j = 0; j < m; j++){
      					myfile >> matrix[i][j];}	}
  							for (int i = 0; i < n; i++) {
    						for (int j = 0; j < m; j++){
    				if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
				poz=i;}
      					}}	
				cout<<"Elementul maxim este: "<<maxElement<<" pe rindul al: "<<poz<<endl;
				
			}
							
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/					   
       
	   		if(value == 4){
				
				cout<<"Doza medie de radiatie: "<<media<<endl;
				
			}
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/					   
	   		if(value == 5){
				for (int i = 0; i < n; i++) {
    				for (int j = 0; j < m; j++){
      					myfile >> matrix[i][j];}	}
  							for (int i = 0; i < n; i++) {
    						for (int j = 0; j < m; j++){
    				sum= sum+matrix[i][j]; 
                
				}
      					}	
      					media=sum/(n*m);
				cout<<"Doza medie de radiatie: "<<media<<endl;
				
			}	       
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/					   
						






/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/					   

















/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/					   
					    myfileOff.close(); //close the file
						myfile.close();    //close the file
                 }
            else {
                cout<<"ERROR! FILE NOT FOUND!"<<endl;
                 }
cin.get();
return 0;
};
