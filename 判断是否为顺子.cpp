/*决定大\小 王可以看成任何数字,并且A看作1,J为11,Q为12,K为13。上面的5张牌就可以变成“1,2,3,4,5”(大小王分别看作2和4),“So Lucky!”。LL决定去买体育彩票啦。 现在,要求你使用这幅牌模拟上面的过程,然后告诉我们LL的运气如何， 如果牌能组成顺子就输出true，否则就输出false。为了方便起见,你可以认为大小王是0。   abc*/
class Solution {
public:
    /*
满足条件 1 max - min <5
2 除0外没有重复的数字(牌)
3 数组长度 为5
*/
    bool IsContinuous( vector<int> numbers ) {
        int* time = new int [13];//记录13张牌每张牌的个数
        int len = numbers.size();
        int max=-1;
        int min = 14;
        if(len!=5) return false;
        for(int i=0;i<len;i++){
            if(numbers[i]==0) continue;
            if(numbers[i]>max) max=numbers[i];
            if(numbers[i]<min) min=numbers[i];
            time[numbers[i]]++;
            if(time[numbers[i]]>1) return false;
        }
        if(max-min<5)
            return true;
        return false;
    }
};