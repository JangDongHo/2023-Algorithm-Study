 #include <bits/stdc++.h>
 using namespace std;

 int main() 
 {
    ios::sync_with_stdio(0);
    cin.tie(0);

    list<char> editor;

    string s;
    cin >> s;
    
    for(auto c: s) 
    {
        editor.push_back(c);
    }
    list<char>::iterator cursor = editor.end();
    
    int m;
    cin >> m;
    while(m--)
    {
        char op;
        cin >> op;
        switch(op)
        {
            case 'L': {
                if(cursor != editor.begin()) cursor--;
                break;
            }
            case 'D': {
                if(cursor != editor.end()) cursor++;           
                break;
            }
            case 'B': {
                if(cursor != editor.begin()) 
                    cursor = editor.erase(--cursor);
            break;
            }
            case 'P': {
                char add;
                cin >> add;
                editor.insert(cursor, add);
                break;
            }
        }
    }

    for(auto c : editor)
    {
        cout << c;
    }

    return 0;
 }