# Coding Problem Test 1

## Background

Heron’s Formula is a clever method for calculating the area of a triangle. It does not require the triangle’s height to compute 
the area; instead, it requires the lengths of the three sides which are easier to find. In the formula, the sides of the triangle 
are labeled as <b>a</b>, <b>b</b>, and <b>c</b>.

<img src="Heron.png" alt="Triangle" width="250">

It is standard in geometry to denote sides in lower case letters as you can see here. In addition, we will need the semi-perimeter of 
the triangle which is simply the sum of the three sides divided by 2
The semi-perimeter is a required value in the formula.



## Directions
After accepting the coding problem, clone the repository to your virtual machine, add your solution code and test it against the correct results that match the interface prototype example shown below. Write a program that prompts the user to enter the length of the three sides of a triangle and calculate it's area using the Heron's formula:

$`area = \sqrt{s(s-a)(s-b)(s-c)}`$

WHERE:   $`s = \frac{a+b+c}{2}`$

s = semi-perimeter

## Interface Prototype Example

### Test Case 1 Output
<pre><b>Enter the length of side A: 4.1
Enter the length of side B: 3.5
Enter the length of side C: 7.5

The area of the triangle is 2.30</b></pre>
### Test Case 2 Output
<pre><b>Enter the length of side A: 4.5
Enter the length of side B: 16.125
Enter the length of side C: 12

The area of the triangle is 12.48</b></pre>
### Test Case 3 Output
<pre><b>Enter the length of side A: 1.1
Enter the length of side B: 2.2
Enter the length of side C: 3.3

The area of the triangle is 0.00</b></pre>
