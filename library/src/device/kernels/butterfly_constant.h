/*******************************************************************************
 * Copyright (C) 2016 Advanced Micro Devices, Inc. All rights reserved.
 ******************************************************************************/

#pragma once

#ifndef BUTTERFLY_CONSTANT_H
#define BUTTERFLY_CONSTANT_H

#include "common.h"

// butterfly radix-3 constants
#define C3QA static_cast<real_type_t<T>>(0.50000000000000000000000000000000)
#define C3QB static_cast<real_type_t<T>>(0.86602540378443864676372317075294)

// butterfly radix-5 constants
#define C5QA static_cast<real_type_t<T>>(0.30901699437494742410229341718282)
#define C5QB static_cast<real_type_t<T>>(0.95105651629515357211643933337938)
#define C5QC static_cast<real_type_t<T>>(0.50000000000000000000000000000000)
#define C5QD static_cast<real_type_t<T>>(0.58778525229247312916870595463907)
#define C5QE static_cast<real_type_t<T>>(0.80901699437494742410229341718282)

// butterfly radix-7 constants
#define C7Q1 static_cast<real_type_t<T>>(-1.16666666666666651863693004997913)
#define C7Q2 static_cast<real_type_t<T>>(0.79015646852540022404554065360571)
#define C7Q3 static_cast<real_type_t<T>>(0.05585426728964774240049351305970)
#define C7Q4 static_cast<real_type_t<T>>(0.73430220123575240531721419756650)
#define C7Q5 static_cast<real_type_t<T>>(0.44095855184409837868031445395900)
#define C7Q6 static_cast<real_type_t<T>>(0.34087293062393136944265847887436)
#define C7Q7 static_cast<real_type_t<T>>(-0.53396936033772524066165487965918)
#define C7Q8 static_cast<real_type_t<T>>(0.87484229096165666561546458979137)

// butterfly radix-8 constants
#define C8Q static_cast<real_type_t<T>>(0.70710678118654752440084436210485)

//
// For radix-11 and radix-13 the butterfly constants correspond to
// the roots of unity for the radix; and are named according to:
//
//   "Q" + radix + "i" + i + "j" + j + "R"/"I"
//
// where i and j are the row/col indicies of the DFT matrix A
// corresponding to the radix and R/I is the real/imaginary part.
// More specifically:
//
//  A[i,j] = exp(-2 pi I i j / radix)
//
// and hence, for example
//
//  Q11i2j5R = Re( exp(-2 pi I 2 * 5 / 11) )
//

