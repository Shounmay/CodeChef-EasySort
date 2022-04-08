<h1 align='center'><u><b> Min-Swap Required to Sort/Easy-Sort(CC)</b> </u></h1>

<h2> <u>Problem Link:</u> https://www.codechef.com/problems/COQ01</h2>

<h1 ><u> Idea Used: </u></h1>

## In this we can sort the original array and to bring back sorted array to original array , the number of swaps required is our answer. So we maintain a vector of pairs of elements with their index in original, then sort the elements and check if their present index match with their original position index or not. If not then swap it and continue the process till all elements get their original positions.

<h1 ><u> Time and Space Analysis </u></h1>

## Time-Complexity: O(N)

## Space-Compexity: O(N)
