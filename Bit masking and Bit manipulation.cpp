//============================================================================
// Name        : Bit masking and manipulation.cpp
// Author      : Rhutvij Chiplunkar
//============================================================================

#include <iostream>

using namespace std;

/*Find i-th bit for number 'n'
 mask=i<<i
 ans=n&mask  = 0 --> bit is '0'
            != 0 --> bit is '1'
 */
void FindBit(){
	int n;
	cout<<"Enter number::";
	cin>>n;
	int b;
	cout<<"Enter bit which you want to find::";
	cin>>b;
	int mask=1<<b;  //find b-th bit

	int ans=(n&mask);
	cout<<ans<<endl;
	if(ans==0){
		cout<<"The "<<b<<"-th bit is 0"<<endl;
	}
	else{
		cout<<"The "<<b<<"-th bit is 1"<<endl;
	}
}

/* Set i-th bit for number 'n'
	set '0' to '1', keep '1' as it is
	mask=i<<i
	ans=n|mask
	if 'i' is '0' --> changes to '1'
	if 'i' is '1' --> remains '1'
	set n=n|mask
*/
void SetBit(){
	int n;
	cout<<"Enter number::";
	cin>>n;
	int b;
	cout<<"Enter bit which you want to set::";
	cin>>b;
	int msk=1<<b;

	int an=(n|msk);
	//modifies n by changing bit
	n=n|an;

	cout<<"The number n is modified to::"<<n<<endl;
}

/* Clear i-th bit for number 'n'
	clear '1' to '0', keep '0' as it is
	mask=~(i<<i)
	if 'i' is '1' --> changes to '0'
	if 'i' is '0' --> remains '0'
	set n=n&mask
*/
void ClearBit(){
	int n;
	cout<<"Enter number::";
	cin>>n;
	int b;
	cout<<"Enter bit which you want to clear::";
	cin>>b;
	int mask=~(1<<b);  //find 2nd bit

	int ans=(n&mask);
	cout<<ans<<endl;
	/*If b-th bit is 1-->ans is modified
	 			 	 0-->ans is same	*/
}

/* Find no of 1's
  do n&(n-1)
*/
 void count_1(){
	int n;
	cout<<"Enter number::";
	cin>>n;
	int count=0;
	while(n!=0){
		n=n&(n-1);
		count++;
	}
	cout<<"The number of 1's are::"<<count<<endl;
 }

/*To convert A to B
  change the bits which differ, keep others same
  take a^b & then count no of '1'

  **NO OF BITS = Log2(n)+1
 */
void no_of_bits_to_convert_numbers(){
	int a,b;
	cout<<"Enter numbers a & b:";
	cin>>a>>b;

	int n=a^b;
	int count=0;
	while(n!=0){
		n=n&(n-1);
		count++;
	}
	cout<<"The number of bits to change are::"<<count<<endl;
}


int main()
{
	cout<<"-------Find Bit-------"<<endl;
	FindBit();
	cout<<"-------Set Bit-------"<<endl;
	SetBit();
	cout<<"-------Clear Bit-------"<<endl;
	ClearBit();
	cout<<"------Find number of bits to change A to B--------"<<endl;
	no_of_bits_to_convert_numbers();
	cout<<"------Find number of 1's in a number--------"<<endl;
	count_1();
	cout<<"------------------------------"<<endl;
}

/*OUTPUT
-------Find Bit-------
Enter number::17
Enter bit which you want to find::4
16
The 4-th bit is 1
-------Set Bit-------
Enter number::14
Enter bit which you want to set::0
The number n is modified to::15
-------Clear Bit-------
Enter number::15
Enter bit which you want to clear::3
7
------Find number of bits to change A to B--------
Enter numbers a & b:0 15
The number of bits to change are::4
------Find number of 1's in a number--------
Enter number::1268
The number of 1's are::6
------------------------------
*/
 */
