// (n* (EdgeNum)) - 1 = last pixel of cornerNum

//============================================================================================
//horizontal ring segments starting at the base corner of the dodecahedron and moving up to the top corner
//= AREA0
segmentSection ringSec0[] = { {0, 1}, {39, 1}, {40, 1} };
Segment ringSegment0 = { SIZE(ringSec0), ringSec0, true }; //numSections, section array pointer, direction

segmentSection ringSec1[] = { {1, 1}, {38, 1}, {41, 1} };
Segment ringSegment1 = { SIZE(ringSec1), ringSec1, true }; //numSections, section array pointer, direction

segmentSection ringSec2[] = { {2, 1}, {37, 1}, {42, 1} };
Segment ringSegment2 = { SIZE(ringSec2), ringSec2, true }; //numSections, section array pointer, direction

segmentSection ringSec3[] = { {3, 1}, {36, 1}, {43, 1} };
Segment ringSegment3 = { SIZE(ringSec3), ringSec3, true }; //numSections, section array pointer, direction

segmentSection ringSec4[] = { {4, 1}, {35, 1}, {44, 1} };
Segment ringSegment4 = { SIZE(ringSec4), ringSec4, true }; //numSections, section array pointer, direction

segmentSection ringSec5[] = { {5, 1}, {34, 1}, {45, 1} };
Segment ringSegment5 = { SIZE(ringSec5), ringSec5, true }; //numSections, section array pointer, direction

segmentSection ringSec6[] = { {6, 1}, {33, 1}, {46, 1} };
Segment ringSegment6 = { SIZE(ringSec6), ringSec6, true }; //numSections, section array pointer, direction

segmentSection ringSec7[] = { {7, 1}, {32, 1}, {47, 1} };
Segment ringSegment7 = { SIZE(ringSec7), ringSec7, true }; //numSections, section array pointer, direction
//== AREA1
segmentSection ringSec8[] = { {8, 1}, {31, 1}, {143, 1}, {159, 1}, {48, 1}, {71, 1}};
Segment ringSegment8 = { SIZE(ringSec8), ringSec8, true }; //numSections, section array pointer, direction

segmentSection ringSec9[] = { {9, 1}, {30, 1}, {142, 1}, {158, 1}, {49, 1}, {70, 1}};
Segment ringSegment9 = { SIZE(ringSec9), ringSec9, true }; //numSections, section array pointer, direction

segmentSection ringSec10[] = { {10, 1}, {29, 1}, {141, 1}, {157, 1}, {50, 1}, {69, 1}};
Segment ringSegment10 = { SIZE(ringSec10), ringSec10, true }; //numSections, section array pointer, direction

segmentSection ringSec11[] = { {11, 1}, {28, 1}, {140, 1}, {156, 1}, {51, 1}, {68, 1}};
Segment ringSegment11 = { SIZE(ringSec11), ringSec11, true }; //numSections, section array pointer, direction

segmentSection ringSec12[] = { {12, 1}, {27, 1}, {139, 1}, {155, 1}, {52, 1}, {67, 1}};
Segment ringSegment12 = { SIZE(ringSec12), ringSec12, true }; //numSections, section array pointer, direction

segmentSection ringSec13[] = { {13, 1}, {26, 1}, {138, 1}, {154, 1}, {53, 1}, {66, 1}};
Segment ringSegment13 = { SIZE(ringSec13), ringSec13, true }; //numSections, section array pointer, direction

segmentSection ringSec14[] = { {14, 1}, {25, 1}, {137, 1}, {153, 1}, {54, 1}, {65, 1}};
Segment ringSegment14 = { SIZE(ringSec14), ringSec14, true }; //numSections, section array pointer, direction

