# 🌟 Bonus Problem: Word Search in a Grid

## 🧾 Task

Given a 2D board of characters and a word, return `true` if the word exists in the grid.

## ✅ Rules

- The word must be built from **adjacent cells** (horizontally or vertically).
- The **same letter cell may not be used more than once** per word path.

## 💡 Examples

```txt
Input:
board = [["A","B","C","E"],
         ["S","F","C","S"],
         ["A","D","E","E"]],
word = "ABCCED"
→ Output: true

Input:
word = "SEE"
→ Output: true

Input:
word = "ABCB"
→ Output: false
```

## 🧠 Solution Approaches
`This problem can be solved using either of the following approaches:`

1- Depth-First Search (DFS)

- Iterate over each cell in the grid.

- Use DFS to explore all valid paths that match the word.

- Backtrack when necessary.

2- Recursive Backtracking

- Similar to DFS but implemented with a helper recursive function.

- Tracks visited cells and checks character matches step-by-step.

- Backtracks if a mismatch or invalid path is found.

# Both methods explore the grid recursively, and are effective for the given constraint:

`1 <= m, n <= 6 and 1 <= word.length <= 15`