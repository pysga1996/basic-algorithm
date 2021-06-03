Bàn cờ vua là một bảng có `8*8` ô vuông

Mỗi ô trên bàn cờ được kí hiệu bằng `2` kí tự - `1` kí tự chữ cái và `1` kí tự số

-   Các cột hàng dọc được gán nhãn từ trái sang phải bằng các kí tự chữ cái từ `'a'` tới `'h'` 
-   Các hàng ngang được đánh số từ `1` tới `8` từ phía dưới lên trên
-   Vị trí mỗi một ô trên bàn cờ được thể hiện bằng xâu có `2` kí tự: kí tự đầu tiên thể hiện cột, kí tự thứ hai thể hiện hàng. Ví dụ như `a8, b3, c2, ...`

    ![](https://upload.wikimedia.org/wikipedia/commons/thumb/b/b6/SCD_algebraic_notation.svg/242px-SCD_algebraic_notation.svg.png)

Cho tọa độ tượng trắng `bishop` và tốt đen `pawn` trên bàn cờ tiêu chuẩn,  kiểm tra xem tượng trắng có thể ăn tốt đen trong một nước đi hay không? 

Tượng là quân có thể di chuyển tới các ô trên cùng đường chéo, giống như hình minh họa bên dưới\
![](https://codesignal.s3.amazonaws.com/tasks/bishopAndPawn/img/bishop.jpg?_tm=1551432802825)

Ví dụ

-   Với `bishop = "a1"` và `pawn = "c3"`, kết quả `bishopAndPawn(bishop, pawn) = true`.

    ![](https://codesignal.s3.amazonaws.com/tasks/bishopAndPawn/img/ex1.jpg?_tm=1551432803102)

-   Với `bishop = "h1"` và `pawn = "h3"`, kết quả `bishopAndPawn(bishop, pawn) = false`.

    ![](https://codesignal.s3.amazonaws.com/tasks/bishopAndPawn/img/ex2.jpg?_tm=1551432803350)

Đầu vào/Đầu ra

-   [Thời gian chạy] 0.5 giây

-   [Đầu vào] string bishop\
    Tọa độ của con tượng trắng.\
    *Điều kiện:*\
    `bishop.length = 2`,\
    `'a' ≤ bishop[0] ≤ 'h'`,\
    `1 ≤ bishop[1] ≤ 8`.

-   [Đầu vào] string pawn\
    Tọa độ của con tốt đen.\
    *Điều kiện:*\
    `pawn.length = 2`,\
    `'a' ≤ pawn[0] ≤ 'h'`,\
    `1 ≤ pawn[1] ≤ 8`.

-   [Đầu ra] boolean

### Lý thuyết : 

-   Cho 1 ma trận `n * n`
-   Đường chéo chính là đường chéo đi từ ô `(1, 1)` đến ô` (n, n)`, bao gồm các ô có dạng `A[i][i] (i = 1 .. n)`
-   Đường chéo phụ là đường chéo đi từ ô `(1, n)` đến ô `(n, 1)`, bao gồm các ô có dạng `A[i][n + 1 - i] (i = 1 .. n)`
-   2 ô và nằm trên cùng 1 đường chéo khi và chỉ khi chúng có tổng tọa độ hoặc hiệu tọa độ bằng nhau
-   Tức là, 2 ô `(x, y)` và `(u, v)` cùng đường chéo `<=>` `x + y = u + v` hoặc `x - y = u - v`
-   Hình ảnh minh họa

![](data:image/png;base64,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AAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgEoTQQEAAACAShNBAQAAAIBKE0EBAAAAgAoL4f8Hu/GHe8tphqgAAAAASUVORK5CYII=)

Hướng dẫn bài tập.
------------------

Code mẫu:

Ngôn ngữ C++:

```
bool bishopAndPawn(std::string bishop, std::string pawn)
{
    return (abs(bishop[0] - pawn[0]) == abs(bishop[1] - pawn[1]) && bishop[0] - pawn[0] != 0);
}

```

`\
`

[](https://codelearn.io/learning/thuat-toan-can-ban/3775#)