segmentSection ringSec15[] = { {15, 1}, {24, 1}, {136, 1}, {152, 1}, {55, 1}, {64, 1}};
Segment ringSegment15 = { SIZE(ringSec15), ringSec15, true }; //numSections, section array pointer, direction
//== AREA2 (3 horizontally oriented LED strips)
segmentSection ringSec16[] = { {16, 8}, {144, 8}, {56, 8}};
Segment ringSegment16 = { SIZE(ringSec16), ringSec16, true }; //numSections, section array pointer, direction
//== AREA3
segmentSection ringSec17[] = { {95, 1}, {119, 1}, {135, 1}, {160, 1}, {183, 1}, {72, 1}};
Segment ringSegment17 = { SIZE(ringSec17), ringSec17, true }; //numSections, section array pointer, direction

segmentSection ringSec18[] = { {94, 1}, {118, 1}, {134, 1}, {161, 1}, {182, 1}, {73, 1}};
Segment ringSegment18 = { SIZE(ringSec18), ringSec18, true }; //numSections, section array pointer, direction

segmentSection ringSec19[] = { {93, 1}, {117, 1}, {133, 1}, {162, 1}, {181, 1}, {74, 1}};
Segment ringSegment19 = { SIZE(ringSec19), ringSec19, true }; //numSections, section array pointer, direction

segmentSection ringSec20[] = { {92, 1}, {116, 1}, {132, 1}, {163, 1}, {180, 1}, {75, 1}};
Segment ringSegment20 = { SIZE(ringSec20), ringSec20, true }; //numSections, section array pointer, direction

segmentSection ringSec21[] = { {91, 1}, {115, 1}, {131, 1}, {164, 1}, {179, 1}, {76, 1}};
Segment ringSegment21 = { SIZE(ringSec21), ringSec21, true }; //numSections, section array pointer, direction

segmentSection ringSec22[] = { {90, 1}, {114, 1}, {130, 1}, {165, 1}, {178, 1}, {77, 1}};
Segment ringSegment22 = { SIZE(ringSec22), ringSec22, true }; //numSections, section array pointer, direction

segmentSection ringSec23[] = { {89, 1}, {113, 1}, {129, 1}, {166, 1}, {177, 1}, {78, 1}};
Segment ringSegment23 = { SIZE(ringSec23), ringSec23, true }; //numSections, section array pointer, direction

segmentSection ringSec24[] = { {88, 1}, {112, 1}, {128, 1}, {167, 1}, {176, 1}, {79, 1}};
Segment ringSegment24 = { SIZE(ringSec24), ringSec24, true }; //numSections, section array pointer, direction
//== LAYER4 (3 horizontally oriented LED strips)
segmentSection ringSec25[] = { {80, 8}, {120, 8}, {168, 8}};
Segment ringSegment25 = { SIZE(ringSec25), ringSec25, true }; //numSections, section array pointer, direction
//== LAYER5
segmentSection ringSec26[] = { {231, 1}, {239, 1}, {184, 1}, {199, 1}, {96, 1}, {111, 1}};
Segment ringSegment26 = { SIZE(ringSec26), ringSec26, true }; //numSections, section array pointer, direction

segmentSection ringSec27[] = { {230, 1}, {238, 1}, {185, 1}, {198, 1}, {97, 1}, {110, 1}};
Segment ringSegment27 = { SIZE(ringSec27), ringSec27, true }; //numSections, section array pointer, direction

segmentSection ringSec28[] = { {229, 1}, {237, 1}, {186, 1}, {197, 1}, {98, 1}, {109, 1}};
Segment ringSegment28 = { SIZE(ringSec28), ringSec28, true }; //numSections, section array pointer, direction

segmentSection ringSec29[] = { {228, 1}, {236, 1}, {187, 1}, {196, 1}, {99, 1}, {108, 1}};
Segment ringSegment29 = { SIZE(ringSec29), ringSec29, true }; //numSections, section array pointer, direction

segmentSection ringSec30[] = { {227, 1}, {235, 1}, {188, 1}, {195, 1}, {100, 1}, {107, 1}};
Segment ringSegment30 = { SIZE(ringSec30), ringSec30, true }; //numSections, section array pointer, direction

