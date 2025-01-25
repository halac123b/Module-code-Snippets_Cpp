namespace grpc
{
    class Channel;

    class DefaultGlobalClientCallbacks final
        : public ClientContext::GlobalCallbacks
    {
    public:
        ~DefaultGlobalClientCallbacks() override {}
        void DefaultConstructor(ClientContext * /*context*/) override {}
        void Destructor(ClientContext * /*context*/) override {}
    };
}