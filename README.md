# x86-to-C Interface Programming Project (Dot Product)
**LBYARCH - XX22** <br>
**Members:**
- Rojo, Kate Lynn
- Romblon, Kathleen Mae

## I. Comparative Execution Time (in seconds)

### Debug Mode
| Vector Size     |     C     | Assembly | 
| --------------- | --------- | -------- | 
| 2<sup>20</sup>  |  0.005467 | 0.000167 |
| 2<sup>24</sup>  |  0.064633 | 0.002033 |
| 2<sup>29</sup>  | 56.676900 | 1.660900 |

### Release Mode
| Vector Size     |     C     | Assembly | 
| --------------- | --------- | -------- | 
| 2<sup>20</sup>  |  0.001033 | 0.000067 |
| 2<sup>24</sup>  |  0.022133 | 0.001400 |
| 2<sup>29</sup>  | 89.450300 | 2.387133 |

## II. Screenshot of the Program Output with the Correctness Check (C)

### 2<sup>20</sup>
![2^20](https://github.com/kit-kate15/LBYARCH-x86-to-C-interface-programming-project/assets/106814132/c7bef501-8e08-4b5e-83a7-1e291b956950)

### 2<sup>24</sup>
![2^24](https://github.com/kit-kate15/LBYARCH-x86-to-C-interface-programming-project/assets/106814132/bf9bd25b-6be7-413f-b687-e92c771b6b83)

### 2<sup>29</sup>
![2^29](https://github.com/kit-kate15/LBYARCH-x86-to-C-interface-programming-project/assets/106814132/6287e99b-8a5f-4032-aa32-81e996b59d73)

## III. Screenshot of the Program Output with the Correctness Check (x86-64)

### 2<sup>20</sup>
![2^20](https://github.com/kit-kate15/LBYARCH-x86-to-C-interface-programming-project/assets/106814132/04f90bec-797e-48b8-a665-3d1ae2f5dc47)

### 2<sup>24</sup>
![2^24](https://github.com/kit-kate15/LBYARCH-x86-to-C-interface-programming-project/assets/106814132/880f408a-b6c7-4948-afd4-cda07fa3208b)

### 2<sup>29</sup>
![2^29](https://github.com/kit-kate15/LBYARCH-x86-to-C-interface-programming-project/assets/106814132/fd376aa8-4b1f-4980-893e-57da13194815)
