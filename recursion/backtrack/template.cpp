void backtrack(parameters) {
    if (base case) {
        save or print answer;
        return;
    }
    
    for (each possible move) {
        if (move is valid) {
            mark the move (visited)
            backtrack(next step)
            undo the move (unmark visited)
        }
    }
}
