//1----2----3----4
//5----6-----7
// 8---9
// 10

above are the 4 graphs but we cannot traverse each of them.
So for everytime of traversal we use the a visited array.


for(int i=1 -----> 10){
    if(!vis[i]){
        traversal(i);
    }
}
