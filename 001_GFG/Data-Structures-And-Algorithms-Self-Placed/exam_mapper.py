import pandas as pd
import sys
import numpy as np
# Reading of data set
data=pd.read_csv('covid_19_data.csv')
x=data['Country/Region'][:200]
x=x.sort_values()
for line in x:
    print(line,1)