// This piece of code is made to make it easier for me when
// I start new projects and want to use notes on scales.

int minMidiNoteValue = 36; // C2
int maxMidiNoteValue = 88; // C8
int octaveNumbers = 3; // 2 -> 4

int majorScaleNotes [7] = {};
int minorScaleNotes [7] = {};

string majorScaleChords [7] = {};
string minorScaleChords [7] = {};

void GIMME_MY_SCALES()
{
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

void GIMME_MY_CHORDS()
{
    minorScaleChords[0] = "m";
    minorScaleChords[1] = "dim";
    minorScaleChords[2] = "M";
    minorScaleChords[3] = "m";
    minorScaleChords[4] = "m";
    minorScaleChords[5] = "M";
    minorScaleChords[6] = "M";
    
    majorScaleChords[0] = "M";
    majorScaleChords[1] = "m";
    majorScaleChords[2] = "m";
    majorScaleChords[3] = "M";
    majorScaleChords[4] = "M";
    majorScaleChords[5] = "m";
    majorScaleChords[6] = "dim";
    
    char majorChord [3] = {'1','3','5'};
    char minorChord [3] = {'1','3b','5'};
    char dimChord [3] = {'1','3b','5b'};
}
