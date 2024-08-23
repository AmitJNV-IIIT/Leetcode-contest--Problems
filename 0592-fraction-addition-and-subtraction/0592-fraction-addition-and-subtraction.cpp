class Solution {
public:
    string fractionAddition(string expression) {
      stringstream ss(expression);
        char op;
        int a,b,c,d;
        int num,den;
        ss>>a;ss>>op;ss>>b; //extracting the 1st 2 numbers
        while(ss>>c) //til we have the number
        {
            ss>>op; // op is the operator. which is '/' in our case
            ss>>d;
            num= a*d + b*c;
            den= b*d;
            a= num/__gcd(abs(num),abs(den));
            b= den/__gcd(abs(num),abs(den));
        }
        c=__gcd(abs(a),abs(b));
        a=a/c;
        b=b/c;
        return to_string(a)+'/'+to_string(b);  
    }
};//Stringstream is the easiest solution when signs and different numbers are to be extracted from a string. The advantage is that it automatically includes the '+' or '-' sign.
// We maintain 'a' as our numerator and 'b' as our denominator throughout the process. So a/b + c/d can be written as (ad+bc)/(bd) . Divide that by gcd to reduce it into smallest fraction.