// butterfly radix-11 constants
#define Q11i1j1R static_cast<real_type_t<T>>((0.8412535328311811688618))
#define Q11i1j1I static_cast<real_type_t<T>>((-0.5406408174555975821076))
#define Q11i1j2R static_cast<real_type_t<T>>((0.4154150130018864255293))
#define Q11i1j2I static_cast<real_type_t<T>>((-0.9096319953545183714117))
#define Q11i1j3R static_cast<real_type_t<T>>((-0.1423148382732851404438))
#define Q11i1j3I static_cast<real_type_t<T>>((-0.9898214418809327323761))
#define Q11i1j4R static_cast<real_type_t<T>>((-0.6548607339452850640569))
#define Q11i1j4I static_cast<real_type_t<T>>((-0.7557495743542582837740))
#define Q11i1j5R static_cast<real_type_t<T>>((-0.9594929736144973898904))
#define Q11i1j5I static_cast<real_type_t<T>>((-0.2817325568414296977114))
#define Q11i2j1R static_cast<real_type_t<T>>((0.4154150130018864255293))
#define Q11i2j1I static_cast<real_type_t<T>>((-0.9096319953545183714117))
#define Q11i2j2R static_cast<real_type_t<T>>((-0.6548607339452850640569))
#define Q11i2j2I static_cast<real_type_t<T>>((-0.7557495743542582837740))
#define Q11i2j3R static_cast<real_type_t<T>>((-0.9594929736144973898904))
#define Q11i2j3I static_cast<real_type_t<T>>((0.2817325568414296977114))
#define Q11i2j4R static_cast<real_type_t<T>>((-0.1423148382732851404438))
#define Q11i2j4I static_cast<real_type_t<T>>((0.9898214418809327323761))
#define Q11i2j5R static_cast<real_type_t<T>>((0.8412535328311811688618))
#define Q11i2j5I static_cast<real_type_t<T>>((0.5406408174555975821076))
#define Q11i3j1R static_cast<real_type_t<T>>((-0.1423148382732851404438))
#define Q11i3j1I static_cast<real_type_t<T>>((-0.9898214418809327323761))
#define Q11i3j2R static_cast<real_type_t<T>>((-0.9594929736144973898904))
#define Q11i3j2I static_cast<real_type_t<T>>((0.2817325568414296977114))
#define Q11i3j3R static_cast<real_type_t<T>>((0.4154150130018864255293))
#define Q11i3j3I static_cast<real_type_t<T>>((0.9096319953545183714117))
#define Q11i3j4R static_cast<real_type_t<T>>((0.8412535328311811688618))
#define Q11i3j4I static_cast<real_type_t<T>>((-0.5406408174555975821076))
#define Q11i3j5R static_cast<real_type_t<T>>((-0.6548607339452850640569))
#define Q11i3j5I static_cast<real_type_t<T>>((-0.7557495743542582837740))
#define Q11i4j1R static_cast<real_type_t<T>>((-0.6548607339452850640569))
#define Q11i4j1I static_cast<real_type_t<T>>((-0.7557495743542582837740))
#define Q11i4j2R static_cast<real_type_t<T>>((-0.1423148382732851404438))
#define Q11i4j2I static_cast<real_type_t<T>>((0.9898214418809327323761))
#define Q11i4j3R static_cast<real_type_t<T>>((0.8412535328311811688618))
#define Q11i4j3I static_cast<real_type_t<T>>((-0.5406408174555975821076))
#define Q11i4j4R static_cast<real_type_t<T>>((-0.9594929736144973898904))
#define Q11i4j4I static_cast<real_type_t<T>>((-0.2817325568414296977114))
#define Q11i4j5R static_cast<real_type_t<T>>((0.4154150130018864255293))
#define Q11i4j5I static_cast<real_type_t<T>>((0.9096319953545183714117))
#define Q11i5j1R static_cast<real_type_t<T>>((-0.9594929736144973898904))
#define Q11i5j1I static_cast<real_type_t<T>>((-0.2817325568414296977114))
#define Q11i5j2R static_cast<real_type_t<T>>((0.8412535328311811688618))
#define Q11i5j2I static_cast<real_type_t<T>>((0.5406408174555975821076))
#define Q11i5j3R static_cast<real_type_t<T>>((-0.6548607339452850640569))
#define Q11i5j3I static_cast<real_type_t<T>>((-0.7557495743542582837740))
#define Q11i5j4R static_cast<real_type_t<T>>((0.4154150130018864255293))
#define Q11i5j4I static_cast<real_type_t<T>>((0.9096319953545183714117))
#define Q11i5j5R static_cast<real_type_t<T>>((-0.1423148382732851404438))
#define Q11i5j5I static_cast<real_type_t<T>>((-0.9898214418809327323761))

