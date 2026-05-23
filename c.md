# Claude Code Speedrun

## Claude.md

- is a file that is used to keep the context and structure of the project we are developing so even
- when we clear the context window in claude code, it still reads claude.md the first thing
- and knows the context asap
- build with claude and then ask it to make the claude.md file itself

## MCP

- model context protocol allows Claude to connect to external applications/API
- and execute actions on our behalf
- another usecase of MCP is mcp.json config which allows for the extension
- of claude's context window, for example, there's a lot of code on the internet
- available for css3 so claude is very good at coding css3 but css4 is out now and so
- at times it codes in css3 crashing the complete site, for this to not occur
- one could just search for their required service, like css4 mcp and they'll
- get the official site with mcp bash links that needs to copy pasted in the terminal
- and that'll simply allow claude to read all the latest documentation, so now
- it's context window also contains the css4 documentation.
- mcp add --scope user, this command at the start of MCP bash command installs
- that particular MCP for the user, i.e. it'll be available anywhere

## Skills

- skills.sh more or less

## Token Saving

- after going back and forth with claude for a while, use the below given prompt for a summary and then clear and paste this as a summary
- along with the next prompt

```CRITICAL CONTEXT COMPRESSION: Summarize our entire session up to this point. Include: 1) The overarching goal, 2) Key technical decisions made, 3) Files modified and current state, and 4) The exact next steps required. Format this as a dense, context-rich prompt that I can paste into a new, blank session to instantly resume work without losing momentum. Output ONLY the summary prompt, nothing else.```