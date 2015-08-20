require "erb"

class Greeter
	def call(env)
	Rack::Response.new(render("index.html.erb"))
	end

#  The line below takes the HTML from the template folder
	def render(template)
		path = File.expand_path("../views/#{template}", __FILE__)
		ERB.new(File.read(path)).result(binding)
	end
end
