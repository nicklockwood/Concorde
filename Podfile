use_frameworks!

target 'ConcordeTests' do

pod 'Nimble'
pod 'Nimble-Snapshots'
pod 'Quick'
pod 'FBSnapshotTestCase', :git => 'https://github.com/facebook/ios-snapshot-test-case.git'

end

post_install do |installer|
    installer.pods_project.targets.each do |target|
        target.build_configurations.each do |config|
            config.build_settings['SWIFT_VERSION'] = '2.3'
        end
    end
end