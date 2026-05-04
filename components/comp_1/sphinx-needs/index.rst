#################################
Documentation for the Component 1
#################################

.. aou:: Freedom of use
   :id: AOU__COMP_1__FREEDOM_OF_USE
   :safety: ASIL-A
   :security: Yes

   This component can be reused in different projects, so we use
   Assumptions of use instead of requirements.

.. aou:: Integration of the component into a project
   :id: AOU__COMP_1__INTEGRATION
   :safety: ASIL-B
   :security: Yes

   It is in the responsibility of the integrator to ensure that the
   component is used in a way that is compliant with the assumptions of use.

.. aou:: Implementation of the component
   :id: AOU__COMP_1__IMPLEMENTATION
   :safety: ASIL-B
   :security: Yes

   The source code of the component is provided in the src folder. It is implemented in C++.

.. aou:: Testing of the component
   :id: AOU__COMP_1__TESTING
   :safety: ASIL-B
   :security: Yes

   Tests are provided in the component, as python scripts.

*Content from test implementation file:*

.. src-trace::
   :project: srccpp

*Content from test implementation file:*

.. src-trace::
   :project: srcpy


