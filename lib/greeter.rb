require "erb"

class Greeter
	def call(env)
		request = Rack::Request.new(env)
		case request.path
	    when "/" then Rack::Response.new(render("index.html.erb"))

		#If the url put is not the above then we throw a 404
	else Rack::Response.new("Not Found", 404)
		end
	end

#  The line below takes the HTML from the template folder
	def render(template)
		path = File.expand_path("../views/#{template}", __FILE__)
		ERB.new(File.read(path)).result(binding)
	end
end
	