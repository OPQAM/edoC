# Summary

| STORAGE CLASS  | Declaration Location        | Scope                                | Lifetime                           |
| -------------- | --------------------------- | ------------------------------------ | ---------------------------------- |
| AUTO           | Inside a function/block     | Within the function/block            | Until the function/block completes |
| REGISTER       | Inside a function/block     | Within the function/block            | Until the function/block completes |
| EXTERN         | Outside all functions       | Entire file plus others declared as extern | Until the program terminates       |
| STATIC (local) | Inside a function/block     | Within the function/block            | Until the program terminates       |
| STATIC (global)| Outside all functions       | Entire file in which it is declared  | Until the program terminates       |
