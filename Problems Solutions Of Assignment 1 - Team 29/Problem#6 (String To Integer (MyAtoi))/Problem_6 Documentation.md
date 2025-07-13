
---

### 📄 `README.md` for **Problem 6 – String to Integer (myAtoi)**

```markdown
# 🔢 Problem 6: String to Integer (myAtoi)

## 🧾 Task

Implement `int myAtoi(string s)` to convert the input string to a 32-bit signed integer.

### Steps:
1. Ignore leading whitespaces.
2. Detect optional `+` or `-`.
3. Read digits until a non-digit is found.
4. Clamp the number into the 32-bit signed range: [-2³¹, 2³¹ - 1].

## 💡 Examples

```txt
Input: "42"            → Output: 42
Input: "   -042"       → Output: -42
Input: "1337c0d3"      → Output: 1337
Input: "0-1"           → Output: 0
Input: "words and 987" → Output: 0
```
## 🔒 Constraints

- 0 <= s.length <= 200
- Allowed characters: digits, spaces, +, -, .