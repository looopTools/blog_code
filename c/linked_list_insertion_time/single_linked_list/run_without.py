import subprocess

if __name__ == "__main__":
    runs = [1, 10, 100, 1000, 10000, 100000, 1000000]
    for run in runs:
        for i in range(0, 3):
            subprocess.run(["./without_tail", str(run)])


