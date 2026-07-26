#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        long long xk, yk;
        cin >> xk >> yk;
        
        long long xq, yq;
        cin >> xq >> yq;
        
        // Generate all possible knight offsets (dx, dy)
        // A knight move is (a, b) or (b, a) with all sign combinations
        long long dx[8], dy[8];
        int cnt = 0;
        
        long long moves[2][2] = {{a, b}, {b, a}};
        
        for (int m = 0; m < 2; m++) {
            long long da = moves[m][0];
            long long db = moves[m][1];
            
            for (int sx = -1; sx <= 1; sx += 2) {
                for (int sy = -1; sy <= 1; sy += 2) {
                    long long newDx = sx * da;
                    long long newDy = sy * db;
                    
                    // Check if this offset is already in our list (avoid duplicates when a == b)
                    bool alreadyExists = false;
                    for (int i = 0; i < cnt; i++) {
                        if (dx[i] == newDx && dy[i] == newDy) {
                            alreadyExists = true;
                            break;
                        }
                    }
                    
                    if (!alreadyExists) {
                        dx[cnt] = newDx;
                        dy[cnt] = newDy;
                        cnt++;
                    }
                }
            }
        }
        
        // Now compute the squares that attack the king
        long long kingX[8], kingY[8];
        for (int i = 0; i < cnt; i++) {
            kingX[i] = xk + dx[i];
            kingY[i] = yk + dy[i];
        }
        
        // Compute the squares that attack the queen
        long long queenX[8], queenY[8];
        for (int i = 0; i < cnt; i++) {
            queenX[i] = xq + dx[i];
            queenY[i] = yq + dy[i];
        }
        
        // Count how many squares appear in both lists
        int answer = 0;
        for (int i = 0; i < cnt; i++) {
            for (int j = 0; j < cnt; j++) {
                if (kingX[i] == queenX[j] && kingY[i] == queenY[j]) {
                    answer++;
                    break; // found a match, move to next king square
                }
            }
        }
        
        cout << answer << "\n";
    }
    
    return 0;
}