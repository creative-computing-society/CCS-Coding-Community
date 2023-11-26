//method 1

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mm;
        for (char i : text) mm[i] += 1;
        return min(mm['b'], min(mm['a'], min(mm['l']/2, min(mm['o']/2, mm['n']))));
    }
};

//method 2

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freq(5);
        for (char i : text){
            switch (i){
                case 'b':
                    freq[0]++;
                    break;
                case 'a':
                    freq[1]++;
                    break;
                case 'l':
                    freq[2]++;
                    break;
                case 'o':
                    freq[3]++;
                    break;
                case 'n':
                    freq[4]++;
                    break;

            }
        }

        freq[2] /= 2;
        freq[3] /= 2;

        return *min_element(freq.begin(), freq.end()); 

    }
};