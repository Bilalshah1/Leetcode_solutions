class Solution {
public:
    string addBinary(string a, string b) {
       long long int num1=stringToInt(a);
       long long int num2=stringToInt(b);
       long long int result=0;
       int i=0;
       while(num1!=0 || num2!=0)
       {
        result+=(num1%10)*pow(2,i)+(num2%10)*pow(2,i);
        num1/=10;
        num2/=10;
        i++;
       }

       return decimalToBinary(result);
    }

    long long int stringToInt(const std::string& str) {
    std::istringstream iss(str);
    long long int result;
    iss >> result;
    return result;
    }

    string decimalToBinary(long long int n) {
    if (n == 0) {
        return "0";
    }
    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n = n / 2;
    }
    return binary;
}
};