import tkinter as tk
import subprocess

def run_program():
    input_value = input_text.get("1.0", tk.END).strip()
    with open('code.txt', 'w') as file:
        file.write(input_value)
    subprocess.run(['java', 'program', '<', 'code.txt'], shell=True)

root = tk.Tk()
root.title("Java compiler")
root.geometry("600x400")
root.configure(bg="#1E1E1E")

header_label = tk.Label(root, text="Java Compiler", font=("Helvetica", 20), bg="#1E1E1E", fg="#FFFFFF")
header_label.pack(pady=(20, 10))

input_frame = tk.Frame(root, bg="#2D2D2D")
input_frame.pack(padx=30, pady=10)

input_label = tk.Label(input_frame, text="please enter your code:", font=("Helvetica", 12), bg="#2D2D2D", fg="#FFFFFF")
input_label.pack()

input_text = tk.Text(input_frame, height=10, width=60, font=("Consolas", 12), padx=5, pady=5, bg="#1E1E1E", fg="#FFFFFF", insertbackground="#FFFFFF", selectbackground="#FFFFFF", selectforeground="#1E1E1E")
input_text.pack()

run_button = tk.Button(root, text="Compile Program", font=("Helvetica", 14), command=run_program, bg="#4CAF50", fg="#FFFFFF", padx=20, pady=10)
run_button.pack(pady=20)

root.mainloop()
