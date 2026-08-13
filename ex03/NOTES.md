# When NOT to use a pattern

## Singleton, refuse when: only need to reach the object without passing it
- **Instead:** dependency injection, construct one `AudioManager` in `main` and pass it as `AudioManager&` through dependent's constructor, e.g. `Dependent(AudioManger& audio)`. So the dependency is in the signature and can be substituted easily.
- **Testability cost:** Every test shares the one instance, and depends on run order, make the testability cost high. For example a test mutes the audio and never restores it, which makes the subsequent tests fail. With **Dependency Injection**, each test builds its own `Audio`, would not affect the next test.

## Visitor, refuse when: the type hierarchy is still growing
- **Instead:** a plain `virtual void update()` on `Entity`
- **Testability cost:** When adding a new class, it is forced to add a new virtual method into `Visitor`, which breaks every existing visitor (`DescribeVisitor`, `TotalHpVisitor`). With a plain virtual method the new type compiles alone and existing tests are untouched.