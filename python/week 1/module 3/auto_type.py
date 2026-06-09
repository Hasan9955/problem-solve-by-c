import pyautogui
from time import sleep

sleep(5)

for i in range(0, 5):
    pyautogui.write("Hello Dada, I am python!", interval=0.001)
    pyautogui.press('enter')
 

