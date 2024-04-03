# x86-to-C Interface Programming Project (Dot Product)
**LBYARCH - XX22** <br>
**Members:**
- Rojo, Kate Lynn
- Romblon, Kathleen Mae

<p align="justify"> The program computes for the dot product of two vectors. It only asks the user for the input of the size of the vectors, which will be applied to both vectors A and B, and the values in each of the vectors are randomly generated within the range of 1.0 to 10.0. The vectors do not have the same value. Once the vectors have been generated given the size, the dot product computation will be done for both C and x86-64 assembly languages. The dot product computation is tested 30 times for both languages, and the average time to run will be printed after the program finishes. </p>

## I. Comparative Execution Time (in seconds)

### Debug Mode (Average Time)
| Vector Size     |         C         |     Assembly     | 
| --------------- | ------------------| ---------------  | 
| 2<sup>20</sup>  |  0.002700 seconds | 0.001767 seconds |
| 2<sup>24</sup>  |  0.044033 seconds | 0.024233 seconds |
| 2<sup>29</sup>  | 41.963500 seconds | 35.400100 seconds|

<p align="justify"> In debug mode, all x86-64 outputs are faster than their C counterparts. For the vector with a size of 2<sup>20</sup>, x86-64 is 34.56% faster than C. For the vector with the size of 2<sup>24</sup>, x86-64 is still faster by 44.97%. Finally, x86-64 is still faster than C by 15.64% for the vector size of 2<sup>29</sup>. Both times are still fast and are not far off from each other, especially when testing for larger vectors, and this may be attributed to Visual Studio's debug mode, wherein [no optimization is done when building the program.](https://learn.microsoft.com/en-us/visualstudio/debugger/how-to-set-debug-and-release-configurations?view=vs-2022) </p>

### Release Mode (Average Time)
| Vector Size     |         C         |     Assembly     | 
| --------------- | ------------------| ---------------  | 
| 2<sup>20</sup>  |  0.001133 seconds | 0.237691 seconds |
| 2<sup>24</sup>  |  0.022600 seconds | 0.240442 seconds |
| 2<sup>29</sup>  | 34.950767 seconds | 1.155251 seconds |

<p align="justify">Based on the release mode, it is evident that the average time for both C and Assembly increases as the vector size differs. However, compared to the debug mode, C outperforms Assembly, particularly at 2<sup>20</sup> and 2<sup>24</sup> vector sizes due to possible compiler optimizations that speed up the C code. This implies that Assembly may lack compiler optimization compared to C. Nevertheless, for a vector size of 2<sup>29</sup>, Assembly performs better than C, which is the same for the debug mode and has a significant difference. Based on the three different vector sizes tested, C performs better for smaller vector sizes, while Assembly is more efficient for larger vector sizes in release mode. </p>

## II. Screenshot of the Program Output with the Correctness Check (Debug Mode)

<p align="justify">For the Debug Mode, the C version serves as a correctness checker for both the C and Assembly outputs.</p>

### 2<sup>20</sup>
![image](https://github.com/kit-kate15/LBYARCH-x86-to-C-interface-programming-project/assets/105538604/3b3b1b27-ec23-4fb8-a191-7abc49395aee)

### 2<sup>24</sup>
![image](https://github.com/kit-kate15/LBYARCH-x86-to-C-interface-programming-project/assets/105538604/074628e6-c479-4af0-9b5a-e97615a9dc68)

### 2<sup>29</sup>
![image](https://github.com/kit-kate15/LBYARCH-x86-to-C-interface-programming-project/assets/105538604/9eccf55e-3546-4e5a-8dff-08e611ff425c)

## III. Screenshot of the Program Output with the Correctness Check (Release Mode)
<p align="justify">For the Release Mode, the C version serves as a correctness checker for both the C and Assembly outputs.</p>

### 2<sup>20</sup>
![image](https://github.com/kit-kate15/LBYARCH-x86-to-C-interface-programming-project/assets/106814132/36c09fbc-51c3-44d9-9a84-f0321dbde57b)

### 2<sup>24</sup>
![image](https://github.com/kit-kate15/LBYARCH-x86-to-C-interface-programming-project/assets/106814132/43df9270-53d8-4951-8e95-c722ff6e0c99)

### 2<sup>29</sup>
![image](https://github.com/kit-kate15/LBYARCH-x86-to-C-interface-programming-project/assets/105538604/c68c140f-dfc2-4036-9c53-d30bfc06e6c4)
