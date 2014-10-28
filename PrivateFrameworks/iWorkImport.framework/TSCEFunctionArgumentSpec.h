/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, TSCEFunctionSpec;

@interface TSCEFunctionArgumentSpec : NSObject {
    int mAccessorMode;
    int mArgumentContext;
    int mArgumentType;
    short mDefaultModeIndex;
    BOOL mDisallowCurrency;
    BOOL mDisallowDuration;
    NSArray *mDisallowedTypes;
    BOOL mForceArrayMode;
    TSCEFunctionSpec *mFunctionSpec;
    short mIndex;
    BOOL mIsInteger;
    BOOL mMaxInclusive;
    double mMaxValue;
    BOOL mMinInclusive;
    double mMinValue;
    struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x1; struct TSCEValue {} *x2; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_3_1_1; } x3; } *mModeValues;
    int mRangeContext;
    BOOL mReferenceForGeometryOnly;
}

@property(readonly) /* Warning: unhandled struct encoding: '{vector<TSCEValue' */ struct * modeValues; /* unknown property attribute:  std::__1::allocator<TSCEValue> >=^{TSCEValue}}} */
@property(readonly) short defaultModeIndex;
@property TSCEFunctionSpec * functionSpec;

+ (id)argumentSpecWithIndex:(short)arg1 type:(int)arg2 accessorMode:(int)arg3 disallowedTypes:(id)arg4 argumentContext:(int)arg5 rangeContext:(int)arg6 minValue:(double)arg7 minInclusive:(BOOL)arg8 maxValue:(double)arg9 maxInclusive:(BOOL)arg10 isInteger:(BOOL)arg11 disallowDuration:(BOOL)arg12 disallowCurrency:(BOOL)arg13 modeValues:(struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x1; struct TSCEValue {} *x2; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_3_1_1; } x3; }*)arg14 defaultModeIndex:(short)arg15 referenceForGeometryOnly:(BOOL)arg16 forceArrayMode:(BOOL)arg17;

- (int)accessorMode;
- (int)argumentContext;
- (void)dealloc;
- (short)defaultModeIndex;
- (BOOL)disallowCurrency;
- (BOOL)disallowDuration;
- (id)disallowedTypes;
- (BOOL)forceArrayMode;
- (id)functionSpec;
- (short)index;
- (int)indexForModeBool:(BOOL)arg1;
- (int)indexForModeNumber:(double)arg1;
- (int)indexForModeString:(id)arg1;
- (int)indexForModeValue:(struct TSCEValue { unsigned int x1[68]; int x2; }*)arg1;
- (id)initArgumentSpecWithIndex:(short)arg1 type:(int)arg2 accessorMode:(int)arg3 disallowedTypes:(id)arg4 argumentContext:(int)arg5 rangeContext:(int)arg6 minValue:(double)arg7 minInclusive:(BOOL)arg8 maxValue:(double)arg9 maxInclusive:(BOOL)arg10 isInteger:(BOOL)arg11 disallowDuration:(BOOL)arg12 disallowCurrency:(BOOL)arg13 modeValues:(struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x1; struct TSCEValue {} *x2; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_3_1_1; } x3; }*)arg14 defaultModeIndex:(short)arg15 referenceForGeometryOnly:(BOOL)arg16 forceArrayMode:(BOOL)arg17;
- (BOOL)isInteger;
- (BOOL)isMode;
- (BOOL)isOptional;
- (id)localizedArgumentName;
- (id)localizedFunctionName;
- (id)localizedModeMenuItemStringForModeIndex:(short)arg1;
- (id)localizedModeNameForModeIndex:(short)arg1;
- (id)localizedModeToolTipStringForModeIndex:(short)arg1;
- (id)localizedToolTipString;
- (BOOL)maxInclusive;
- (double)maxValue;
- (BOOL)minInclusive;
- (double)minValue;
- (struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x1; struct TSCEValue {} *x2; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_3_1_1; } x3; }*)modeValues;
- (id)nativeSyntaxString;
- (id)nativeSyntaxStringForModeIndex:(short)arg1;
- (short)numModes;
- (int)preferredType;
- (int)rangeContext;
- (BOOL)referenceForGeometryOnly;
- (void)setFunctionSpec:(id)arg1;
- (BOOL)typeIsDisallowed:(int)arg1 value:(struct TSCEValue { unsigned int x1[68]; int x2; }*)arg2;
- (struct TSCEValue { unsigned int x1[68]; int x2; })valueForModeIndex:(short)arg1;

@end