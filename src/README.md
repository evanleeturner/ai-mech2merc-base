# Which function is which

Each file in this folder holds one function rebuilt from the original program
and is named by that function's address in the program, a number that never
changes while a name can. The function's name is inside its file, and the
tables below list each function named so far, with a link to its file.

A name's ending says how sure it is: no ending for high confidence, `_Likely`
for medium and `_Guess` for low. When a second AI model of the same family
checked 112 proposed names, it agreed with 29 of the 37 given high confidence,
42 of the 69 given medium and 2 of the 6 given low.

117 of the 2,018 functions here have names; the rest still carry the stand-in
names the decompiler (the tool that turned the program's machine code back
into C) gave them, `FUN_` and the address. A name marked as the decompiler's
came with its output and is kept as it was.

## The game, `MERCSW.DLL`

Its files are in `mercsw/`. 56 of its 1,468 functions have names.

| Name | How sure | File |
| --- | --- | --- |
| `ApproxLength3_Likely` | medium | [mercsw/1000fc30.c](mercsw/1000fc30.c) |
| `block` | the decompiler's | [mercsw/100544ee.c](mercsw/100544ee.c) |
| `CheckedFixedDiv16` | high | [mercsw/10066ec0.c](mercsw/10066ec0.c) |
| `ClampedAdd1024_Likely` | medium | [mercsw/1002b08b.c](mercsw/1002b08b.c) |
| `ClampSymmetric` | high | [mercsw/100447bf.c](mercsw/100447bf.c) |
| `ComputeSamplePan` | high | [mercsw/1000381c.c](mercsw/1000381c.c) |
| `ComputeVolumeFalloffPercent` | high | [mercsw/10003cf8.c](mercsw/10003cf8.c) |
| `DirectDrawCreate` | the decompiler's | [mercsw/10089e1e.c](mercsw/10089e1e.c) |
| `EnsureSegmentDirection` | high | [mercsw/1002637d.c](mercsw/1002637d.c) |
| `FillBitGroups_Likely` | medium | [mercsw/1006c340.c](mercsw/1006c340.c) |
| `FindCacheEntry` | high | [mercsw/1008628d.c](mercsw/1008628d.c) |
| `FixedDot3Shift27` | high | [mercsw/1001a080.c](mercsw/1001a080.c) |
| `FixedDot3Shift29` | high | [mercsw/10035980.c](mercsw/10035980.c) |
| `FixedMul16` | high | [mercsw/10003d60.c](mercsw/10003d60.c) |
| `FixedMul29` | high | [mercsw/10015b30.c](mercsw/10015b30.c) |
| `FixedMul30` | high | [mercsw/1001a060.c](mercsw/1001a060.c) |
| `FixedSqrt16` | high | [mercsw/1000fe30.c](mercsw/1000fe30.c) |
| `GetUnitSize` | high | [mercsw/10022aaa.c](mercsw/10022aaa.c) |
| `HandleSampleEnd` | high | [mercsw/100033ce.c](mercsw/100033ce.c) |
| `IndexBitWidth_Likely` | medium | [mercsw/10064d15.c](mercsw/10064d15.c) |
| `InitBitmapHeader8Bit` | high | [mercsw/100821fe.c](mercsw/100821fe.c) |
| `IsWithinBounds_Likely` | medium | [mercsw/10046fc9.c](mercsw/10046fc9.c) |
| `IsWithinRadius3_Likely` | medium | [mercsw/1003c190.c](mercsw/1003c190.c) |
| `LerpRect` | high | [mercsw/10003dc4.c](mercsw/10003dc4.c) |
| `MapRectIntoRect` | high | [mercsw/10065ebf.c](mercsw/10065ebf.c) |
| `MuteMidiChannel` | high | [mercsw/1003ca49.c](mercsw/1003ca49.c) |
| `NormalizeVec3` | high | [mercsw/1000fef4.c](mercsw/1000fef4.c) |
| `Ordinal_1` | the decompiler's | [mercsw/10089e24.c](mercsw/10089e24.c) |
| `Ordinal_2` | the decompiler's | [mercsw/10089e2a.c](mercsw/10089e2a.c) |
| `PlayMciDeviceFromTo` | high | [mercsw/100463ee.c](mercsw/100463ee.c) |
| `PointFrom319x199` | high | [mercsw/100662fd.c](mercsw/100662fd.c) |
| `ProcessKeyboardMessages` | high | [mercsw/10070276.c](mercsw/10070276.c) |
| `RaySlabInterval` | high | [mercsw/10026815.c](mercsw/10026815.c) |
| `RectBareFrom319x199` | high | [mercsw/10066284.c](mercsw/10066284.c) |
| `RectFrom319x199` | high | [mercsw/10066209.c](mercsw/10066209.c) |
| `RefillStreamingSampleBuffers` | high | [mercsw/10002849.c](mercsw/10002849.c) |
| `RemoveBettyQueueEntry` | high | [mercsw/10007dc0.c](mercsw/10007dc0.c) |
| `ResumeMciDevice` | high | [mercsw/1004639a.c](mercsw/1004639a.c) |
| `RtlUnwind` | the decompiler's | [mercsw/100a01e0.c](mercsw/100a01e0.c) |
| `ScaleBy150Or75Percent_Likely` | medium | [mercsw/10072715.c](mercsw/10072715.c) |
| `ScaledDiffShift_Likely` | medium | [mercsw/10055b60.c](mercsw/10055b60.c) |
| `ScalePoint` | high | [mercsw/10066004.c](mercsw/10066004.c) |
| `ScalePointBySize` | high | [mercsw/100660e1.c](mercsw/100660e1.c) |
| `ScaleRect` | high | [mercsw/10065e40.c](mercsw/10065e40.c) |
| `ScaleRectAboutCenter` | high | [mercsw/100663e5.c](mercsw/100663e5.c) |
| `ScaleRectBare` | high | [mercsw/10065f87.c](mercsw/10065f87.c) |
| `ScaleRectBareBySize` | high | [mercsw/1006604b.c](mercsw/1006604b.c) |
| `SetAuxDeviceVolume` | high | [mercsw/10047052.c](mercsw/10047052.c) |
| `SetCurrentNode` | high | [mercsw/1001c299.c](mercsw/1001c299.c) |
| `SetSegmentFromDirection` | high | [mercsw/1002628c.c](mercsw/1002628c.c) |
| `SimWindowProc` | the decompiler's | [mercsw/10037859.c](mercsw/10037859.c) |
| `StopAllSamples` | high | [mercsw/1000389e.c](mercsw/1000389e.c) |
| `StopAndFreeAllSamples` | high | [mercsw/1000278e.c](mercsw/1000278e.c) |
| `StopAndReleaseSoundSample` | high | [mercsw/10003c3e.c](mercsw/10003c3e.c) |
| `StopMciDevice` | high | [mercsw/100463c4.c](mercsw/100463c4.c) |
| `SwapOneAndTwo` | high | [mercsw/1002b48b.c](mercsw/1002b48b.c) |

