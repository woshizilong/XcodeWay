/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTAutoLayoutView.h"

@class DVTBorderedView, IDEControlGroup, IDEPathControl;

@interface IDENavBar : DVTAutoLayoutView
{
    int _gradientStyle;
    DVTBorderedView *_pathBorderedView;
    IDEPathControl *_pathControl;
    IDEControlGroup *_leftControlGroup;
    IDEControlGroup *_rightControlGroup;
    int _borderSides;
    BOOL _isGrouped;
}

+ (id)backgroundGradientForGradientStyle:(int)arg1;
+ (id)borderColorForGradientStyle:(int)arg1;
+ (id)inactiveBackgroundGradientForGradientStyle:(int)arg1;
+ (id)inactiveBorderColorForGradientStyle:(int)arg1;
+ (id)inactiveInteriorBorderColorForGradientStyle:(int)arg1;
+ (id)interiorBorderColorForGradientStyle:(int)arg1;
+ (id)interiorHighlightColorForGradientStyle:(int)arg1;
+ (id)textColorForGradientStyle:(int)arg1;
- (void)_IDENavBarSharedInit;
- (void)_controlGroupDidChange:(id)arg1;
- (void)_updateBorderSidesForSubviews;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
@property int borderSides; // @synthesize borderSides=_borderSides;
- (struct CGRect)grabRect;
@property int gradientStyle; // @synthesize gradientStyle=_gradientStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property BOOL isGrouped; // @synthesize isGrouped=_isGrouped;
- (void)layoutBottomUp;
- (void)layoutTopDown;
@property IDEControlGroup *leftControlGroup; // @synthesize leftControlGroup=_leftControlGroup;
@property IDEPathControl *pathControl; // @synthesize pathControl=_pathControl;
@property IDEControlGroup *rightControlGroup; // @synthesize rightControlGroup=_rightControlGroup;

@end
