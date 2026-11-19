# Visual Studio Code for CS50
cs50.dev

```python
# chat.py

from openai import OpenAI

client = OpenAI()

response = client.response.create(
    input="In one sentence, what is CS50?",
    model="gpt-5"
)

print(response.output_text)
```