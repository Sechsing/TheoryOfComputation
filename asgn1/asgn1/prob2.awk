BEGIN {

}

# The next line of code gets the number of vertices from the first line
# and stores it in the variable n
NR == 1 { n = $1; }

# Write code below to generate clauses ensuring that
# each edge must be included in the vertex cover


Your code goes here
# Print the clauses to satisfy the vertex cover condition for line 2
NR == 2 {
# Form OR clauses with the vertices of the first edge given
printf"%s", "(v" $1 " | v" $3 ")"

a[$1, $3] = 1;
a[$3, $1] = 1;

}

# Print the clauses to satisfy the vertex cover condition for lines beyond line 
NR > 2 {
# Form OR clauses with the vertices of the other edges given
printf"%s", " & (v" $1 " | v" $3 ")"

# The line below should work in conjunction with what you wrote
# above, to add each edge into an associative array for checking later

a[$1, $3] = 1;
a[$3, $1] = 1;

}

    END {
    # Looping through triples of vertices in the array we created
    for (i = 1; i <= n-2; i++)
    {
        for (j = i+1; j <= n-1; j++)
        {
            if (a[i, j] == 1) # (i,j) edge found, now check for triangles
            {
                for (k = j+1; k <= n; k++)
                {
                    if (a[i, k] == 1 && a[j, k] == 1)
                    {
                        # Triangle found! Write code here to ensure
                        # the triangle is excluded from the vertex cover
 
                        Your code goes here
                        # Print the clauses to satisfy the triangle free condition
                        printf" & (~v" i " | ~v" j " | ~v" k ")"
                    }
                }
            }
        }
    }
}