## The menus, `MW2SHELL.DLL`

Its files are in `mw2shell/`. 60 of its 542 functions have names.

| Name | How sure | File |
| --- | --- | --- |
| `_SmackClose` | the decompiler's | [mw2shell/1006e746.c](mw2shell/1006e746.c) |
| `_SmackColorRemap` | the decompiler's | [mw2shell/1006e77c.c](mw2shell/1006e77c.c) |
| `_SmackDoFrame` | the decompiler's | [mw2shell/1006e74c.c](mw2shell/1006e74c.c) |
| `_SmackGoto` | the decompiler's | [mw2shell/1006e764.c](mw2shell/1006e764.c) |
| `_SmackNextFrame` | the decompiler's | [mw2shell/1006e75e.c](mw2shell/1006e75e.c) |
| `_SmackOpen` | the decompiler's | [mw2shell/1006e758.c](mw2shell/1006e758.c) |
| `_SmackSoundInTrack` | the decompiler's | [mw2shell/1006e776.c](mw2shell/1006e776.c) |
| `_SmackToBuffer` | the decompiler's | [mw2shell/1006e752.c](mw2shell/1006e752.c) |
| `_SmackWait` | the decompiler's | [mw2shell/1006e76a.c](mw2shell/1006e76a.c) |
| `AppendHundredByteRecord_Likely` | medium | [mw2shell/1005e290.c](mw2shell/1005e290.c) |
| `ApplyToAll32Slots` | high | [mw2shell/1000f360.c](mw2shell/1000f360.c) |
| `BlitBufferToScreen_Likely` | medium | [mw2shell/1000df80.c](mw2shell/1000df80.c) |
| `BuildCountedListRows_Likely` | medium | [mw2shell/10033f40.c](mw2shell/10033f40.c) |
| `CallGatedBetweenPrePostCalls_Likely` | medium | [mw2shell/10013100.c](mw2shell/10013100.c) |
| `CallSameMethodWith10And11_Likely` | medium | [mw2shell/1003a5c0.c](mw2shell/1003a5c0.c) |
| `CallTableEntry5WithObjectFields` | high | [mw2shell/100125f0.c](mw2shell/100125f0.c) |
| `CaptureSystemPaletteStaticColors` | high | [mw2shell/1000e330.c](mw2shell/1000e330.c) |
| `CenterTextAtX_Likely` | medium | [mw2shell/1000c4c0.c](mw2shell/1000c4c0.c) |
| `ClearAllEntryFlags` | high | [mw2shell/10063ee0.c](mw2shell/10063ee0.c) |
| `CloseSmackerFileIfOpen` | high | [mw2shell/1000eb90.c](mw2shell/1000eb90.c) |
| `CloseWaveOutDriver` | high | [mw2shell/10010820.c](mw2shell/10010820.c) |
| `ComputeSlotGridDifferenceScore_Likely` | medium | [mw2shell/1002fea0.c](mw2shell/1002fea0.c) |
| `ConstructSampleFromFileImage_Likely` | medium | [mw2shell/10010bc0.c](mw2shell/10010bc0.c) |
| `CountDistinctEntryKeys_Likely` | medium | [mw2shell/1000cd20.c](mw2shell/1000cd20.c) |
| `CreateDIBSectionOrSetColorTable` | high | [mw2shell/1000dee0.c](mw2shell/1000dee0.c) |
| `DirectDrawCreate` | the decompiler's | [mw2shell/1006e740.c](mw2shell/1006e740.c) |
| `DispatchFirstQueuedEntry_Likely` | medium | [mw2shell/1000f8d0.c](mw2shell/1000f8d0.c) |
| `EnableMenuCommands_Likely` | medium | [mw2shell/10016620.c](mw2shell/10016620.c) |
| `EntryAddress120_Likely` | medium | [mw2shell/100576a0.c](mw2shell/100576a0.c) |
| `FillKeyboardEntryRecord_Likely` | medium | [mw2shell/1005b600.c](mw2shell/1005b600.c) |
| `FindListEntryByKey_Likely` | medium | [mw2shell/1000ad30.c](mw2shell/1000ad30.c) |
| `FlushPendingUpdates_Likely` | medium | [mw2shell/10012830.c](mw2shell/10012830.c) |
| `GenerateBwdChunkRevNumber` | high | [mw2shell/10017b70.c](mw2shell/10017b70.c) |
| `GetFieldAtOffset4` | high | [mw2shell/10050490.c](mw2shell/10050490.c) |
| `GrayMenuCommands_Likely` | medium | [mw2shell/100166c0.c](mw2shell/100166c0.c) |
| `GrowRecordArray_Likely` | medium | [mw2shell/100578d0.c](mw2shell/100578d0.c) |
| `IsPointInsideRect` | high | [mw2shell/10056bb0.c](mw2shell/10056bb0.c) |
| `IsSlotHighBitSetBit0Clear` | high | [mw2shell/1000f110.c](mw2shell/1000f110.c) |
| `LoadLogoCelIntoBuffer_Likely` | medium | [mw2shell/10057530.c](mw2shell/10057530.c) |
| `MarkTableEntryUnset_Likely` | medium | [mw2shell/100361a0.c](mw2shell/100361a0.c) |
| `MultiplyBy625` | high | [mw2shell/1000cfe0.c](mw2shell/1000cfe0.c) |
| `OffsetBoxCoords_Likely` | medium | [mw2shell/10056c20.c](mw2shell/10056c20.c) |
| `PickEntryFromFourTables_Likely` | medium | [mw2shell/10057200.c](mw2shell/10057200.c) |
| `ReadMw2DifCfgFile` | high | [mw2shell/1005ab30.c](mw2shell/1005ab30.c) |
| `ReadMw2SndCfgFile` | high | [mw2shell/1005aaf0.c](mw2shell/1005aaf0.c) |
| `RemapEntryIndicesByName_Likely` | medium | [mw2shell/10053df0.c](mw2shell/10053df0.c) |
| `ResetListsAndProcessEntries_Likely` | medium | [mw2shell/1000c990.c](mw2shell/1000c990.c) |
| `RollRandomNumber_Likely` | medium | [mw2shell/10056be0.c](mw2shell/10056be0.c) |
| `RoundUpTo100_Likely` | medium | [mw2shell/1000a120.c](mw2shell/1000a120.c) |
| `RtlUnwind` | the decompiler's | [mw2shell/1007e170.c](mw2shell/1007e170.c) |
| `RunPendingCallback_Likely` | medium | [mw2shell/1005f900.c](mw2shell/1005f900.c) |
| `SetOneObjectPerTripleByIndex_Likely` | medium | [mw2shell/10011d20.c](mw2shell/10011d20.c) |
| `SetPaletteRangeAndRealize` | high | [mw2shell/1000e1a0.c](mw2shell/1000e1a0.c) |
| `ShowMessageDialog` | high | [mw2shell/1005b1b0.c](mw2shell/1005b1b0.c) |
| `SkipFirstWordIfOverLimit_Likely` | medium | [mw2shell/1000d3d0.c](mw2shell/1000d3d0.c) |
| `SwapArrayEntries` | high | [mw2shell/10056c60.c](mw2shell/10056c60.c) |
| `TruncateTo100` | high | [mw2shell/1000a140.c](mw2shell/1000a140.c) |
| `UnregisterMenuFunction_Likely` | medium | [mw2shell/10016ca0.c](mw2shell/10016ca0.c) |
| `ZeroSeventeenGlobals` | high | [mw2shell/100116b0.c](mw2shell/100116b0.c) |
| `ZeroTenGlobalsSetOneToMinusOne` | high | [mw2shell/1003a640.c](mw2shell/1003a640.c) |

## The launcher, `MERCSWIN.EXE`

Its files are in `mercswin/`. 1 of its 8 functions has a name.

| Name | How sure | File |
| --- | --- | --- |
| `RtlUnwind` | the decompiler's | [mercswin/00405ac0.c](mercswin/00405ac0.c) |