segmentSection ringSec31[] = { {226, 1}, {234, 1}, {189, 1}, {194, 1}, {101, 1}, {106, 1}};
Segment ringSegment31 = { SIZE(ringSec31), ringSec31, true }; //numSections, section array pointer, direction

segmentSection ringSec32[] = { {225, 1}, {233, 1}, {190, 1}, {193, 1}, {102, 1}, {105, 1}};
Segment ringSegment32 = { SIZE(ringSec32), ringSec32, true }; //numSections, section array pointer, direction

segmentSection ringSec33[] = { {224, 1}, {232, 1}, {191, 1}, {192, 1}, {103, 1}, {104, 1}};
Segment ringSegment33 = { SIZE(ringSec33), ringSec33, true }; //numSections, section array pointer, direction
//== LAYER6
segmentSection ringSec34[] = { {215, 1}, {223, 1}, {200, 1} };
Segment ringSegment34 = { SIZE(ringSec34), ringSec34, true }; //numSections, section array pointer, direction

segmentSection ringSec35[] = { {214, 1}, {222, 1}, {201, 1} };
Segment ringSegment35 = { SIZE(ringSec35), ringSec35, true }; //numSections, section array pointer, direction

segmentSection ringSec36[] = { {213, 1}, {221, 1}, {202, 1} };
Segment ringSegment36 = { SIZE(ringSec36), ringSec36, true }; //numSections, section array pointer, direction

segmentSection ringSec37[] = { {212, 1}, {220, 1}, {203, 1} };
Segment ringSegment37 = { SIZE(ringSec37), ringSec37, true }; //numSections, section array pointer, direction

segmentSection ringSec38[] = { {211, 1}, {219, 1}, {204, 1} };
Segment ringSegment38 = { SIZE(ringSec38), ringSec38, true }; //numSections, section array pointer, direction

segmentSection ringSec39[] = { {210, 1}, {218, 1}, {205, 1} };
Segment ringSegment39 = { SIZE(ringSec39), ringSec39, true }; //numSections, section array pointer, direction

segmentSection ringSec40[] = { {209, 1}, {217, 1}, {206, 1} };
Segment ringSegment40 = { SIZE(ringSec40), ringSec40, true }; //numSections, section array pointer, direction

segmentSection ringSec41[] = { {208, 1}, {216, 1}, {207, 1} };
Segment ringSegment41 = { SIZE(ringSec41), ringSec41, true }; //numSections, section array pointer, direction

Segment *rings_arr[] = {
  &ringSegment0, &ringSegment1, &ringSegment2,  &ringSegment3,  &ringSegment4,  &ringSegment5,  &ringSegment6,  &ringSegment7,
  &ringSegment8, &ringSegment9, &ringSegment10, &ringSegment11, &ringSegment12, &ringSegment13, &ringSegment14, &ringSegment15,
  &ringSegment16,
  &ringSegment17, &ringSegment18, &ringSegment19, &ringSegment20, &ringSegment21, &ringSegment22, &ringSegment23, &ringSegment24,
  &ringSegment25,
  &ringSegment26, &ringSegment27, &ringSegment28, &ringSegment29, &ringSegment30, &ringSegment31, &ringSegment32, &ringSegment33,
  &ringSegment34, &ringSegment35, &ringSegment36, &ringSegment37, &ringSegment38, &ringSegment39, &ringSegment40, &ringSegment41
};
SegmentSet ringSegments = { SIZE(rings_arr), rings_arr };

//=====================================================

