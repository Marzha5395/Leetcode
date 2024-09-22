class Solution {
    map<int, string> numberToRoman = {
    {0,""}, {1, "I"}, {2, "II"}, {3, "III"}, {4, "IV"}, {5, "V"}, {6, "VI"}, {7, "VII"}, {8, "VIII"}, {9, "IX"},
    {10, "X"}, {20, "XX"}, {30, "XXX"}, {40, "XL"}, {50, "L"}, {60, "LX"}, {70, "LXX"}, {80, "LXXX"}, {90, "XC"},
    {100, "C"}, {200, "CC"}, {300, "CCC"}, {400, "CD"}, {500, "D"}, {600, "DC"}, {700, "DCC"}, {800, "DCCC"}, {900, "CM"},
    {1000, "M"}, {2000, "MM"}, {3000, "MMM"}, {4000, "MMMM"}, {5000, "MMMMM"}, {6000, "MMMMMM"}, {7000, "MMMMMMM"}, {8000, "MMMMMMMM"}, {9000, "MMMMMMMMM"}
};
public:
    string intToRoman(int num) {
        int a,b,c,d;
        a = (num/1000)*1000;
        b = ((num/100)%10)*100;
        c = ((num/10)%10)*10;
        d = num%10;
        string result;
        result += numberToRoman[a];
        result += numberToRoman[b];
        result += numberToRoman[c];
        result += numberToRoman[d];
        return result;
    }
};
