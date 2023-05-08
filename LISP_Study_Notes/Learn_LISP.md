# Lisp Fun Facts
- Created in 1958 by John McCarthy.
- Lisp is the second-oldest high-level programming language in widespread use today.
- Lisp is a family of computer programming languages with a long history and a distinctive, fully parenthesized prefix notation.
- Lisp was originally created as a practical mathematical notation for computer programs, influenced by the notation of Alonzo Church's lambda calculus.
- Lisp was first implemented by Steve Russell on an IBM 704 computer.
- Lisp is a functional programming language with imperative features.
- Lisp has many dialects, such as Common Lisp, Scheme, Clojure, Emacs Lisp and AutoLISP.

# Introduction to Lisp
> This prints "Hello World" to the console.
```
(format t "Hello World")
```
> This defines a global variable. We know that this is a global variable because the variable name is encased with the * character. The 
```
(defvar *name* (read))
```

# Formatting 
>Show the value
```
~a 
```
>New line
```
~%
```
> Comma formatting
```
(format t "Number with commas ~:d ~%" 1000000)
```
>Decimal formatting
```
(format t "PI to 4 characters ~4f ~%" 3.14593)
```
>Percentages 
```
(format t "10 percent ~,,2f ~%" 0.10) 
```
>Dollars 
``` 
(format t "10 Dollars ~$ ~%" 10)
```

# Math
> Addition
```
(format t "(+ 5 4) ~d ~%" (+ 5 4))
```
> Subtraction
```
(format t "(+ 5 4) ~d ~%" (+ 5 4))
```
> Multiplication
```
(format t "(* 5 4) ~d ~%" (* 5 4))
```
> Division
```
(format t "(/ 5 4) ~d ~%" (/ 5 4))
```
> Rem
```
(format t "(rem 5 4) ~d ~%" (rem 5 4))
```
> Mod
```
(format t "(mod 5 4) ~d ~%" (mod 5 4))
```
> Exp
```
(format t "(expt 5 4) ~d ~%" (expt 5 4))
```
> Square Root
```
(format t "(sqrt 81) ~d ~%" (sqrt 81))
```
> Log
```
(format t "(log 1000 10) ~d ~%" (log 1000 10))
```
> Floor 
```
(format t "(floor 5.4) ~d ~%" (floor 5.4))
```
> Ceiling 
```
(format t "(ceiling 5.4) ~d ~%" (ceiling 5.4))
```
> Max
```
(format t "(max 5 4) ~d ~%" (max 5 4))
```
> Min 
```
(format t "(min 5 4) ~d ~%" (min 5 4))
```
> Odd
```
(format t "(oddp 5) ~d ~%" (oddp 5))
```
> Even
```
(format t "(evenp 5) ~d ~%" (evenp 5))
```
> Number
```
(format t "(numberp 5) ~d ~%" (numberp 5))
```

# Equality
> Checking for equality and this evaluates as T
```
(format t "(equalp 1.0 1) ~d ~%" (equalp 1.0 1))
```
#Conditionals 
> If statement; note that we do not use an else statement. If the condition is false, we execute the 3rd statment
```
(if (equalp 1.0 1)
    (format t "True ~%")
    (format t "False ~%"))
```
> And
```
(if (and (equalp 1.0 1) (equalp 1.0 1))
    (format t "True ~%")
    (format t "False ~%"))
```
> Or 
```
(if (or (equalp 1.0 1) (equalp 1.0 1))
    (format t "True ~%")
    (format t "False ~%"))
```
> Progn allows for multuple statements to be executed in a single if statement
```
(if (equalp 1.0 1)
    (progn
        (format t "True ~%")
        (format t "True ~%"))
    (format t "False ~%"))
```

# Case
> Case statement; perform certain actions depending on conditions
```
(defun get-school (age)
	(case age
		(5 (print "Kindergarten"))
		(6 (print "First Grade"))
		(otherwise '(middle school))
	))
```

# Conditiional
> Conditional statement: performs like an if else statement
```
(cond ((>= *age* 18) ; If T do this
		(setf *college-ready* 'yes)
		(format t "Ready for College ~%"))
	  ((< *age* 18) ; Else If T do this
	  	(setf *college-ready* 'no)
		(format t "Not Ready for College ~%"))
	  (t (format t "Don't Know ~%"))) ; Else do this by default (t is for true)
```

# Loop 
>Loop executes code a defined number of times Create a 
```list using numbers 1 through 10
(loop for x from 1 to 10
	do(print x))
```
>Loop until the when condition calls return
```
(setq x 1)
(loop
	(format t "~d ~%" x)
	(setq x (+ x 1))
	(when (> x 10) (return x))
)
```
> Loop for can cycle through a list or iterate commonly.It will execute any number of statements after do
```
(loop for x in '(Peter Paul Mary) do 
	(format t "~s ~%" x)
)
```
> Print y 
```
(loop for y from 100 to 110 do
	(print y)
)
```
> dotimes iterates a specified number of times
```
(dotimes (y 12)
	(print y))
```

# Lists 
> Link together 2 objects of data
```
(cons 'superman 'batman)
```
> Create a list with list
```
(list 'superman 'batman 'flash)
```
> Add item to the front of another list
```
(cons 'aquaman '(superman batman))
```
> Get the first item out of a list with car
```
(format t "First = ~a ~%" (car '(superman batman aquaman)))
```
> Get everything but the first item with cdr
```
(format t "Everything Else = ~a ~%" (cdr '(superman batman aquaman)))
```
> Get the 2nd item d = (batman flash joker) a = (batman)
```
(format t "2nd Item = ~a ~%" (cadr '(superman batman aquaman flash joker)))
```
> Get the 3rd item = aquaman
```
(format t "3rd Item = ~a ~%" (caddr '(superman batman aquaman flash joker)))
```
> Get the 4th item (Max you can go)
```
(format t "4th Item = ~a ~%" (cadddr '(superman batman aquaman flash joker)))
```
> Get the 4th item = joker
```
(format t "4th Item = ~a ~%" (cddddr '(superman batman aquaman flash joker)))
```

# Functions 
> Get average
```
(defun get-avg (num-1 num-2)
	(/ (+ num-1 num-2) 2 ))

(format t "Avg 10 & 50 = ~a ~%" (get-avg 10 50)) 
```
> You can define some parameters as optional in a function with &optional
```
(defun print-list (w x &optional y z)
	(format t "List = ~a ~%" (list w x y z))
)

(print-list 1 2 3)
```
 
> Receive multiple values with &rest
```
(defvar *total* 0)
 
(defun sum (&rest nums)
	(dolist (num nums)
		(setf *total* (+ *total* num))
	)
	(format t "Sum: ~a ~%" *total*)
)
 
(sum 1 2 3 4 5)
```
> Keyword parameters are used to pass values to specific variables
```
(defun print-list(&optional &key x y z)
	(format t "List: ~a ~%" (list x y z))
)

(print-list :x 1 :y 2)
``` 

