library SimpleLib version '0.0.1'

using FHIR version '4.0.1'

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
  [Encounter] is not null

define "test4":
  cast [Encounter] as Code

define "testbetween":
  [Encounter] properly between true and false

define "testand":
  true and false

define "testop":
  true >= false

define "testquantity":
  4 days

define "testlet":
  from [Encounter] E
  let overlapDuration: true where true

define "testwith":
  [Encounter] E
    with [Procedure] P such that true

define "testreturn":
  [Encounter] E
   return true

define "testsort":
  [Encounter] E
   sort by true,false asc

define function TypeTest(codes List<Code>, codeOrConcept Choice<Code, Concept>):
  true
