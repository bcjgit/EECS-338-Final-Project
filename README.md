# EECS-338-Final-Project

## Power iteration for large dense matrices using multiple GPUs

The idea here is the following:

1. Split up matrix vector product row wise
2. Compute each part of the larger matrix-vector product on GPUs
3. Observe results (i.e. convergence etc.) on master


