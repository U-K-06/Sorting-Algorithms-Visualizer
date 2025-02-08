import dash
from dash.dependencies import Output, Input
from dash import dcc
from dash import html
import numpy as np
import pandas as pd
import plotly.express as px
from random import shuffle
import plotly.graph_objs as go
values = [2,4,2,13,2]
app = dash.Dash("Sorting Alogorithms Visualizer")
categories = ['A', 'B', 'C', 'D', 'E']
app.layout = html.Div(
    [    
        dcc.Graph(id = 'Graph_of_array',
                  animate = True),
        dcc.Interval(
            id = 'graph-update',
            interval = 100,
            n_intervals = 0
        ),
    ]
)

def read_and_process_data(file_path: str) -> list:
    data = pd.read_csv(file_path)
@ app.callback(
    Output('Graph_of_array', 'figure'),
    [Input('graph-update', 'n_intervals')]
)
def update_graph_scatter(n):
    shuffle(values)
    
    data = go.Bar(
        x=categories,
        y=values,
        name='Bar'
    )
    
    return {'data': [data],
            'layout': go.Layout(
                xaxis=dict(title='Categories', range=[-0.5, len(categories) - 0.5]),
                yaxis=dict(title='Values', range=[0, max(values) + 5]),
                title='Bar Plot'
            )}

# data = pd.DataFrame({
#     'values': [1, 2, 4, 53, 4239, 32, 4, 103, 42],
#     'categories': ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I']
# })


# for i in range(1):
#     shuffled_data = data.sample(frac=1).reset_index(drop=True)
    
#     fig = px.bar(shuffled_data, x='categories', y='values', title=f"Shuffled Bar Plot {i+1}")
#     fig.show()


if __name__ == '__main__':
    app.run_server(debug=True)