// butterfly radix-13 constants
#define Q13i1j1R static_cast<real_type_t<T>>((0.8854560256532098959004))
#define Q13i1j1I static_cast<real_type_t<T>>((-0.4647231720437685456560))
#define Q13i1j2R static_cast<real_type_t<T>>((0.5680647467311558025118))
#define Q13i1j2I static_cast<real_type_t<T>>((-0.8229838658936563945796))
#define Q13i1j3R static_cast<real_type_t<T>>((0.1205366802553230533491))
#define Q13i1j3I static_cast<real_type_t<T>>((-0.9927088740980539928007))
#define Q13i1j4R static_cast<real_type_t<T>>((-0.3546048870425356259696))
#define Q13i1j4I static_cast<real_type_t<T>>((-0.9350162426854148234398))
#define Q13i1j5R static_cast<real_type_t<T>>((-0.7485107481711010986346))
#define Q13i1j5I static_cast<real_type_t<T>>((-0.6631226582407952023768))
#define Q13i1j6R static_cast<real_type_t<T>>((-0.9709418174260520271570))
#define Q13i1j6I static_cast<real_type_t<T>>((-0.2393156642875577671488))
#define Q13i2j1R static_cast<real_type_t<T>>((0.5680647467311558025118))
#define Q13i2j1I static_cast<real_type_t<T>>((-0.8229838658936563945796))
#define Q13i2j2R static_cast<real_type_t<T>>((-0.3546048870425356259696))
#define Q13i2j2I static_cast<real_type_t<T>>((-0.9350162426854148234398))
#define Q13i2j3R static_cast<real_type_t<T>>((-0.9709418174260520271570))
#define Q13i2j3I static_cast<real_type_t<T>>((-0.2393156642875577671488))
#define Q13i2j4R static_cast<real_type_t<T>>((-0.7485107481711010986346))
#define Q13i2j4I static_cast<real_type_t<T>>((0.6631226582407952023768))
#define Q13i2j5R static_cast<real_type_t<T>>((0.1205366802553230533491))
#define Q13i2j5I static_cast<real_type_t<T>>((0.9927088740980539928007))
#define Q13i2j6R static_cast<real_type_t<T>>((0.8854560256532098959004))
#define Q13i2j6I static_cast<real_type_t<T>>((0.4647231720437685456560))
#define Q13i3j1R static_cast<real_type_t<T>>((0.1205366802553230533491))
#define Q13i3j1I static_cast<real_type_t<T>>((-0.9927088740980539928007))
#define Q13i3j2R static_cast<real_type_t<T>>((-0.9709418174260520271570))
#define Q13i3j2I static_cast<real_type_t<T>>((-0.2393156642875577671488))
#define Q13i3j3R static_cast<real_type_t<T>>((-0.3546048870425356259696))
#define Q13i3j3I static_cast<real_type_t<T>>((0.9350162426854148234398))
#define Q13i3j4R static_cast<real_type_t<T>>((0.8854560256532098959004))
#define Q13i3j4I static_cast<real_type_t<T>>((0.4647231720437685456560))
#define Q13i3j5R static_cast<real_type_t<T>>((0.5680647467311558025118))
#define Q13i3j5I static_cast<real_type_t<T>>((-0.8229838658936563945796))
#define Q13i3j6R static_cast<real_type_t<T>>((-0.7485107481711010986346))
#define Q13i3j6I static_cast<real_type_t<T>>((-0.6631226582407952023768))
#define Q13i4j1R static_cast<real_type_t<T>>((-0.3546048870425356259696))
#define Q13i4j1I static_cast<real_type_t<T>>((-0.9350162426854148234398))
#define Q13i4j2R static_cast<real_type_t<T>>((-0.7485107481711010986346))
#define Q13i4j2I static_cast<real_type_t<T>>((0.6631226582407952023768))
#define Q13i4j3R static_cast<real_type_t<T>>((0.8854560256532098959004))
#define Q13i4j3I static_cast<real_type_t<T>>((0.4647231720437685456560))
#define Q13i4j4R static_cast<real_type_t<T>>((0.1205366802553230533491))
#define Q13i4j4I static_cast<real_type_t<T>>((-0.9927088740980539928007))
#define Q13i4j5R static_cast<real_type_t<T>>((-0.9709418174260520271570))
#define Q13i4j5I static_cast<real_type_t<T>>((0.2393156642875577671488))
#define Q13i4j6R static_cast<real_type_t<T>>((0.5680647467311558025118))
#define Q13i4j6I static_cast<real_type_t<T>>((0.8229838658936563945796))
#define Q13i5j1R static_cast<real_type_t<T>>((-0.7485107481711010986346))
#define Q13i5j1I static_cast<real_type_t<T>>((-0.6631226582407952023768))
#define Q13i5j2R static_cast<real_type_t<T>>((0.1205366802553230533491))
#define Q13i5j2I static_cast<real_type_t<T>>((0.9927088740980539928007))
#define Q13i5j3R static_cast<real_type_t<T>>((0.5680647467311558025118))
#define Q13i5j3I static_cast<real_type_t<T>>((-0.8229838658936563945796))
#define Q13i5j4R static_cast<real_type_t<T>>((-0.9709418174260520271570))
#define Q13i5j4I static_cast<real_type_t<T>>((0.2393156642875577671488))
#define Q13i5j5R static_cast<real_type_t<T>>((0.8854560256532098959004))
#define Q13i5j5I static_cast<real_type_t<T>>((0.4647231720437685456560))
#define Q13i5j6R static_cast<real_type_t<T>>((-0.3546048870425356259696))
#define Q13i5j6I static_cast<real_type_t<T>>((-0.9350162426854148234398))
#define Q13i6j1R static_cast<real_type_t<T>>((-0.9709418174260520271570))
#define Q13i6j1I static_cast<real_type_t<T>>((-0.2393156642875577671488))
#define Q13i6j2R static_cast<real_type_t<T>>((0.8854560256532098959004))
#define Q13i6j2I static_cast<real_type_t<T>>((0.4647231720437685456560))
#define Q13i6j3R static_cast<real_type_t<T>>((-0.7485107481711010986346))
#define Q13i6j3I static_cast<real_type_t<T>>((-0.6631226582407952023768))
#define Q13i6j4R static_cast<real_type_t<T>>((0.5680647467311558025118))
#define Q13i6j4I static_cast<real_type_t<T>>((0.8229838658936563945796))
#define Q13i6j5R static_cast<real_type_t<T>>((-0.3546048870425356259696))
#define Q13i6j5I static_cast<real_type_t<T>>((-0.9350162426854148234398))
#define Q13i6j6R static_cast<real_type_t<T>>((0.1205366802553230533491))
#define Q13i6j6I static_cast<real_type_t<T>>((0.9927088740980539928007))

