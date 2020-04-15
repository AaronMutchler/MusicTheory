# Music Theory CPP

This is a description of the **Music Theory CPP** API. I will add more later.


# Functional Requirements

**REQ 1:** The system can create an instance any of the following elements of music theory.
 1. **Note Class**: *A musical frequency represented by a letter and an accidental*
 2. **Note**: *A **note class** which also contains an octave*
 3. **Tone**: *A **note** which also contains a duration*
 4. **Interval**: *A relationship between two **note classes**, **notes**, or **tones***
 5. **Scale**: *A linear sequence of **note classes***
 6. **Mode**: *A [circular permutation](https://en.wikipedia.org/wiki/Permutation#Circular_permutations) of a **scale***
 7. **Chord**: *A non-linear sequence of **note classes***
 8. **Chord-Scale**: *A sequence of **note classes** which have a linear and non-linear representation*

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
2. **Note**: *Two **notes** can be checked for equality, inequality, and positional relationship*
3. **Tone**: *Two **tones** can be checked for equality, inequality, and positional relationship. They can also be checked for relative duration*
4. **Interval**: *Two **intervals** can be checked for equality, inequality, and relative distance*
5. **Scale**: *Two **scales** can be checked for equality, inequality, and partial equality (I.e. permutation). A **scale** and a **mode** can be checked for the same relationships*
6. **Mode**: *Two **modes** can be checked for equality, inequality, and partial equality (I.e. permutation). A **mode** and a **scale** can be checked for the same relationships*
7. **Chord**: *Two **chords** can be checked for equality, inequality, and partial equality (I.e. permutation)*
8. **Chord-Scale**: *Two **chord-scales** can be checked for equality and inequality*
 
**REQ 4:** The system will validate an instance when it is created or modified and will notify the user if the created/modified instance is invalid.
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTI2MDk0MTg1LC0xMzI4NTY1NDVdfQ==
-->