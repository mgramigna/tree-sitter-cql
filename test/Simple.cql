library SimpleLib version '0.0.1'

using FHIR version '4.0.1' called FHIR401

include FHIRHelpers version '4.0.001' called Helpers

valueset test: 'http://example.com/test-vs'

context Patient

define function Matt():
  true

define "Test":
  true

define "test2":
  [Encounter: "test"]
