int sum = 0;
for (int i = 0; i < mat[0].size(); i++) {
    if (i != ((mat.size() - 1) - i)){
        sum = sum + mat[i][i] + mat[i][((mat.size() - 1) - i)];
    } else {
        sum = sum + mat[i][i];
    }
}
return sum;