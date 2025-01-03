import numpy as np
import pandas as pd
import plotly.express as px


def read_and_process_data(file_path: str) -> list:
    data = pd.read_csv(file_path)
    return [i for i in data['array']]


