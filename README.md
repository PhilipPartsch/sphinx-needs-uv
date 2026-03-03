# sphinx-needs-uv
In this repo I evaluate Sphinx-Needs with uv on an automated GitHub setup.


## Build a component

The Idea is to have indepenet components.

So:
# switch to the component root.
cd ./components/<component>/sphinx-needs
# update dependecies from pyproject.toml within the component folder
uv sync
# build documentation
uv run sphinx-build ./ ../../../public/<component>
