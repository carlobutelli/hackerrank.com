from __future__ import print_function

if __name__ == '__main__':
    n = int(raw_input())
    [print(i, end='') for i in range(n+1) if i > 0]
