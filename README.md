# sphinx-needs-uv
In this repo I evaluate Sphinx-Needs with uv on an automated GitHub setup.


## Build a component

The Idea is to have indepenet components.

So:

# update dependecies from pyproject.toml within the component folder
uv sync --project ./components/comp_1/sphinx-needs
# build documentation
uv run --project ./components/comp_1/sphinx-needs sphinx-build ./ ../../../public/comp_1
