// Add documentation for each function

#include <iostream>
#include <fstream>
    
class MyTime
{   
	public:

		// CONVERT THESE CONSTRUCTORS INTO A SINGLE CONSTRUCTOR THAT USES 
		// DEFAULT ARGUMENTS
		MyTime(int h = 0, int m = 0){
			this->hours = h;
			this->minutes = m;	
		}


		void Reset(int h, int m);

		void input(std::istream& ins);            

		void output(std::ostream& outs) const;

		
		// Friend functions removed and CONST added to ensure left hand operand/object is not changed.
		MyTime operator + (const MyTime& t2) const;
		//friend MyTime operator + (const MyTime& t1, const MyTime& t2) const;
	
		MyTime operator - (const MyTime& t2) const;
	
		MyTime operator * (int num) const;

		MyTime operator / (int num) const;

		bool operator == (const MyTime& t2) const;

		bool operator < (const MyTime& t2) const;

		bool operator <= (const MyTime& t2) const;
   
  	private:
		void simplify();
		int hours;        // hours can be > 24
		int minutes;      // 0 <= minutes <= 59
 };
//Does what << and >> operands did, except now it doesn't need a 
//time passed in and will read from the input file passed in

		//No const for input because change is needed for t1 object
		std::istream& operator >>(std::istream& ins, MyTime& t1);
		// Const for MyTime and & reference
		std::ostream& operator <<(std::ostream& outs, const MyTime& t1);

