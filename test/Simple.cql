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
  [Encounter: "test"] E where true

define "test3":
  [Encouter] is not null

define "test4":
  cast [Encounter] as Code

define "testbetween":
  [Encounter] properly between true and false

define "testand":
  true and false

define "testop":
  true >= false
