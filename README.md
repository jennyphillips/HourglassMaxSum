<h1>#HourglassMaxSum</h1>
Given a 2D Array, <b>A</b> 

<b>1 1 1 0 0 0<br>
0 1 0 0 0 0<br>
1 1 1 0 0 0<br>
0 0 0 0 0 0<br>
0 0 0 0 0 0<br>
0 0 0 0 0 0<br></b>

We define an hourglass in <b>A</b> to be a subset of values with indices falling in this pattern in <b>A</b>'s graphical representation:<br>

<b>a b c<br>
  &nbsp;&nbsp;&nbsp;d<br>
e f g<br></b>

There are <b>16</b> hourglasses in <b>A</b>, and an hourglass sum is the sum of an hourglass' values.

<h2><i>Task</i></h2>
Calculate the hourglass sum for every hourglass in <b>A</b>, then print the maximum hourglass sum.

<h2><i>Input Format</i></h2>

There are lines <b>6</b> of input, where each line contains <b>6</b> space-separated integers describing 2D Array <b>A</b>; every value in <b>A</b> will be in the inclusive range of <b>-9</b> to <b>9</b>.

<h2><i>Constraints</i></h2><br>
<b>-9 &nbsp;&le;&nbsp; A[i][j] &nbsp;&le;&nbsp; 9<br>
0 &nbsp;&le;&nbsp; i,j &nbsp;&le;&nbsp; 5<br></b>

<h2><i>Output Format</i></h2>

Print the largest (maximum) hourglass sum found in <b>A</b>. 
