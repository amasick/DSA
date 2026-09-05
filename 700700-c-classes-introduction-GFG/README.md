# [C++ Classes Introduction](https://www.geeksforgeeks.org/problems/c-classes-introduction/1)
## Easy
Create class named CollegeCourse with fields&nbsp;courseID, grade, credits, gradePoints and honorPoints. Calculate honorpoints as the product of gradepoints and credits. GradePoints are calculated as (A-10),(B-9),(C-8),(D-7),(E-6) &amp; (F-5).Class CollegeCourse contains&nbsp;following functions:1. set_CourseId( string CID): sets courseId2.&nbsp;set_Grade(char g): sets grade equal to g3.&nbsp;set_Credit(int cr): sets credits equal to cr&nbsp;4.calculateGradePoints(char g): returns gradePoint(int)5. calculateHonorPoints(int gp,int cr): return honorPoint&nbsp;(float)6. display(): prints gradePoint and honorPointNote:&nbsp;Grades are not case sensitive.
Examples :
Input : CSN-206 A 4Output 10 40
Input:&nbsp;ECE-500 d 3Output:&nbsp;7 21
Constraints:1&lt;=CID.length()&lt;=100'A'&lt;=g&lt;='F'1&lt;=cr&lt;=4