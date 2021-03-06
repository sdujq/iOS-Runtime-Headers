/* Generated by RuntimeBrowser
   Image: /usr/lib/libmecabra.dylib
 */

@class NSArray, NSDictionary, NSString;

@interface CharacterInformationRepository : NSObject {
    struct __IDXIndex { } *_characterInfoDictionary;
    NSString *_currentCharacter;
    NSArray *_currentCharacterInfo;
    int _language;
}

@property struct __IDXIndex { }* characterInfoDictionary;
@property(retain) NSString * currentCharacter;
@property(retain) NSArray * currentCharacterInfo;
@property(readonly) NSDictionary * informationDictionary;
@property int language;

+ (id)sharedCharacterInformationRepository;

- (struct __IDXIndex { }*)characterInfoDictionary;
- (id)currentCharacter;
- (id)currentCharacterInfo;
- (void)dealloc;
- (id)informationDictionary;
- (id)informationStringAtSlot:(int)arg1;
- (id)init;
- (int)language;
- (id)searchResultsForCharacter:(id)arg1;
- (void)setCharacterInfoDictionary:(struct __IDXIndex { }*)arg1;
- (void)setCurrentCharacter:(id)arg1;
- (void)setCurrentCharacterInfo:(id)arg1;
- (void)setLanguage:(int)arg1;

@end
