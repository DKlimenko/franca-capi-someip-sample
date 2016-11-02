#include "stub.hpp"
 
Stub::Stub() { }
Stub::~Stub() { }
 
void Stub::sayHello(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _name, sayHelloReply_t _reply) {
    std::stringstream messageStream;
    messageStream << "Hello " << _name << "!";
    std::cout << "sayHello('" << _name << "'): '" << messageStream.str() << "'\n";
 
    _reply(messageStream.str());
};