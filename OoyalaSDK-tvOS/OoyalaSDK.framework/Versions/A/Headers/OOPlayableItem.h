@import Foundation;

/**
 * @brief A simple protocol which has the list of available streams for playback.
 */
@protocol OOPlayableItem <NSObject>

/**
 * Returns a set of streams representing the currently playing content
 * @return An NSArray of OOStreams.
 */
- (NSArray *)streams;

@end
