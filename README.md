<h1>Push Swap - Fancy List Sorting</h1>
<h2>Getting Started</h2>
<p>
To get started with this project, you will need to have a C compiler installed on your machine, as well as the make utility.
</p>
<p>The game is made up of two lists of numbers named <code>l_a</code> and <code>l_b</code>.</p>
<p>In the beginning, <code>l_b</code> will be empty and <code>l_a</code> will contain a certain amount of positive or negative numbers.</p>
<p>The objective of the game is to sort <code>l_a</code>.</p>
<p>In order to accomplish this, you will only have access to the following operation:</p>
<ul>
  <li><code>sa</code>: swap the first two elements of <code>l_a</code> (nothing will happen if there aren’t enough elements).</li>
  <li><code>sb</code>: swap the first two elements of <code>l_b</code> (nothing will happen if there aren’t enough elements).</li>
  <li><code>sc</code>: <code>sa</code> and <code>sb</code> at the same time.</li>
  <li><code>pa</code>: take the first element from <code>l_b</code> and move it to the first position on the <code>l_a</code> list (nothing will happen if <code>l_b</code> is empty).</li>
  <li><code>pb</code>: take the first element from <code>l_a</code> and move it to the first position on the <code>l_b</code> list (nothing will happen if <code>l_a</code> is empty).</li>
  <li><code>ra</code>: rotate <code>l_a</code> toward the beginning, the first element will become the last.</li>
  <li><code>rb</code>: rotate <code>l_b</code> toward the beginning, the first element will become the last.</li>
  <li><code>rr</code>: <code>ra</code> and <code>rb</code> at the same time.</li>
  <li><code>rra</code>: rotate <code>l_a</code> toward the end, the last element will become the first.</li>
  <li><code>rrb</code>: rotate <code>l_b</code> toward the end, the last element will become the first.</li>
  <li><code>rrr</code>: <code>rra</code> and <code>rrb</code> at the same time.</li>
</ul>
<h2>Installation</h2>
<ul>
    <li>Clone the repository using <code>git clone https://github.com/yourusername/push_swap.git</code></li>
    <li>Run <code>make</code> to compile the program</li>
    <li>Execute the program using <code>./push_swap arg1 arg2 ...</code>, where <code>arg1 arg2 ...</code> are the integer values to be sorted.</li>
</ul>
<h2>Usage</h2>
<p>
The program takes a list of integers as arguments and sorts them in ascending order using a series of operations on two stacks. The program outputs the series of operations to the standard output in order to sort the list.
</p>
<h3>Example:</h3>
<pre>
$> ./push_swap 2 1 3 6 5 8
sa pb pb sa pa pa pa
1 2 3 5 6 8
</pre>

<p>LinkedIn: <a href="https://www.linkedin.com/in/diana-andrades-martinez/">Diana Andrades Martínez</a></p>
<p>Mail: <a href="mailto:diana.andrades@epitech.e">diana.andrades@epitech.eu</a></p>
