


output=dict()
def func(data,myString):
    for d in data.keys():
        if type(data[d]) is dict:
            func(data[d],myString+d+'-')
        else:
            output[myString+d]=data[d]

data= {
        "user1":{
            "person1":{
                "name":{
                    "fname":"sahil",
                    "lname":"saini"
                },
                "dose":"1",
                "strength":"500 mg"
            }
        }  ,

        "user2":{
            "person1":{
                "name":{
                    "fname":"Kaustav",
                    "lname":"Ghosh"
                },
                "dose":"2",
                "strength":"500 mg"
            }
        }  
    }

func(data,"")
print(output)