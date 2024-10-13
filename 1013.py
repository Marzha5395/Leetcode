class Solution:
    def canThreePartsEqualSum(self, arr: List[int]) -> bool:
        summa = sum(arr)
        if summa % 3 != 0:
            return False
        target = summa/3
        partition_sum = 0
        partitions = 0
        for i in arr:
            partition_sum += i
            if partition_sum == target:
                partition_sum = 0
                partitions += 1
                if partitions >= 3:
                    return True
        return False
