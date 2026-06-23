

class Singleton:
    __instance = None

    def __init__(self):
        if Singleton.__instance is None:
            Singleton.__instance = self
        else:
            raise Exception("This class is a singleton! Already have an instance, use that one by calling get_instance method")

    @staticmethod
    def get_instance():
        if Singleton.__instance is None:
            Singleton()
        return Singleton.__instance


first = Singleton.get_instance()
second = Singleton.get_instance()
third = Singleton.get_instance()


print(first)
print(second)
print(third)

# last = Singleton()



'''

map $http_upgrade $connection_upgrade {
default upgrade;
'' close;
}

server {
    listen 80;
    server_name api.sellapy.com;
    
    client_max_body_size 100M;

    location / {
        proxy_pass http://localhost:8010;

        # HTTP headers
        proxy_http_version 1.1;
        proxy_set_header Host $host;
        proxy_set_header X-Real-IP $remote_addr;
        proxy_set_header X-Forwarded-For $proxy_add_x_forwarded_for;

        # WebSocket support
        proxy_set_header Upgrade $http_upgrade;
        proxy_set_header Connection "upgrade";

        # SSE support
        proxy_buffering off;
        proxy_cache off;
        proxy_set_header Cache-Control no-cache;
    }
}

'''