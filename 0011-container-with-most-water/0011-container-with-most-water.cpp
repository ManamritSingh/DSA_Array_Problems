class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int maxarea=0;
        while(i<j){
            int cr = area(height[i],height[j],i,j);
            if(cr>maxarea){
                maxarea=cr;
                if(height[i] > height[j]){
                    j--;
                }
                else{
                    i++;
                }
            }
            else{
                if(height[i] > height[j]){
                    j--;
                }
                else{
                    i++;
                }
            }
        }
        return maxarea;
    }

    int area(int h1,int h2,int id1,int id2){
        int h = min(h1,h2);
        int l = max(id1,id2) - min(id1,id2);
        return h*l;
    }
};
