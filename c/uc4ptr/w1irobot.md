## Programming Assignment: I, Robot

**Assignment Description**  

In this assignment, you'll be writing a program that does 2 things:  calculate velocity vectors and durations for an industrial robot to move its welding attachment between a set of weld points and calculating how long the entire set of movements will take.

**Structs and Functions**

![Screen Shot 2020-07-15 at 11.46.21 AM](/Users/java/Library/Application Support/typora-user-images/Screen Shot 2020-07-15 at 11.46.21 AM.png)

The function prototypes for the functions you could use to implement your  solution are provided below. You don’t have to implement your solution  using these functions, and you can certainly add more functions if you  want to; these are just the prototypes for the functions I implemented  in my solution.



The countInputFileLines\tt{countInputFileLines}countInputFileLines function counts how many lines are in the input file. I needed this information so I could allocate a Vector\tt{Vector}Vector array of the appropriate size to store all the points in the file and to allocate a MoveInfo\tt{MoveInfo}MoveInfo array of the appropriate size to store the information about all the moves between the points.

void    getPointFromString(char    string[],    Vector    ∗point);\tt{void\;\;getPointFromString(char\;\;string[],\;\;Vector\;\;*point);}voidgetPointFromString(charstring[],Vector∗point);

The getPointFromString\tt{getPointFromString}getPointFromString function processes the comma-separated x, y, and z values in the given string\tt{string}string and populates the x\tt{x}x, y\tt{y}y, and z\tt{z}z fields in the point\tt{point}point parameter.

void    getMoveInfoBetweenPoints(MoveInfo    ∗moveInfo,\tt{void\;\;getMoveInfoBetweenPoints(MoveInfo\;\;*moveInfo,}voidgetMoveInfoBetweenPoints(MoveInfo∗moveInfo,

                Vector    firstPoint,    Vector    secondPoint);\tt{\;\;\;\;\;\;\;\;Vector\;\;firstPoint,\;\;Vector\;\;secondPoint);}VectorfirstPoint,VectorsecondPoint);

The getMoveInfoBetweenPoints\tt{getMoveInfoBetweenPoints}getMoveInfoBetweenPoints function calculates the velocity vector and the duration for a move from firstPoint\tt{firstPoint}firstPoint to secondPoint\tt{secondPoint}secondPoint and populates the velocity\tt{velocity}velocity and duration\tt{duration}duration fields in the moveInfo\tt{moveInfo}moveInfo parameter.









