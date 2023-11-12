#include <ola/DmxBuffer.h>
#include <ola/io/SelectServer.h>
#include <ola/Logging.h>
#include <ola/client/ClientWrapper.h>
#include <ola/Callback.h>
using std::cout;
using std::endl;
bool SendData(ola::client::OlaClientWrapper *wrapper) {
 static unsigned int universe = 5;
 static unsigned int i = 0;
 ola::DmxBuffer buffer;
 buffer.Blackout();
 buffer.SetChannel(0, i);
 wrapper->GetClient()->SendDMX(universe, buffer, ola::client::SendDMXArgs());
 if (++i == 100) {
 wrapper->GetSelectServer()->Terminate();
 }
 return true;
}
int main(int, char *[]) {
 ola::InitLogging(ola::OLA_LOG_DEBUG, ola::OLA_LOG_STDERR);
 ola::client::OlaClientWrapper wrapper;
 if (!wrapper.Setup()) {
 std::cerr << "Setup failed" << endl;
 exit(1);
 }
 // Create a timeout and register it with the SelectServer
 ola::io::SelectServer *ss = wrapper.GetSelectServer();
 ss->RegisterRepeatingTimeout(25, ola::NewCallback(&SendData, &wrapper));
 // Start the main loop
 ss->Run();
}