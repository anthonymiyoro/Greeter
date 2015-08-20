class Greeter
	def call(env)
	Rack::Response.new("Hello there!")
	end
end