// butterfly radix-11 constants
#define b11_0 static_cast<real_type_t<T>>(0.9898214418809327)
#define b11_1 static_cast<real_type_t<T>>(0.9594929736144973)
#define b11_2 static_cast<real_type_t<T>>(0.9189859472289947)
#define b11_3 static_cast<real_type_t<T>>(0.8767688310025893)
#define b11_4 static_cast<real_type_t<T>>(0.8308300260037728)
#define b11_5 static_cast<real_type_t<T>>(0.7784344533346518)
#define b11_6 static_cast<real_type_t<T>>(0.7153703234534297)
#define b11_7 static_cast<real_type_t<T>>(0.6343562706824244)
#define b11_8 static_cast<real_type_t<T>>(0.3425847256816375)
#define b11_9 static_cast<real_type_t<T>>(0.5211085581132027)

// butterfly radix-13 constants
#define b13_0 static_cast<real_type_t<T>>(0.9682872443619840)
#define b13_1 static_cast<real_type_t<T>>(0.9578059925946651)
#define b13_2 static_cast<real_type_t<T>>(0.8755023024091479)
#define b13_3 static_cast<real_type_t<T>>(0.8660254037844386)
#define b13_4 static_cast<real_type_t<T>>(0.8595425350987748)
#define b13_5 static_cast<real_type_t<T>>(0.8534800018598239)
#define b13_6 static_cast<real_type_t<T>>(0.7693388175729806)
#define b13_7 static_cast<real_type_t<T>>(0.6865583707817543)
#define b13_8 static_cast<real_type_t<T>>(0.6122646503767565)
#define b13_9 static_cast<real_type_t<T>>(0.6004772719326652)
#define b13_10 static_cast<real_type_t<T>>(0.5817047785105157)
#define b13_11 static_cast<real_type_t<T>>(0.5751407294740031)
#define b13_12 static_cast<real_type_t<T>>(0.5220263851612750)
#define b13_13 static_cast<real_type_t<T>>(0.5200285718888646)
#define b13_14 static_cast<real_type_t<T>>(0.5165207806234897)
#define b13_15 static_cast<real_type_t<T>>(0.5149187780863157)
#define b13_16 static_cast<real_type_t<T>>(0.5035370328637666)
#define b13_17 static_cast<real_type_t<T>>(0.5000000000000000)
#define b13_18 static_cast<real_type_t<T>>(0.3027756377319946)
#define b13_19 static_cast<real_type_t<T>>(0.3014792600477098)
#define b13_20 static_cast<real_type_t<T>>(0.3004626062886657)
#define b13_21 static_cast<real_type_t<T>>(0.2517685164318833)
#define b13_22 static_cast<real_type_t<T>>(0.2261094450357824)
#define b13_23 static_cast<real_type_t<T>>(0.0833333333333333)
#define b13_24 static_cast<real_type_t<T>>(0.0386329546443481)

// butterfly radix-16 constants
#define C16A static_cast<real_type_t<T>>(0.923879532511286738)
#define C16B static_cast<real_type_t<T>>(0.382683432365089837)

#endif //  BUTTERFLY_CONSTANT_H
