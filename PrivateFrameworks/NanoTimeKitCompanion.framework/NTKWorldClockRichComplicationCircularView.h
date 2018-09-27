/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWorldClockRichComplicationCircularView : NTKRichComplicationCircularBaseView {
    WorldClockCity * _city;
    UILabel * _cityNameLabel;
    struct NSNumber { Class x1; } * _clockTimerToken;
    struct { 
        double cityNameFontSize; 
        double cityNameBaselineOffsetNorthSide; 
        double cityNameBaselineOffsetSouthSide; 
        double dialDiameter; 
        struct CGSize { 
            double width; 
            double height; 
        } majorTickSize; 
        struct CGSize { 
            double width; 
            double height; 
        } minorTickSize; 
    }  _constants;
    NTKRichComplicationDialView * _dialView;
    NTKWorldClockRichComplicationHandsView * _handsView;
    bool  _positionLabelNorthSide;
}

- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (bool)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;
- (bool)_shouldUseDaytimeColoring;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (void)_updateUI;
- (void)dealloc;
- (id)init;
- (void)layoutSubviews;

@end