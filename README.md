# Inventory - Production Management System

Using simplex method in c++ to compute the optimal cost and monthly production of one product and 12 months period ( Tried many LP solver based on simplex method, do not work! Problem Occured: 1. cycling 2. Unbounded 3. Unknown Error)  based on the input demand, production cost, inventory cost and other type of cost.


## Files

* main.cpp - open interface window
* mainwindow.cpp - system main interface window combined with simplex method code and final computing code
* descriptiondialog.cpp - system instruction window about input and output parameters
* inputdialog.cpp - input window to get all the input parameters for LP problem
* calculatedialog.cpp - output the optimal result
* simplex_method.cpp - linear programming problem solver based on simplex method, for illustration


## Running

Open the IPMS.app in macos system and follow the instruction to operate.

## Input

i = 1...12
* Inventory Limit: Inv
* Monthly Prodution Limit: Pro
* Every Months Demands: Di
* Every Months Production Cost per Unit: Ci
* Every Months Inventory Cost per Unit: Ii
* Every Months Other Forms Cost per Unit: Oi

### Example

Inv: 150000
Pro: 130000
Di: 10000 10000 10000 10000 30000 30000 30000 30000 30000 100000 100000 100000
Ci: 5         5         5         5        5          5         4.5      4.5      4.5      4.5        4.5        4.5
Ii:  0.4      0.4      0.4      0.4     0.4       0.4       0.4      0.4      0.4       0.4       0.4        0.4
Oi: 0        0         0         0        0          0          0         0         0          0          0            0         


## Calculate

Click the calculate button to calculate the optimal result and output to the calculate dialog window.


## Built With

* [QT](https://www.qt.io/) - The UI framework used
* [Simplex Method](http://jean-pierre.moreau.pagesperso-orange.fr/Cplus/simplex_cpp.txt) - LP solver code used


## Authors

* **Chang Sun** - *Code Writing* - [ynsfsc](https://github.com/ynsfsc)
* **Cheng Lu**