//segments for each edge of the dodecahedron
//numbering matches that of printed diagram
//ie line1 => edge 1 on the diagram
segmentSection line1 = {0, 8};
segmentSection line2 = {8, 8};
segmentSection line3 = {16, 8};
segmentSection line4 = {24, 8};
segmentSection line5 = {32, 8};
segmentSection line6 = {40, 8};
segmentSection line7 = {48, 8};
segmentSection line8 = {56, 8};
segmentSection line9 = {64, 8};
segmentSection line10 = {72, 8};
segmentSection line11 = {80, 8};
segmentSection line12 = {88, 8};
segmentSection line13 = {96, 8};
segmentSection line14 = {104, 8};
segmentSection line15 = {112, 8};
segmentSection line16 = {120, 8};
segmentSection line17 = {128, 8};
segmentSection line18 = {136, 8};
segmentSection line19 = {144, 8};
segmentSection line20 = {152, 8};
segmentSection line21 = {160, 8};
segmentSection line22 = {168, 8};
segmentSection line23 = {176, 8};
segmentSection line24 = {184, 8};
segmentSection line25 = {192, 8};
segmentSection line26 = {200, 8};
segmentSection line27 = {208, 8};
segmentSection line28 = {216, 8};
segmentSection line29 = {224, 8};
segmentSection line30 = {232, 8};

//lines with reversed directions based on printed diagram
segmentSection lineRev1 = {7, -8};
segmentSection lineRev2 = {15, -8};
segmentSection lineRev3 = {23, -8};
segmentSection lineRev4 = {31, -8};
segmentSection lineRev5 = {39, -8};
segmentSection lineRev6 = {47, -8};
segmentSection lineRev7 = {55, -8};
segmentSection lineRev8 = {63, -8};
segmentSection lineRev9 = {71, -8};
segmentSection lineRev10 = {79,-8};
segmentSection lineRev11 = {87, -8};
segmentSection lineRev12 = {95, -8};
segmentSection lineRev13 = {103, -8};
segmentSection lineRev14 = {111, -8};
segmentSection lineRev15 = {119, -8};
segmentSection lineRev16 = {127, -8};
segmentSection lineRev17 = {135, -8};
segmentSection lineRev18 = {143, -8};
segmentSection lineRev19 = {151, -8};
segmentSection lineRev20 = {159, -8};
segmentSection lineRev21 = {167, -8};
segmentSection lineRev22 = {175, -8};
segmentSection lineRev23 = {183, -8};
segmentSection lineRev24 = {191, -8};
segmentSection lineRev25 = {199, -8};
segmentSection lineRev26 = {207, -8};
segmentSection lineRev27 = {215, -8};
segmentSection lineRev28 = {223, -8};
segmentSection lineRev29 = {231, -8};
segmentSection lineRev30 = {239, -8};

//===============================
// vertical lines from base corner to top
//some lines overlap

segmentSection vertLineSec0[] = { lineRev5, lineRev4, lineRev15, lineRev14, lineRev27 }; //line5, line4, line15, line14, line27
Segment vertSegment0 = { SIZE(vertLineSec0), vertLineSec0, true }; //numSections, section array pointer, direction 

segmentSection vertLineSec1[] = { lineRev5, lineRev18, lineRev17, lineRev29, lineRev28 };
Segment vertSegment1 = { SIZE(vertLineSec1), vertLineSec1, true }; //numSections, section array pointer, direction 

segmentSection vertLineSec2[] = { line6, lineRev20, line21, lineRev30, lineRev28 };
Segment vertSegment2 = { SIZE(vertLineSec2), vertLineSec2, true }; //numSections, section array pointer, direction 

segmentSection vertLineSec3[] = { line6, line7, lineRev23, line24, line26 };
Segment vertSegment3 = { SIZE(vertLineSec3), vertLineSec3, true }; //numSections, section array pointer, direction 

segmentSection vertLineSec4[] = { line1, lineRev9, line10, lineRev25, line26 };
Segment vertSegment4 = { SIZE(vertLineSec4), vertLineSec4, true }; //numSections, section array pointer, direction 

segmentSection vertLineSec5[] = { line1, line2, lineRev12, line13, lineRev27 };
Segment vertSegment5 = { SIZE(vertLineSec5), vertLineSec5, true }; //numSections, section array pointer, direction 

Segment *vertLine_arr[] = { &vertSegment0, &vertSegment1, &vertSegment2, &vertSegment3, &vertSegment4, &vertSegment5 };
SegmentSet vertLineSegments = { SIZE(vertLine_arr), vertLine_arr };

