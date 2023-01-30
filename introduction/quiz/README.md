# Data Structures and Algorithms @ geeksforgeeks
```diff
+ problem set


Question 1
```
<img width="1227" alt="Screenshot 2023-01-30 at 12 16 26 AM" src="https://user-images.githubusercontent.com/113130891/215393282-3fbf7c3f-2204-46ec-abb7-ccd48022ceff.png">

```diff
Answer 1
The time complexity of a nested loop is equal to number of times the innermost statement gets executed. 
Total number of iterations of inner 'for' loop : 1 + 2 + 3 + ..... + (n-1) = (n^2 - 3n + 2)/2
Removing constants and lower order's of growth.
Time complexity =  Θ(n^2)
Θ because we will know exactly how many times innermost statement will get executed depending upon 'n'.

Question 2
```
<img width="1256" alt="Screenshot 2023-01-30 at 12 29 43 AM" src="https://user-images.githubusercontent.com/113130891/215395099-3d3b458d-6d41-494c-b94e-6979c7f8c167.png">

```diff
Answer2
The average case time complexity is calculated by adding up all the time counts for all possible inputs and 
then dividing it by total nnumber of inputs. 
Think in a graphs : By doing so, slope of worst case will be greater than or equal to slope of avg case.
since worst case is big-o,
so A(n) = O(w(n))

Question 3
```

<img width="1263" alt="Screenshot 2023-01-30 at 12 43 14 AM" src="https://user-images.githubusercontent.com/113130891/215396684-efcdeedb-1f12-46a1-9bbb-8db8621f3f93.png">


```diff
Answer 3
n^3/sqrt(n) = n^(3 -1/2) = n^(2.5) > n^2
All other options are O(n^2) i.e. there upper bound is n^2

Question 4
```

<img width="1270" alt="Screenshot 2023-01-30 at 12 48 50 AM" src="https://user-images.githubusercontent.com/113130891/215397443-840d02fd-0a75-4bc2-92c7-e423f0e8f547.png">

```diff
Answer 4
except f3 all functions are exponential, so f3 will have least asymptotic complexity.
f3 <
we know complexity, c^n > n^c
f2 < f1
f3 < f2 < f1

To compare f1 and f4, we can log both functions and then find their complexity
complexity of log f1 = Θ(n)
complexity of log f4 = Θ(logn logn)

clearly, Θ(n) > Θ(logn logn), since order of growth of n is greater than logn
f4 < f1

f3 < f2 < f4 < f1

question 5
```
<img width="1224" alt="Screenshot 2023-01-30 at 1 10 37 AM" src="https://user-images.githubusercontent.com/113130891/215400786-f1db5efb-d4fe-487d-995f-11bf0beb3f31.png">

```diff
Answer 5
The outer loop executes : (n/2 + 1) times
inner loop : logn times
innermost statement : Θ(n logn) times

It's being asked for the return value:
Everytime innermost statement gets executed, n/2 gets added to 'k' and statement gets executed Θ(n logn) times
So, time complexity of return : Θ(n^2 logn)

Question 6
```

<img width="1259" alt="Screenshot 2023-01-30 at 1 30 11 AM" src="https://user-images.githubusercontent.com/113130891/215404538-16ed1b14-44b4-4802-8098-75e91451085e.png">

```diff
Answer 6

```

![IMG_4526](https://user-images.githubusercontent.com/113130891/215406886-d3f6fa59-9a15-4462-80f3-3f4b00dec40e.jpeg)

```diff


```



