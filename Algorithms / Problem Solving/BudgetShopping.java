import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {
    public static int budgetShopping(int n, List<Integer> bundleQuantities, List<Integer> bundleCosts) {
        // Write your code here
        int tmpQuantity = 0;
        int tmpCost = 0;
        return calculateCombinations(n, tmpQuantity, tmpCost, bundleQuantities, bundleCosts);
    }

    private static int calculateCombinations(int budget, int tmpQuantity, int tmpCost, List<Integer> bundleQuantities,
            List<Integer> bundleCosts) {
        int maxNumOfNotebooks = tmpQuantity;
        for (int i = 0; i < bundleQuantities.size(); i++) {
            if (tmpCost + bundleCosts.get(i) <= budget) {
                int amount = calculateCombinations(budget, tmpQuantity + bundleQuantities.get(i),
                        tmpCost + bundleCosts.get(i), bundleQuantities, bundleCosts);
                if (maxNumOfNotebooks < amount)
                    maxNumOfNotebooks = amount;
            }
        }
        return maxNumOfNotebooks;
    }

    public static int budgetShopping(int n, List<Integer> bundleQuantities, List<Integer> bundleCosts) {
        // Write your code here
            if (n <= 0 || bundleCosts == null || bundleQuantities == null || bundleCosts.size() == 0 || bundleQuantities.size() == 0
                || bundleCosts.size() != bundleQuantities.size()) {
                    return 0;
                }
                final int[] max = {0};
                calculateRecursive(n, bundleCosts, bundleQuantities, max, 0, 0);
    
                return max[0];
        }
    
        static void calculateRecursive(int n, List<Integer> cost, List<Integer> quantity, int[] max, int position, int count) {
            if (n == 0 || position == cost.size()) {
                if (count>max[0]) {
                    max[0] = count;
                }
                return;
            }
            for (int i = 0; i <= n/cost.get(position); i++) {
                calculateRecursive(n - i * cost.get(position), cost, quantity, max, position + 1, count + i * quantity.get(position));
            }
        }
}