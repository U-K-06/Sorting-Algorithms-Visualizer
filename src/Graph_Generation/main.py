import numpy as np
import pandas as pd
import plotly.express as px
from random import shuffle

def read_and_process_data(file_path: str) -> list:
    data = pd.read_csv(file_path)


data = pd.DataFrame({
    'values': [1, 2, 4, 53, 4239, 32, 4, 103, 42],
    'categories': ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I']
})


for i in range(1):
    shuffled_data = data.sample(frac=1).reset_index(drop=True)
    
    fig = px.bar(shuffled_data, x='categories', y='values', title=f"Shuffled Bar Plot {i+1}")
    fig.show()




