#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

  
int giatrimax(int a[], int n)
{ 
	int maxx = a[0];
    for(int i = 1; i<n; i++)
    {
    	if(maxx < a[i]) maxx = a[i];
	}
	return maxx;
} 
int giatrimin(int a[], int n)
{ 
    int minn = a[0];
    for(int i = 1; i<n; i++)
    {
    	if(minn > a[i]) minn = a[i];
	}
	return minn;
      
} 



void generateTest(int testNumber, int a[], int n) {
  string inputFilename = "test" + to_string(testNumber) + ".in";
  ofstream inputFile(inputFilename);

  
  for(int i = 0; i< n; i++)
  {
  	inputFile << a[i]<<endl;
  }
  
  int output1 = giatrimax(a,n); int output2 = giatrimin(a,n);


  string outputFilename = "test" + to_string(testNumber) + ".out";
  ofstream outputFile(outputFilename);

 
  outputFile << output1 << endl<<output2;

  
  inputFile.close();
  outputFile.close();
}

int main() {
	int n;
	srand(time(NULL)); 
	
  int numTests = 20; 
  int minInput = -30000; 
  int maxInput = 30000; 

  // Sinh test
  for (int i = 1; i <= numTests; i++) {

    n = rand() % 20 + 1;
    int a[n];
    for(int j = 0; j<n; j++)
    {
    	a[j] = rand() % (maxInput - minInput + 1) + minInput;
	}
    	
    generateTest(i, a,n); 
  }

  return 0;
}
