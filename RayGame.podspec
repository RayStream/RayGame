Pod::Spec.new do |s|
  s.name = "RayGame"
  s.version = "3.0.0"
  s.summary = "RayVision Cloud Game SDK"
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"cxm"=>"caixuemin@rayvision.com"}
  s.homepage = "https://github.com/RayStream/RayGame"
  s.source = { :git => 'https://github.com/RayStream/RayGame.git', :tag => s.version.to_s }
  s.frameworks = ["UIKit", "Foundation", "GameController", "VideoToolbox"]
  s.source = { :path => '.' }
  s.resources = ['ios/RayGame.framework/Versions/A/Resources/*.{png,json,xib,storyboard}']

  s.ios.deployment_target    = '10.0'
  s.ios.vendored_framework   = 'ios/RayGame.framework'

  s.static_framework = true

  s.dependency 'YYModel'
  s.dependency 'AFNetworking'
  s.dependency 'Reachability'
  s.dependency 'pop'
  s.dependency 'SocketRocket'
end
