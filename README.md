<h1>#HourglassMaxSum</h1>
<h2>Task</h2>
    Calculate the hourglass sum for every hourglass in <b>A</b>, then print the maximum hourglass sum.
<h2>Input Format</h2>
    There are 6 lines of input, where each line contains 6 space-separated integers describing 2D Array <b>A</b>, every value in <b>A</b> will be in the inclusive range of -9 to 9.
<h2>Constrains</h2>
    &#8226; -9 &le; A&#91;i&#93; &#91;j&#93; &le; 9<br>
    &#8226; 0 &le; ij &le; 5        
<h2>Output Format</h2>
    Print the largest (maximum) hourglass sum found in <b>A</b>.
<h2>Sample Input</h2>
    &nbsp; 1 1 1 0 0 0<br>
    &nbsp; 0 1 0 0 0 0<br>
    &nbsp; 1 1 1 0 0 0<br>
    &nbsp; 0 0 2 4 4 0<br>
    &nbsp; 0 0 0 2 0 0<br>
    &nbsp; 0 0 1 2 4 0<br>
<h2>Sample Output</h2>
    &nbsp; 19
<h2>Explanation</h2>
    A contains the following hourglasses:<br>
&emsp; 1 1 1 &emsp; 1 1 0 &emsp; 1 0 0 &emsp; 0 0 0<br>
&emsp;&emsp; 1 &emsp;&emsp; 0 &emsp;&emsp;&nbsp;&nbsp;&nbsp; 0 &emsp;&emsp;&nbsp;&nbsp; 0<br>
&emsp; 1 1 1 &emsp; 1 1 0 &emsp; 1 0 0 &emsp; 0 0 0<br><br>
&emsp; 0 1 0 &emsp; 1 0 0 &emsp; 0 0 0 &emsp; 0 0 0<br>
&emsp;&emsp; 1 &emsp;&emsp;&emsp; 1 &emsp;&emsp;&nbsp;&nbsp; 0 &emsp;&emsp;&nbsp;&nbsp; 0<br>
&emsp; 0 0 2 &emsp; 0 2 4 &ensp; 2 4 4 &emsp; 4 4 0<br><br>
&emsp; 1 1 1 &emsp; 1 1 0 &emsp; 1 0 0 &ensp; 0 0 0<br>
&emsp;&emsp; 0 &emsp;&emsp; 2 &emsp;&emsp;&nbsp;&nbsp; 4 &emsp;&emsp;&nbsp; 4<br>
&emsp; 0 0 0 &ensp; 0 0 2 &ensp; 0 2 0 &ensp; 2 0 0<br><br>
&emsp; 0 0 2 &emsp; 0 2 4 &ensp; 2 4 4 &emsp; 4 4 0<br>
&emsp;&emsp; 0 &emsp;&emsp;&ensp; 0 &emsp;&emsp;&nbsp;&nbsp; 2 &emsp;&emsp;&nbsp;&nbsp; 0<br>
&emsp; 0 0 1 &emsp; 0 1 2 &emsp; 1 2 4 &emsp; 2 4 0<br><br>
The hourglass with the maximum sum (19) is:<br>
&emsp; 2 4 4<br>
&emsp;&emsp; 2<br>
&emsp; 1 2 4<br>

