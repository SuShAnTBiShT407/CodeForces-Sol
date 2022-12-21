#include<bits/stdc++.h>
using namespace std;


void dfs(vector<vector<int>>& image, int sr, int sc, int color, int row, int col, int source){

    if(sr<0 || sr>=row || sc>=col || sc<0){
        return;
    }
    else if(image[sr][sc]!=source){
        return;
    }
    image[sr][sc] = color;

    dfs(image, sr-1, sc, color, row, col, source);
    dfs(image, sr+1,  sc, color, row, col, source);
    dfs(image, sr,  sc-1, color, row, col, source);
    dfs(image, sr,  sc+1, color, row, col, source);

}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        if(color==image[sr][sc]){
            return image;
        }
        int row = image.size();
        int col = image[0].size();
        int source = image[sr][sc];
        dfs(image, sr, sc, color, row, col, source );
        return image;



}
int main(){
    vector<vector<int>> image = {{1,1,1},{1,1,0},{1,0,1}};
    int sr =1;
    int sc = 1;
    int color=2;
    floodFill(image, sr, sc ,color);
}