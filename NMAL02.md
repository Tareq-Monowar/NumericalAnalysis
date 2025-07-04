
## Regular False Position (Regula Falsi) Method: Explanation

The False Position method is a root-finding technique for continuous functions where  f(a)  and  f(b)  have opposite signs. It uses a straight line between (a, f(a)) and (b, f(b)) to estimate the root.

Steps:
1. Choose initial interval [a, b] such that  f(a)*f(b) < 0 .
2. Compute the point: 
   x = b - {f(b)*(a - b)}/{f(a) - f(b)}
3. Evaluate f(x) :
   - If  f(a)*f(x) < 0 , set  b = x .
   - Else, set  a = x .
4. Repeat until  |f(x)| <  tolerance.


## f(x) = ln(3x) - 3 , error  = 10^-4=0.0001

1. let, interval [6, 7] . f(6)=-0.10963  f(7)=0.04452 
    here f(6)*f(7)< 0 


