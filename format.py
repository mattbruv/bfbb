import glob
import subprocess

files = glob.glob("src/**/*")

for f in files:
    print(f)
    subprocess.run(["clang-format.exe", "-i", f])