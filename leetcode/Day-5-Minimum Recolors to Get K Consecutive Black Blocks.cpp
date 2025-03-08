// brute force

class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int len = blocks.length();
            int opCnt = 1000;
            int i = 0;
            while(i + k <= len){
                int temp = 0;
                for(int j = i; j < i + k; j++){
                    cout<<blocks[j];
                    if(blocks[j] == 'W'){
                        temp++;
                    }
                }
                opCnt = min(opCnt, temp);
                i++;
            }
            return opCnt;
        }
};

// sliding window (optimised)

class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int n = blocks.length();
            int opCnt = 0;
    
            for(int i = 0; i < k; i++){
                if(blocks[i] == 'W'){
                    opCnt++;
                }
            }
    
    
    
            if(opCnt == 0){
                return 0;
            }
    
            int temp = opCnt;
            int i = k;
            while(i < n){
                if(blocks[i - k] == 'W'){
                    temp--;
                }
                if(blocks[i] == 'W'){
                    temp++;
                }
                opCnt = min(opCnt, temp);
                i++;
            }
    
            return opCnt;
    
        }
    };