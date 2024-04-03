# x86-to-C Interface Programming Project (Dot Product)
**LBYARCH - XX22** <br>
**Members:**
- Rojo, Kate Lynn
- Romblon, Kathleen Mae

## I. Comparative Execution Time (in seconds)

### Debug Mode (Average Time)
| Vector Size     |         C         |     Assembly     | 
| --------------- | ------------------| ---------------  | 
| 2<sup>20</sup>  |  0.002700 seconds | 0.001767 seconds |
| 2<sup>24</sup>  |  0.044033 seconds | 0.024233 seconds |
| 2<sup>29</sup>  | 41.963500 seconds | 35.400100 seconds|


### Release Mode (Average Time)
| Vector Size     |         C         |     Assembly     | 
| --------------- | ------------------| ---------------  | 
| 2<sup>20</sup>  |  0.001133 seconds | 0.237691 seconds |
| 2<sup>24</sup>  |  0.019567 seconds | 0.071520 seconds |
| 2<sup>29</sup>  | 34.950767 seconds | 1.155251 seconds |

Based on the release mode, it is evident that the average time for both C and Assembly increases as the vector size differs. However, compared to the debug mode, C outperforms Assembly, particularly at 2<sup>20</sup> and 2<sup>40</sup> vector sizes due to possible compiler optimizations that speed up the C code. This implies that Assembly may lack compiler optimization compared to C. Nevertheless, for a vector size of 2<sup>29</sup>, Assembly performs better than C, which is the same for the debug mode and has a significant difference. Based on the three different vector sizes tested, C performs better for smaller vector sizes, while Assembly is more efficient for larger vector sizes in release mode.

## II. Screenshot of the Program Output with the Correctness Check (Debug Mode)

### 2<sup>20</sup>
![image](https://github.com/kit-kate15/LBYARCH-x86-to-C-interface-programming-project/assets/105538604/3b3b1b27-ec23-4fb8-a191-7abc49395aee)

### 2<sup>24</sup>
![image](https://github.com/kit-kate15/LBYARCH-x86-to-C-interface-programming-project/assets/105538604/074628e6-c479-4af0-9b5a-e97615a9dc68)

### 2<sup>29</sup>
![image](https://github.com/kit-kate15/LBYARCH-x86-to-C-interface-programming-project/assets/105538604/9eccf55e-3546-4e5a-8dff-08e611ff425c)

## III. Screenshot of the Program Output with the Correctness Check (Release Mode)

### 2<sup>20</sup>
![image](https://github.com/kit-kate15/LBYARCH-x86-to-C-interface-programming-project/assets/106814132/36c09fbc-51c3-44d9-9a84-f0321dbde57b)

### 2<sup>24</sup>
![image](https://github.com/kit-kate15/LBYARCH-x86-to-C-interface-programming-project/assets/106814132/56725985-05f8-4f68-817c-e2b61f698525)

### 2<sup>29</sup>
![image](https://github.com/kit-kate15/LBYARCH-x86-to-C-interface-programming-project/assets/105538604/c68c140f-dfc2-4036-9c53-d30bfc06e6c4)
