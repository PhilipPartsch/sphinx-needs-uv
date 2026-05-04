# sphinx-needs-uv
In this repo I evaluate Sphinx-Needs with uv on an automated GitHub setup.


## Build a component

The Idea is to have indepenet components.

So:

# update dependecies from pyproject.toml within the component folder
uv sync --project ./components/comp_1/sphinx-needs

# build documentation
uv run --project ./components/comp_1/sphinx-needs codelinks analyse components/comp_1/sphinx-needs/codelinks.toml
uv run --project ./components/comp_1/sphinx-needs codelinks write rst output/marked_content.json --outpath ./components/comp_1/sphinx-needs/needextend.rst --title "Extended needs with codelinks"
uv run --project ./components/comp_1/sphinx-needs sphinx-build ./components/comp_1/sphinx-needs ./public/comp_1
