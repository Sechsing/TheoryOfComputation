BEGIN {
    # Start the output with the SageMath command prefix
    printf "sage -c 'print(propcalc.formula(\""
}

# The next line of code gets the number of vertices from the first line
# and stores it in the variable n
NR == 1 { n = $1; }

# Print the clauses to satisfy the vertex cover condition for line 2
NR == 2 {
    # Form OR clauses with the vertices of the first edge given
    printf "(v%s | v%s)", $1, $3;

    # Store the edges in the associative array
    a[$1, $3] = 1;
    a[$3, $1] = 1;
}

# Print the clauses to satisfy the vertex cover condition for lines beyond line 2
NR > 2 {
    # Form OR clauses with the vertices of the other edges given
    printf " & (v%s | v%s)", $1, $3;

    # Store the edges in the associative array
    a[$1, $3] = 1;
    a[$3, $1] = 1;
}

END {
    # Looping through triples of vertices in the array we created
    for (i = 1; i <= n-2; i++) {
        for (j = i+1; j <= n-1; j++) {
            if (a[i, j] == 1) { # (i,j) edge found, now check for triangles
                for (k = j+1; k <= n; k++) {
                    if (a[i, k] == 1 && a[j, k] == 1) {
                        # Triangle found! Write code here to ensure
                        # the triangle is excluded from the vertex cover
                        printf " & (~v%s | ~v%s | ~v%s)", i, j, k;
                    }
                }
            }
        }
    }
    
    # End the output with the SageMath command suffix
    printf "\").is_satisfiable())'\n"
}

