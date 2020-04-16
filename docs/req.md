# Functional Requirements

**REQ 1:** The system can create an instance any of the following elements of music theory.
 1. **Note Class**: *A musical frequency represented by a letter and an accidental*
 2. **Note**: *A **note class** which also contains an octave*
 3. **Tone**: *A **note** which also contains a duration*
 4. **Interval**: *A relationship between two **note classes**, **notes**, or **tones***
 5. **Scale**: *A linear sequence of **note classes***
 6. **Abstract Scale**: *A linear sequence of **intervals***
 7. **Mode**: *A [circular permutation](https://en.wikipedia.org/wiki/Permutation#Circular_permutations) of a **scale***
 8. **Abstract Mode**: *A [circular permutation](https://en.wikipedia.org/wiki/Permutation#Circular_permutations) of an **abstract scale***
 9. **Chord**: *A non-linear sequence of **note classes***
 10. **Abstract Chord**: *A non-linear sequence of **intervals*** 
 11. **Chord-Scale**: *A sequence of **note classes** which have a linear and non-linear representation*
 12. **Abstract Chord-Scale**: *A sequence of **intervals** which have a linear and non-linear representation*

**REQ 2:** The system can manipulate or alter an instance of an element.
1. **Note Class**: ***Intervals** can be added or subtracted from a **note class***
2. **Note**: ***Intervals** can be added or subtracted from a **note***
3. **Tone**: ***Intervals** can be added or subtracted from a **tone***
4. **Interval**: ***Intervals** can be added or subtracted from other **interval***
5. **Scale**: ***Scales** can be transposed up or down by an **interval***
6. **Mode**: ***Modes** can be transposed up or down by an **interval***
7. **Chord**: ***Chord** can be transposed up or down by an **interval***
8. **Chord-Scale**: ***Chord-scales** can be transposed up or down by an **interval***

**REQ 3:** The system can compare an instance of an element with another instance of that element.
1. **Note Class**: *Two **note classes** can be checked for equality and inequality*
10. **Note**: *Two **notes** can be checked for equality, inequality, and positional relationship*
11. **Tone**: *Two **tones** can be checked for equality, inequality, and positional relationship. They can also be checked for relative duration*
12. **Interval**: *Two **intervals** can be checked for equality, inequality, and relative distance*
13. **Scale**: *Two **scales** can be checked for equality, inequality, and partial equality (I.e. permutation). A **scale** and a **mode** can be checked for the same relationships*
14. **Abstract Scale**: *Two ** abstract scales** can be checked for equality, inequality, and partial equality (I.e. permutation). An **abstract scale** and an **abstract mode** can be checked for the same relationships*
15. **Mode**: *Two **modes** can be checked for equality, inequality, and partial equality (I.e. permutation). A **mode** and a **scale** can be checked for the same relationships*
16. **Abstract Mode**: *Two **abstract modes** can be checked for equality, inequality, and partial equality (I.e. permutation). An **abstract mode** and an **abstract scale** can be checked for the same relationships*
17. **Chord**: *Two **chords** can be checked for equality, inequality, and partial equality (I.e. permutation)*
18. **Abstract Chord**: *Two **abstract chords** can be checked for equality, inequality, and partial equality (I.e. permutation)*
19. **Chord-Scale**: *Two **chord-scales** can be checked for equality and inequality*
20. **Abstract Chord-Scale**: *Two **chord-scales** can be checked for equality and inequality*

 
**REQ 4:** The system will validate an instance when it is created or modified and will notify the user if the created/modified instance is invalid.

**REQ 5:** The system will provide the user with a library of pre-initialized constant instances of each element wherever there is a finite number of unique instances possible.
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTQyMzQ3NDA4MSwtMTEwMjU0NjIxMV19
-->