//===================================================

//Hexes going clockwise, starting at base

segmentSection hexSec0[] = { line1, line2, line3, line4, line5 }; 
Segment hexSegment0 = { SIZE(hexSec0), hexSec0, true }; //numSections, section array pointer, direction 

segmentSection hexSec1[] = { line6, line7, line8, line9, lineRev1 }; 
Segment hexSegment1 = { SIZE(hexSec1), hexSec1, true }; //numSections, section array pointer, direction 

segmentSection hexSec2[] = { lineRev5, lineRev18, line19, line20, lineRev6 };
Segment hexSegment2 = { SIZE(hexSec2), hexSec2, true }; //numSections, section array pointer, direction 

segmentSection hexSec3[] = { line18, lineRev4, lineRev15, line16, line17 };
Segment hexSegment3 = { SIZE(hexSec3), hexSec3, true }; //numSections, section array pointer, direction 

segmentSection hexSec4[] = { lineRev3, lineRev12, line13, line14, line15 };
Segment hexSegment4 = { SIZE(hexSec4), hexSec4, true }; //numSections, section array pointer, direction 

segmentSection hexSec5[] = { lineRev2, lineRev9, line10, line11, line12 };
Segment hexSegment5 = { SIZE(hexSec5), hexSec5, true }; //numSections, section array pointer, direction 

segmentSection hexSec6[] = { lineRev8, lineRev23, line24, line25, lineRev10 };
Segment hexSegment6 = { SIZE(hexSec6), hexSec6, true }; //numSections, section array pointer, direction 

segmentSection hexSec7[] = { lineRev7, lineRev20, line21, line22, line23 };
Segment hexSegment7 = { SIZE(hexSec7), hexSec7, true }; //numSections, section array pointer, direction 

segmentSection hexSec8[] = { lineRev19, lineRev17, lineRev29, line30, lineRev21 };
Segment hexSegment8 = { SIZE(hexSec8), hexSec8, true }; //numSections, section array pointer, direction 

segmentSection hexSec9[] = { lineRev16, lineRev14, lineRev27, line28, line29 };
Segment hexSegment9 = { SIZE(hexSec9), hexSec9, true }; //numSections, section array pointer, direction 

segmentSection hexSec10[] = { lineRev11, lineRev25, line26, line27, lineRev13 };
Segment hexSegment10 = { SIZE(hexSec10), hexSec10, true }; //numSections, section array pointer, direction 

segmentSection hexSec11[] = { lineRev30, lineRev28, lineRev26, lineRev24, lineRev22 };
Segment hexSegment11 = { SIZE(hexSec11), hexSec11, true }; //numSections, section array pointer, direction 

Segment *hex_arr[] = { &hexSegment0, &hexSegment1, &hexSegment2, &hexSegment3, &hexSegment4, &hexSegment6, &hexSegment8, &hexSegment10, &hexSegment11 };
SegmentSet hexSegments = { SIZE(hex_arr), hex_arr };

//============================================

segmentSection horizSec0[] = { line3, line4, lineRev18, line19, line20, line7, line8, line9, line2 }; 
Segment horizSegment0 = { SIZE(horizSec0), horizSec0, true }; //numSections, section array pointer, direction

segmentSection horizSec1[] = { line13, line14, line16, lineRev29, line30, line22, line24, line25, line11 }; 
Segment horizSegment1 = { SIZE(horizSec1), horizSec1, true }; //numSections, section array pointer, direction

Segment *horiz_arr[] = { &horizSegment0, &horizSegment1 };
SegmentSet horizSegments = { SIZE(horiz_arr), horiz_arr };

//================================================

//resets all the segments to their default directions (as set in segmentDefs)
void resetSegDirections() {
  ringSegments.setsegDirectionEvery(1, true, true);
  
  vertLineSegments.setsegDirectionEvery(1, true, true);
  
  hexSegments.setsegDirectionEvery(1, true, true);
  
  horizSegments.setsegDirectionEvery(1, true, true);
}
