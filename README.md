# Finding free distance in Convolutional codes with Dijkstra
Using Dijkstra algorithm on state machine's graph for Convolutional codes to finding free distance.
In fact, for Free distances in Convolutional codes we have to find the shortest path between 0 and 0 and the Hamming distance weight of this path shows as shortest distance

## Example
for example, we can consider this code ‫‪```G[1011‬‬ 1101‬‬]``` as a Convolutional codes.

you can see the picture of  state machine's graph => [Image of state machine's graph](https://drive.google.com/file/d/1YHNqGIeAAIBZtn9kcBnC95XnjrHsAFnk/view?usp=sharing)

and the shortest path Dijkstra preserved => [Final Image](https://drive.google.com/file/d/11gL9yCLoo94CH6miBZ9PBL8eKZA4Ui7k/view?usp=sharing)

and you can see the D_Free is 6!

### Input for this exapmle :
num of vertex = 8 , num of edges = 16
and each 16 next line describe an edge :
a b w
a connect to b with hamming weghit w
```
8 16
0 0 0
1 8 2
2 1 1
3 1 1
4 2 1
5 2 1
6 3 2
7 3 0 
0 4 2
1 4 0
2 5 1
3 5 1
4 6 1
5 6 1
6 7 0
7 7 2

```
### Output :
``` 
6
‫‪0‬‬ ‫‪4‬‬ ‫‪2‬‬ ‫‪1‬‬ ‫‪8‬‬
```
