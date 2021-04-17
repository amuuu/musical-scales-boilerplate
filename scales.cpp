// This piece of code is made to make it easier for me when
// I start new projects and want to use notes on scales.

void GIMME_MY_SCALES()
{
    int minMidiNoteValue = 36; // C2
    int maxMidiNoteValue = 88; // C8
    int octaveNumbers = 3; // 2 -> 4

    int majorScaleNotes [7] = {};
    int minorScaleNotes [7] = {};

    majorScaleNotes[0] = 0;
    majorScaleNotes[1] = 2;
    majorScaleNotes[2] = 4;
    majorScaleNotes[3] = 5;
    majorScaleNotes[4] = 7;
    majorScaleNotes[5] = 9;
    majorScaleNotes[6] = 11;

    minorScaleNotes[0] = 0;
    minorScaleNotes[1] = 2;
    minorScaleNotes[2] = 3;
    minorScaleNotes[3] = 5;
    minorScaleNotes[4] = 7;
    minorScaleNotes[5] = 8;
    minorScaleNotes[6] = 10;
}
