//223. Rectangle Area

class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int l1=abs(ax2-ax1);
        int b1=abs(ay2-ay1);
        int l2=abs(bx2-bx1);
        int b2=abs(by2-by1);
        
        int left=max(ax1,bx1);
        int right=min(ax2,bx2);
        int bottom=max(ay1,by1);
        int top=min(ay2,by2);
        // cout<<bD<<" "<<lD;
        
        if(right>left && top>bottom){
            return l1*b1 + l2*b2 - (right-left) *(top-bottom);
        }
        else{
            return l1*b1 + l2*b2;
        }
        // cout<<l1*b1<<" "<<l2*b2<<" "<<lD*bD;
        
    
        
    }
};