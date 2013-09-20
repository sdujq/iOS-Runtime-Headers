/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKGame, GKPlayer, GKScore, NSArray, NSError, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface GKScoreLeaderboard : GKLeaderboard {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    NSMutableArray *_allScores;
    GKScore *_comparePlayerScore;
    } _currentRange;
    } _displayedRange;
    NSError *_error;
    GKGame *_game;
    NSObject<OS_dispatch_queue> *_loadQueue;
    unsigned int _maxLoaded;
    GKPlayer *_player;
    NSArray *_showcasedScores;
    } _totalRange;
}

@property(retain) NSMutableArray * allScores;
@property(retain) GKScore * comparePlayerScore;
@property struct _NSRange { unsigned int x1; unsigned int x2; } displayedRange;
@property(retain) NSError * error;
@property(retain) GKGame * game;
@property(readonly) NSObject<OS_dispatch_queue> * loadQueue;
@property(retain) GKPlayer * player;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } totalRange;

- (id)allScores;
- (id)comparePlayerScore;
- (void)dealloc;
- (struct _NSRange { unsigned int x1; unsigned int x2; })displayedRange;
- (id)error;
- (id)game;
- (void)initRangeAndQueue;
- (id)initWithGame:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)insertLeaderboardScores:(id)arg1;
- (id)loadQueue;
- (void)loadScoresForGame:(id)arg1 withCompletionHandler:(id)arg2;
- (int)maxLoadedScores;
- (id)placeholderLeaderboardItemsForRankRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)player;
- (id)scoreAtIndex:(int)arg1;
- (id)scoresInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setAllScores:(id)arg1;
- (void)setComparePlayerScore:(id)arg1;
- (void)setDisplayedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setError:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setPlayer:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })totalRange;

@end