use_frameworks!

target 'ConcordeTests' do

pod 'Nimble', '5.0.0'
pod 'Nimble-Snapshots', '4.2.0'
pod 'Quick', '0.10.0'
pod 'FBSnapshotTestCase', '2.1.4'

end

post_install do |installer|
    installer.pods_project.targets.each do |target|
        target.build_configurations.each do |config|
            config.build_settings['SWIFT_VERSION'] = '3'
        end
    end
end