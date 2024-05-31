
class Solution {
public:
    string intToRoman(int num) {
        unordered<int,string> map;
        string Roman="";
        int max=0;
        map[1] = "I";
        map[4] = "IV";
        map[5] = "V";
        map[9] = "IX";
        map[10] = "X";
        map[40] = "XL";
        map[50] = "L";
        map[90] = "XC";
        map[100] = "C";
        map[400] = "CD";
        map[500] = "D";
        map[900] = "CM";
        map[1000] = "M";
        while(num!=0)
        {
            for(auto & pair: map)
            {
                if(num>=pair.first){
                    max=pair.first;
                }
            }
            Roman+=map[max];
            num-=max;
        }
}
};
