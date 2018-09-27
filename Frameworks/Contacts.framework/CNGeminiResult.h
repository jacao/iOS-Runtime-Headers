/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNGeminiResult : NSObject <NSSecureCoding> {
    NSArray * _availableChannels;
    CNGeminiChannel * _channel;
    long long  _channelType;
}

@property (nonatomic, readonly) NSArray *availableChannels;
@property (nonatomic, readonly) CNGeminiChannel *channel;
@property (nonatomic, readonly) long long channelType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availableChannels;
- (id)channel;
- (long long)channelType;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithChannel:(id)arg1 type:(long long)arg2 availableChannels:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end