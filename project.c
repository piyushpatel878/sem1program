<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Aatmoday Community Finder</title>
    <!-- Tailwind CSS -->
    <script src="https://cdn.tailwindcss.com"></script>
    <script>
        tailwind.config = {
            darkMode: 'class',
            theme: {
                extend: {
                    colors: {
                        brand: {
                            50: '#f0fdf4',
                            100: '#dcfce7',
                            500: '#22c55e',
                            600: '#16a34a',
                            700: '#15803d',
                        }
                    }
                }
            }
        }
    </script>
    <!-- Lucide Icons -->
    <script src="https://unpkg.com/lucide@latest"></script>
    <!-- Chart.js for Admin Analytics -->
    <script src="https://cdn.jsdelivr.net/npm/chart.js"></script>
    <!-- Google Fonts Inter -->
    <link href="https://fonts.googleapis.com/css2?family=Inter:wght@300;400;500;600;700&display=swap" rel="stylesheet">
    <style>
        body { font-family: 'Inter', sans-serif; }
        .fade-in { animation: fadeIn 0.3s ease-in-out forwards; }
        @keyframes fadeIn {
            from { opacity: 0; transform: translateY(6px); }
            to { opacity: 1; transform: translateY(0); }
        }
    </style>
</head>
<body class="bg-slate-50 text-slate-800 min-h-screen flex flex-col antialiased">

    <div id="app" class="flex flex-col min-h-screen">
        <!-- Navigation Header -->
        <header class="sticky top-0 z-50 bg-white/90 backdrop-blur-md border-b border-slate-200">
            <div class="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8 h-16 flex items-center justify-between">
                <div class="flex items-center space-x-3 cursor-pointer" onclick="router.navigate('home')">
                    <div class="w-10 h-10 rounded-xl bg-gradient-to-tr from-green-600 to-emerald-400 flex items-center justify-center text-white shadow-md shadow-green-500/20">
                        <i data-lucide="compass" class="w-6 h-6"></i>
                    </div>
                    <div>
                        <span class="font-bold text-lg text-slate-900 tracking-tight">Aatmoday</span>
                        <span class="text-xs block text-emerald-600 font-semibold uppercase tracking-wider">Community Finder</span>
                    </div>
                </div>

                <!-- Desktop Nav -->
                <nav class="hidden md:flex items-center space-x-6 text-sm font-medium text-slate-600">
                    <button onclick="router.navigate('home')" class="hover:text-green-600 transition">Home</button>
                    <button onclick="router.navigate('explore')" class="hover:text-green-600 transition">Explore Communities</button>
                    <button onclick="router.navigate('events')" class="hover:text-green-600 transition">Events</button>
                    <div id="nav-role-links"></div>
                </nav>

                <!-- Right Actions & Role Switcher -->
                <div class="flex items-center space-x-3">
                    <div id="role-switcher-container" class="hidden sm:flex items-center bg-slate-100 p-1 rounded-xl border border-slate-200 text-xs font-medium">
                        <span class="px-2 text-slate-400 font-semibold">Role:</span>
                        <button onclick="switchRole('student')" id="btn-role-student" class="px-2.5 py-1 rounded-lg transition">Student</button>
                        <button onclick="switchRole('organizer')" id="btn-role-organizer" class="px-2.5 py-1 rounded-lg transition">Organizer</button>
                        <button onclick="switchRole('admin')" id="btn-role-admin" class="px-2.5 py-1 rounded-lg transition">Admin</button>
                    </div>

                    <div id="auth-header-actions" class="flex items-center space-x-2">
                        <!-- Populated dynamically -->
                    </div>
                    
                    <!-- Mobile Menu Button -->
                    <button onclick="toggleMobileMenu()" class="md:hidden p-2 text-slate-600 hover:text-slate-900 rounded-lg">
                        <i data-lucide="menu" class="w-6 h-6"></i>
                    </button>
                </div>
            </div>
            <!-- Mobile Menu Dropdown -->
            <div id="mobile-menu" class="hidden md:hidden bg-white border-b border-slate-200 px-4 pt-2 pb-4 space-y-2">
                <button onclick="router.navigate('home'); toggleMobileMenu();" class="block w-full text-left py-2 px-3 rounded-lg hover:bg-slate-50 font-medium">Home</button>
                <button onclick="router.navigate('explore'); toggleMobileMenu();" class="block w-full text-left py-2 px-3 rounded-lg hover:bg-slate-50 font-medium">Explore Communities</button>
                <button onclick="router.navigate('events'); toggleMobileMenu();" class="block w-full text-left py-2 px-3 rounded-lg hover:bg-slate-50 font-medium">Events</button>
                <div id="mobile-role-links" class="pt-2 border-t border-slate-100"></div>
            </div>
        </header>

        <!-- Main Content Area -->
        <main id="main-content" class="flex-grow">
            <!-- Rendered dynamically -->
        </main>

        <!-- Footer -->
        <footer class="bg-white border-t border-slate-200 py-8 px-4 sm:px-6 lg:px-8 mt-auto">
            <div class="max-w-7xl mx-auto flex flex-col md:flex-row items-center justify-between gap-4">
                <div class="flex items-center space-x-2">
                    <div class="w-8 h-8 rounded-lg bg-green-600 flex items-center justify-center text-white">
                        <i data-lucide="compass" class="w-4 h-4"></i>
                    </div>
                    <span class="font-bold text-slate-900">Aatmoday Community Finder</span>
                </div>
                <p class="text-sm text-slate-500 text-center">Empowering students to discover passions, build skills, and connect with vibrant campus & community groups.</p>
                <div class="text-xs text-slate-400">© 2026 Aatmoday Platform. All rights reserved.</div>
            </div>
        </footer>
    </div>

    <!-- Toast Notification Container -->
    <div id="toast-container" class="fixed bottom-5 right-5 z-50 flex flex-col space-y-2 pointer-events-none"></div>

    <!-- Modal Container -->
    <div id="modal-container"></div>

    <script>
        // Mock Database
        const DB = {
            currentUser: {
                id: 'u_student_1',
                name: 'Aarav Sharma',
                email: 'aarav@student.aatmoday.edu',
                role: 'student', // 'student', 'organizer', 'admin'
                avatar: 'https://images.unsplash.com/photo-1534528741775-53994a69daeb?auto=format&fit=crop&w=150&q=80'
            },
            studentProfile: {
                user_id: 'u_student_1',
                interests: ['Coding', 'Robotics', 'Photography', 'Design'],
                skills: ['Python', 'HTML/CSS', 'Basic Camera Operation'],
                learning_goals: ['AI & Machine Learning', 'Video Editing'],
                activity_types: ['Team-based', 'Creative', 'Technical'],
                indoor_outdoor: 'Indoor & Outdoor',
                experience_level: 'Intermediate',
                availability: 'Evenings & Weekends',
                bio: 'Passionate tech enthusiast and amateur photographer looking to build impactful projects with like-minded peers.'
            },
            categories: ['Technology', 'Coding', 'Robotics', 'Music', 'Dance', 'Art', 'Photography', 'Sports', 'Entrepreneurship', 'Public Speaking', 'Writing', 'Gaming', 'Social Service', 'Science', 'Design'],
            skillsList: ['Python', 'JavaScript', 'C++', 'React', 'Photoshop', 'Canva', 'Video Editing', 'Public Speaking', 'Guitar', 'Robotics Hardware', 'Leadership', 'Content Writing'],
            communities: [
                {
                    id: 'c_1',
                    organizer_id: 'u_org_1',
                    name: 'Aatmoday CodeCraft Society',
                    category: 'Coding',
                    description: 'A vibrant community of software developers, hackers, and open-source contributors building real-world apps and solving complex algorithmic challenges.',
                    image: 'https://images.unsplash.com/photo-1531482615713-2afd69097998?auto=format&fit=crop&w=600&q=80',
                    required_skills: ['JavaScript', 'Python'],
                    preferred_skills: ['React', 'Git'],
                    activity_types: ['Team-based', 'Technical'],
                    experience_level: 'Intermediate',
                    location: 'Innovation Lab 302 / Discord',
                    meeting_schedule: 'Every Tuesday, 6:00 PM',
                    members_count: 142,
                    status: 'approved',
                    created_at: '2025-08-10'
                },
                {
                    id: 'c_2',
                    organizer_id: 'u_org_2',
                    name: 'Pixel Perfect Photography & Media',
                    category: 'Photography',
                    description: 'Explore visual storytelling, portraiture, street photography, and post-processing. We organize photwalks and exhibition showcases every month.',
                    image: 'https://images.unsplash.com/photo-1542038784456-1ea8e935640e?auto=format&fit=crop&w=600&q=80',
                    required_skills: ['Basic Camera Operation'],
                    preferred_skills: ['Photoshop', 'Lightroom'],
                    activity_types: ['Creative', 'Outdoor', 'Team-based'],
                    experience_level: 'Beginner',
                    location: 'Studio B & Campus Grounds',
                    meeting_schedule: 'Thursdays, 5:00 PM',
                    members_count: 98,
                    status: 'approved',
                    created_at: '2025-09-01'
                },
                {
                    id: 'c_3',
                    organizer_id: 'u_org_3',
                    name: 'RoboSpark & Automation Club',
                    category: 'Robotics',
                    description: 'Design autonomous robots, drone prototypes, and IoT smart systems. Compete in national hackathons and robotics leagues.',
                    image: 'https://images.unsplash.com/photo-1485827404703-89b55fcc595e?auto=format&fit=crop&w=600&q=80',
                    required_skills: ['Robotics Hardware', 'Python'],
                    preferred_skills: ['C++', 'Arduino'],
                    activity_types: ['Technical', 'Team-based', 'Competitive'],
                    experience_level: 'Advanced',
                    location: 'Mechatronics Workshop',
                    meeting_schedule: 'Wednesdays & Saturdays',
                    members_count: 76,
                    status: 'approved',
                    created_at: '2025-07-15'
                },
                {
                    id: 'c_4',
                    organizer_id: 'u_org_4',
                    name: 'DesignSphere UI/UX & Art',
                    category: 'Design',
                    description: 'Creating intuitive digital interfaces, branding, and expressive digital artworks using Figma, Illustrator, and generative AI tools.',
                    image: 'https://images.unsplash.com/photo-1561070791-2526d30994b5?auto=format&fit=crop&w=600&q=80',
                    required_skills: ['Canva'],
                    preferred_skills: ['Figma', 'Photoshop'],
                    activity_types: ['Creative', 'Individual', 'Team-based'],
                    experience_level: 'Beginner',
                    location: 'Design Studio 104',
                    meeting_schedule: 'Mondays, 4:30 PM',
                    members_count: 115,
                    status: 'approved',
                    created_at: '2025-08-20'
                },
                {
                    id: 'c_5',
                    organizer_id: 'u_org_5',
                    name: 'Aatmoday Startup & Entrepreneurship Hub',
                    category: 'Entrepreneurship',
                    description: 'Turn your business ideas into pitch decks, validate MVPs, network with angel investors, and build the startup founders of tomorrow.',
                    image: 'https://images.unsplash.com/photo-1556761175-5973dc0f32e7?auto=format&fit=crop&w=600&q=80',
                    required_skills: ['Public Speaking', 'Leadership'],
                    preferred_skills: ['Content Writing'],
                    activity_types: ['Team-based', 'Social', 'Competitive'],
                    experience_level: 'Intermediate',
                    location: 'Auditorium Hall 2',
                    meeting_schedule: 'Fridays, 6:00 PM',
                    members_count: 180,
                    status: 'approved',
                    created_at: '2025-06-10'
                }
            ],
            events: [
                {
                    id: 'e_1',
                    community_id: 'c_1',
                    name: 'Full-Stack Hackathon 2026',
                    description: 'A 24-hour coding sprint to build innovative AI applications for social good. Free food, mentoring, and exciting cash prizes!',
                    date: '2026-04-12',
                    time: '09:00 AM - 09:00 PM',
                    location: 'Main Tech Auditorium',
                    capacity: 150,
                    registered_count: 124
                },
                {
                    id: 'e_2',
                    community_id: 'c_2',
                    name: 'Golden Hour Portrait Walk',
                    description: 'Learn composition, natural lighting, and camera setting mastery during sunset across the heritage botanical gardens.',
                    date: '2026-04-15',
                    time: '04:30 PM - 07:00 PM',
                    location: 'Botanical Garden Gates',
                    capacity: 40,
                    registered_count: 32
                },
                {
                    id: 'e_3',
                    community_id: 'c_3',
                    name: 'Autonomous Drone Navigation Seminar',
                    description: 'Deep dive into PID controllers, computer vision object tracking, and flight stabilization algorithms with industry experts.',
                    date: '2026-04-18',
                    time: '02:00 PM - 05:00 PM',
                    location: 'Mechatronics Lab 2',
                    capacity: 60,
                    registered_count: 55
                }
            ],
            memberships: [
                { student_id: 'u_student_1', community_id: 'c_1', status: 'joined', joined_at: '2025-09-10' }
            ],
            savedCommunities: ['c_2', 'c_4'],
            joinRequests: [
                { id: 'jr_1', student_id: 'u_student_2', student_name: 'Priya Verma', community_id: 'c_1', status: 'pending', match_score: 94, common_interests: 'Coding, Python' },
                { id: 'jr_2', student_id: 'u_student_3', student_name: 'Rohan Gupta', community_id: 'c_1', status: 'pending', match_score: 88, common_interests: 'JavaScript' }
            ],
            adminWeights: {
                semantic: 0.40,
                interests: 0.30,
                skills: 0.15,
                activity: 0.10,
                experience: 0.05
            }
        };

        // Router State
        let currentRoute = 'home';
        let routeParams = {};

        // Navigation Controller
        const router = {
            navigate: function(route, params = {}) {
                currentRoute = route;
                routeParams = params;
                window.scrollTo(0, 0);
                renderApp();
            }
        };

        // Role Switcher Helper
        function switchRole(role) {
            DB.currentUser.role = role;
            if (role === 'student') {
                DB.currentUser.name = 'Aarav Sharma';
                DB.currentUser.avatar = 'https://images.unsplash.com/photo-1534528741775-53994a69daeb?auto=format&fit=crop&w=150&q=80';
            } else if (role === 'organizer') {
                DB.currentUser.name = 'Dr. Vikramaditya';
                DB.currentUser.avatar = 'https://images.unsplash.com/photo-1507003211169-0a1dd7228f2d?auto=format&fit=crop&w=150&q=80';
            } else if (role === 'admin') {
                DB.currentUser.name = 'System Administrator';
                DB.currentUser.avatar = 'https://images.unsplash.com/photo-1472099645785-5658abf4ff4e?auto=format&fit=crop&w=150&q=80';
            }
            updateAuthHeader();
            renderApp();
            showToast(`Switched role to ${role.toUpperCase()}`, 'success');
        }

        // Toast Notification System
        function showToast(message, type = 'success') {
            const container = document.getElementById('toast-container');
            const toast = document.createElement('div');
            const bgClass = type === 'success' ? 'bg-slate-900 text-white' : 'bg-red-600 text-white';
            const icon = type === 'success' ? 'check-circle' : 'alert-circle';
            
            toast.className = `pointer-events-auto flex items-center space-x-3 px-4 py-3 rounded-xl shadow-xl transform transition-all duration-300 translate-y-2 opacity-0 ${bgClass}`;
            toast.innerHTML = `<i data-lucide="${icon}" class="w-5 h-5 text-emerald-400"></i><span class="text-sm font-medium">${message}</span>`;
            
            container.appendChild(toast);
            lucide.createIcons();

            setTimeout(() => {
                toast.classList.remove('translate-y-2', 'opacity-0');
            }, 10);

            setTimeout(() => {
                toast.classList.add('translate-y-2', 'opacity-0');
                setTimeout(() => toast.remove(), 300);
            }, 3500);
        }
    </script>

    <script>
        // AI Recommendation Algorithm based on configurable weights
        function calculateMatchScore(community, profile) {
            const weights = DB.adminWeights;
            
            // 1. Interest Compatibility (0 to 1)
            let matchingInterests = community.interests ? community.interests.filter(i => profile.interests.includes(i)).length : 0;
            // Fallback match based on category match
            if (profile.interests.includes(community.category)) matchingInterests += 2;
            const interestScore = Math.min(1.0, matchingInterests / Math.max(1, (community.interests ? community.interests.length : 2)));

            // 2. Skill Compatibility (0 to 1)
            const requiredSkills = community.required_skills || [];
            const userSkills = profile.skills || [];
            let matchedSkills = requiredSkills.filter(s => userSkills.includes(s)).length;
            const skillScore = requiredSkills.length > 0 ? matchedSkills / requiredSkills.length : 0.8;

            // 3. Activity Preference Compatibility
            const userActivities = profile.activity_types || [];
            const commActivities = community.activity_types || [];
            const commonActivities = commActivities.filter(a => userActivities.includes(a)).length;
            const activityScore = commActivities.length > 0 ? commonActivities / commActivities.length : 0.7;

            // 4. Experience Compatibility
            const expLevels = { 'Beginner': 1, 'Intermediate': 2, 'Advanced': 3 };
            const userExp = expLevels[profile.experience_level] || 2;
            const commExp = expLevels[community.experience_level] || 2;
            const expDiff = Math.abs(userExp - commExp);
            const expScore = expDiff === 0 ? 1.0 : expDiff === 1 ? 0.7 : 0.4;

            // 5. Semantic / Bio Similarity Simulation
            let semanticScore = 0.75;
            const bio = (profile.bio || '').toLowerCase();
            const desc = (community.description || '').toLowerCase();
            if (bio.includes(community.category.toLowerCase()) || desc.includes(community.category.toLowerCase())) {
                semanticScore = 0.95;
            }

            // Weighted sum
            const totalScore = (
                (weights.semantic * semanticScore) +
                (weights.interests * interestScore) +
                (weights.skills * skillScore) +
                (weights.activity * activityScore) +
                (weights.experience * expScore)
            );

            const percentage = Math.round(totalScore * 100);
            return Math.min(98, Math.max(60, percentage));
        }

        // Generate AI explanation for recommendation
        function generateAIExplanation(community, profile) {
            const matchingInterests = profile.interests.filter(i => community.description.toLowerCase().includes(i.toLowerCase()) || community.category.toLowerCase() === i.toLowerCase());
            const matchedSkills = (community.required_skills || []).filter(s => (profile.skills || []).includes(s));
            
            let reasons = [];
            if (matchingInterests.length > 0) {
                reasons.push(`You enjoy ${matchingInterests.join(', ')}, which closely aligns with this community's core focus.`);
            } else {
                reasons.push(`This community matches your interest in ${community.category} and collaborative projects.`);
            }

            if (profile.activity_types && profile.activity_types.length > 0) {
                reasons.push(`You selected ${profile.activity_types[0]} activities, fitting right into their collaborative structure.`);
            }

            if (matchedSkills.length > 0) {
                reasons.push(`Your existing proficiency in ${matchedSkills.join(', ')} gives you a strong head start.`);
            } else {
                reasons.push(`It matches your experience level (${profile.experience_level}) for skill development.`);
            }

            return reasons.join(' ');
        }

        // AI Natural Language Search Parser
        function runAISearch(query) {
            const q = query.toLowerCase();
            return DB.communities.filter(c => {
                const matchName = c.name.toLowerCase().includes(q);
                const matchDesc = c.description.toLowerCase().includes(q);
                const matchCat = c.category.toLowerCase().includes(q);
                const matchSkills = (c.required_skills || []).some(s => q.includes(s.toLowerCase()));
                const matchActivity = (c.activity_types || []).some(a => q.includes(a.toLowerCase()));
                return matchName || matchDesc || matchCat || matchSkills || matchActivity;
            });
        }
    </script>

    <script>
        // Update Authentication Header & Role Switcher UI
        function updateAuthHeader() {
            const container = document.getElementById('auth-header-actions');
            const roleContainer = document.getElementById('role-switcher-container');
            const mobileLinks = document.getElementById('mobile-role-links');
            
            // Highlight active role button
            ['student', 'organizer', 'admin'].forEach(r => {
                const btn = document.getElementById(`btn-role-${r}`);
                if (btn) {
                    if (DB.currentUser.role === r) {
                        btn.className = 'px-2.5 py-1 rounded-lg bg-green-600 text-white font-semibold shadow-sm';
                    } else {
                        btn.className = 'px-2.5 py-1 rounded-lg text-slate-600 hover:text-slate-900';
                    }
                }
            });

            let roleSpecificHTML = '';
            let mobileRoleHTML = '';

            if (DB.currentUser.role === 'student') {
                roleSpecificHTML = `
                    <button onclick="router.navigate('recommendations')" class="hidden lg:flex items-center space-x-1.5 text-sm font-medium text-emerald-700 bg-emerald-50 px-3 py-1.5 rounded-xl border border-emerald-200 hover:bg-emerald-100 transition">
                        <i data-lucide="sparkles" class="w-4 h-4 text-emerald-600"></i>
                        <span>AI Matches</span>
                    </button>
                    <button onclick="router.navigate('questionnaire')" class="hidden sm:flex items-center space-x-1.5 text-sm font-medium text-slate-700 bg-slate-100 px-3 py-1.5 rounded-xl hover:bg-slate-200 transition">
                        <i data-lucide="sliders" class="w-4 h-4"></i>
                        <span>Questionnaire</span>
                    </button>
                    <button onclick="router.navigate('saved')" class="p-2 text-slate-600 hover:text-green-600 relative transition" title="Saved Communities">
                        <i data-lucide="bookmark" class="w-5 h-5"></i>
                        ${DB.savedCommunities.length > 0 ? `<span class="absolute top-1 right-1 w-2 h-2 bg-green-600 rounded-full"></span>` : ''}
                    </button>
                `;
                mobileRoleHTML = `
                    <button onclick="router.navigate('recommendations'); toggleMobileMenu();" class="w-full text-left py-2 px-3 rounded-lg hover:bg-slate-50 font-medium text-emerald-700 flex items-center space-x-2"><i data-lucide="sparkles" class="w-4 h-4"></i><span>AI Recommendations</span></button>
                    <button onclick="router.navigate('questionnaire'); toggleMobileMenu();" class="w-full text-left py-2 px-3 rounded-lg hover:bg-slate-50 font-medium flex items-center space-x-2"><i data-lucide="sliders" class="w-4 h-4"></i><span>AI Questionnaire</span></button>
                    <button onclick="router.navigate('saved'); toggleMobileMenu();" class="w-full text-left py-2 px-3 rounded-lg hover:bg-slate-50 font-medium flex items-center space-x-2"><i data-lucide="bookmark" class="w-4 h-4"></i><span>Saved Communities</span></button>
                `;
            } else if (DB.currentUser.role === 'organizer') {
                roleSpecificHTML = `
                    <button onclick="router.navigate('organizer_dashboard')" class="flex items-center space-x-1.5 text-sm font-medium text-white bg-green-600 px-3.5 py-2 rounded-xl shadow-md shadow-green-500/20 hover:bg-green-700 transition">
                        <i data-lucide="layout-dashboard" class="w-4 h-4"></i>
                        <span>Organizer Dashboard</span>
                    </button>
                `;
                mobileRoleHTML = `
                    <button onclick="router.navigate('organizer_dashboard'); toggleMobileMenu();" class="w-full text-left py-2 px-3 rounded-lg hover:bg-slate-50 font-medium text-green-700 flex items-center space-x-2"><i data-lucide="layout-dashboard" class="w-4 h-4"></i><span>Organizer Dashboard</span></button>
                `;
            } else if (DB.currentUser.role === 'admin') {
                roleSpecificHTML = `
                    <button onclick="router.navigate('admin_dashboard')" class="flex items-center space-x-1.5 text-sm font-medium text-white bg-slate-900 px-3.5 py-2 rounded-xl shadow-md hover:bg-slate-800 transition">
                        <i data-lucide="shield" class="w-4 h-4"></i>
                        <span>Admin Portal</span>
                    </button>
                `;
                mobileRoleHTML = `
                    <button onclick="router.navigate('admin_dashboard'); toggleMobileMenu();" class="w-full text-left py-2 px-3 rounded-lg hover:bg-slate-50 font-medium text-slate-900 flex items-center space-x-2"><i data-lucide="shield" class="w-4 h-4"></i><span>Admin Portal</span></button>
                `;
            }

            container.innerHTML = `
                ${roleSpecificHTML}
                <div class="flex items-center space-x-2 pl-2 border-l border-slate-200">
                    <img src="${DB.currentUser.avatar}" alt="${DB.currentUser.name}" class="w-9 h-9 rounded-full object-cover border-2 border-emerald-500">
                </div>
            `;
            if (mobileLinks) mobileLinks.innerHTML = mobileRoleHTML;
            lucide.createIcons();
        }

        function toggleMobileMenu() {
            const menu = document.getElementById('mobile-menu');
            menu.classList.toggle('hidden');
        }

        // Main Router Dispatcher
        function renderApp() {
            updateAuthHeader();
            const main = document.getElementById('main-content');
            main.className = 'flex-grow fade-in';

            if (currentRoute === 'home') {
                renderLandingPage(main);
            } else if (currentRoute === 'explore') {
                renderExplorePage(main);
            } else if (currentRoute === 'events') {
                renderEventsPage(main);
            } else if (currentRoute === 'questionnaire') {
                renderQuestionnairePage(main);
            } else if (currentRoute === 'recommendations') {
                renderRecommendationsPage(main);
            } else if (currentRoute === 'community_detail') {
                renderCommunityDetailPage(main, routeParams.id);
            } else if (currentRoute === 'saved') {
                renderSavedCommunitiesPage(main);
            } else if (currentRoute === 'organizer_dashboard') {
                renderOrganizerDashboard(main);
            } else if (currentRoute === 'admin_dashboard') {
                renderAdminDashboard(main);
            } else {
                renderLandingPage(main);
            }
            lucide.createIcons();
        }
    </script>

    <script>
        function renderLandingPage(container) {
            const topCommunities = DB.communities.slice(0, 3);
            const upcomingEvents = DB.events.slice(0, 2);

            container.innerHTML = `
                <!-- Hero Section -->
                <section class="relative overflow-hidden bg-gradient-to-b from-emerald-50/60 via-white to-white py-20 lg:py-28 px-4 sm:px-6 lg:px-8 border-b border-slate-100">
                    <div class="max-w-7xl mx-auto grid grid-cols-1 lg:grid-cols-12 gap-12 items-center">
                        <div class="lg:col-span-7 space-y-6">
                            <div class="inline-flex items-center space-x-2 bg-emerald-100 text-emerald-800 text-xs font-semibold px-3 py-1.5 rounded-full">
                                <i data-lucide="sparkles" class="w-3.5 h-3.5 text-emerald-600"></i>
                                <span>Powered by AI Semantic Matching Engine</span>
                            </div>
                            <h1 class="text-4xl sm:text-5xl lg:text-6xl font-extrabold text-slate-900 tracking-tight leading-tight">
                                Find Your Community. <span class="bg-gradient-to-r from-green-600 to-emerald-500 bg-clip-text text-transparent">Discover Your Passion.</span>
                            </h1>
                            <p class="text-lg text-slate-600 max-w-2xl leading-relaxed">
                                Tell us what you enjoy, what you’re good at, and what you want to explore. Our intelligent recommendation system connects you with the ideal Aatmoday student communities and events.
                            </p>
                            <div class="flex flex-col sm:flex-row items-stretch sm:items-center space-y-3 sm:space-y-0 sm:space-x-4 pt-2">
                                <button onclick="router.navigate('questionnaire')" class="inline-flex items-center justify-center space-x-2 bg-green-600 hover:bg-green-700 text-white font-semibold px-7 py-3.5 rounded-2xl shadow-lg shadow-green-600/25 transition transform hover:-translate-y-0.5">
                                    <i data-lucide="compass" class="w-5 h-5"></i>
                                    <span>Find My Community</span>
                                </button>
                                <button onclick="router.navigate('explore')" class="inline-flex items-center justify-center space-x-2 bg-white hover:bg-slate-50 text-slate-700 font-semibold px-7 py-3.5 rounded-2xl border border-slate-200 shadow-sm transition">
                                    <span>Explore Communities</span>
                                    <i data-lucide="arrow-right" class="w-4 h-4"></i>
                                </button>
                            </div>
                            <!-- Quick Stats -->
                            <div class="grid grid-cols-3 gap-6 pt-8 border-t border-slate-200">
                                <div>
                                    <div class="text-2xl font-bold text-slate-900">15+</div>
                                    <div class="text-xs text-slate-500 font-medium">Active Communities</div>
                                </div>
                                <div>
                                    <div class="text-2xl font-bold text-slate-900">1,200+</div>
                                    <div class="text-xs text-slate-500 font-medium">Student Members</div>
                                </div>
                                <div>
                                    <div class="text-2xl font-bold text-slate-900">95%</div>
                                    <div class="text-xs text-slate-500 font-medium">Match Accuracy</div>
                                </div>
                            </div>
                        </div>

                        <!-- Hero Visual Card -->
                        <div class="lg:col-span-5">
                            <div class="bg-white p-6 rounded-3xl border border-slate-200 shadow-2xl shadow-slate-200/50 space-y-5">
                                <div class="flex items-center justify-between">
                                    <span class="text-xs font-semibold text-emerald-600 uppercase tracking-wider bg-emerald-50 px-2.5 py-1 rounded-lg">AI Match Spotlight</span>
                                    <span class="text-xs text-slate-400 font-medium">92% Match</span>
                                </div>
                                <div class="flex items-center space-x-4">
                                    <img src="${topCommunities[0].image}" alt="Community" class="w-16 h-16 rounded-2xl object-cover shadow-md">
                                    <div>
                                        <h3 class="font-bold text-slate-900">${topCommunities[0].name}</h3>
                                        <p class="text-xs text-slate-500">${topCommunities[0].category} • ${topCommunities[0].members_count} members</p>
                                    </div>
                                </div>
                                <p class="text-sm text-slate-600 bg-slate-50 p-3.5 rounded-2xl border border-slate-100">
                                    “You enjoy coding and team projects, and this community focuses on building software applications collaboratively.”
                                </p>
                                <button onclick="router.navigate('community_detail', { id: '${topCommunities[0].id}' })" class="w-full py-3 bg-emerald-50 hover:bg-emerald-100 text-emerald-700 font-semibold rounded-xl text-sm transition">
                                    View Community Profile
                                </button>
                            </div>
                        </div>
                    </div>
                </section>

                <!-- How It Works Section -->
                <section class="py-20 px-4 sm:px-6 lg:px-8 max-w-7xl mx-auto">
                    <div class="text-center max-w-2xl mx-auto space-y-3 mb-16">
                        <span class="text-xs font-semibold text-green-600 uppercase tracking-wider bg-green-50 px-3 py-1 rounded-full">Seamless Discovery</span>
                        <h2 class="text-3xl font-bold text-slate-900">How Aatmoday Works for Students</h2>
                        <p class="text-slate-600">Get matched with groups that match your ambitions in three simple steps.</p>
                    </div>
                    <div class="grid grid-cols-1 md:grid-cols-3 gap-8">
                        <div class="bg-white p-8 rounded-3xl border border-slate-200 shadow-sm space-y-4 hover:shadow-md transition">
                            <div class="w-12 h-12 bg-green-100 text-green-600 rounded-2xl flex items-center justify-center font-bold text-lg">1</div>
                            <h3 class="text-xl font-bold text-slate-900">Take the AI Questionnaire</h3>
                            <p class="text-slate-600 text-sm leading-relaxed">Share your interests, skills you possess, desired learning goals, and preferred activity styles.</p>
                        </div>
                        <div class="bg-white p-8 rounded-3xl border border-slate-200 shadow-sm space-y-4 hover:shadow-md transition">
                            <div class="w-12 h-12 bg-emerald-100 text-emerald-600 rounded-2xl flex items-center justify-center font-bold text-lg">2</div>
                            <h3 class="text-xl font-bold text-slate-900">Receive Smart Recommendations</h3>
                            <p class="text-slate-600 text-sm leading-relaxed">Our multi-factor recommendation engine computes compatibility scores and generates tailored matching insights.</p>
                        </div>
                        <div class="bg-white p-8 rounded-3xl border border-slate-200 shadow-sm space-y-4 hover:shadow-md transition">
                            <div class="w-12 h-12 bg-blue-100 text-blue-600 rounded-2xl flex items-center justify-center font-bold text-lg">3</div>
                            <h3 class="text-xl font-bold text-slate-900">Join & Attend Events</h3>
                            <p class="text-slate-600 text-sm leading-relaxed">Connect with organizers, send join requests, bookmark your favorite groups, and participate in upcoming workshops.</p>
                        </div>
                    </div>
                </section>

                <!-- Featured Communities Section -->
                <section class="py-16 bg-slate-100/60 border-y border-slate-200 px-4 sm:px-6 lg:px-8">
                    <div class="max-w-7xl mx-auto space-y-12">
                        <div class="flex flex-col sm:flex-row items-start sm:items-center justify-between gap-4">
                            <div>
                                <span class="text-xs font-semibold text-green-600 uppercase tracking-wider bg-green-50 px-3 py-1 rounded-full">Explore</span>
                                <h2 class="text-3xl font-bold text-slate-900 mt-2">Popular Communities</h2>
                            </div>
                            <button onclick="router.navigate('explore')" class="text-green-600 hover:text-green-700 font-semibold text-sm flex items-center space-x-1">
                                <span>Browse All Communities</span>
                                <i data-lucide="arrow-right" class="w-4 h-4"></i>
                            </button>
                        </div>

                        <div class="grid grid-cols-1 md:grid-cols-3 gap-8">
                            ${topCommunities.map(c => `
                                <div class="bg-white rounded-3xl overflow-hidden border border-slate-200 shadow-sm hover:shadow-xl transition flex flex-col">
                                    <div class="relative h-48 overflow-hidden">
                                        <img src="${c.image}" alt="${c.name}" class="w-full h-full object-cover">
                                        <span class="absolute top-3 left-3 bg-white/90 backdrop-blur-md text-slate-900 text-xs font-semibold px-3 py-1 rounded-full shadow-sm">${c.category}</span>
                                    </div>
                                    <div class="p-6 flex flex-col flex-grow space-y-4">
                                        <h3 class="text-xl font-bold text-slate-900">${c.name}</h3>
                                        <p class="text-slate-600 text-sm line-clamp-2">${c.description}</p>
                                        <div class="pt-4 border-t border-slate-100 flex items-center justify-between mt-auto">
                                            <span class="text-xs font-medium text-slate-500 flex items-center space-x-1">
                                                <i data-lucide="users" class="w-4 h-4 text-slate-400"></i>
                                                <span>${c.members_count} Members</span>
                                            </span>
                                            <button onclick="router.navigate('community_detail', { id: '${c.id}' })" class="px-4 py-2 bg-emerald-50 hover:bg-emerald-100 text-emerald-700 font-semibold rounded-xl text-xs transition">
                                                View Details
                                            </button>
                                        </div>
                                    </div>
                                </div>
                            `).join('')}
                        </div>
                    </div>
                </section>
            `;
        }
    </script>

    <script>
        let questionnaireStep = 1;
        const totalSteps = 7;
        let tempResponses = {
            interests: [...DB.studentProfile.interests],
            skills: [...DB.studentProfile.skills],
            learning_goals: [...DB.studentProfile.learning_goals],
            activity_types: [...DB.studentProfile.activity_types],
            experience_level: DB.studentProfile.experience_level,
            indoor_outdoor: DB.studentProfile.indoor_outdoor,
            bio: DB.studentProfile.bio
        };

        function renderQuestionnairePage(container) {
            container.innerHTML = `
                <div class="max-w-3xl mx-auto py-12 px-4 sm:px-6 lg:px-8">
                    <!-- Progress Bar -->
                    <div class="mb-8 space-y-2">
                        <div class="flex items-center justify-between text-xs font-semibold text-slate-500 uppercase tracking-wider">
                            <span>Step ${questionnaireStep} of ${totalSteps}</span>
                            <span>${Math.round((questionnaireStep / totalSteps) * 100)}% Completed</span>
                        </div>
                        <div class="w-full h-2.5 bg-slate-200 rounded-full overflow-hidden">
                            <div class="h-full bg-green-600 transition-all duration-300" style="width: ${(questionnaireStep / totalSteps) * 100}%"></div>
                        </div>
                    </div>

                    <!-- Questionnaire Card -->
                    <div class="bg-white p-8 sm:p-10 rounded-3xl border border-slate-200 shadow-xl space-y-8">
                        ${renderQuestionnaireStepContent()}

                        <!-- Navigation Buttons -->
                        <div class="flex items-center justify-between pt-6 border-t border-slate-100">
                            ${questionnaireStep > 1 ? `
                                <button onclick="prevQuestionnaireStep()" class="px-6 py-3 bg-slate-100 hover:bg-slate-200 text-slate-700 font-semibold rounded-xl text-sm transition flex items-center space-x-2">
                                    <i data-lucide="arrow-left" class="w-4 h-4"></i>
                                    <span>Back</span>
                                </button>
                            ` : `<div></div>`}

                            ${questionnaireStep < totalSteps ? `
                                <button onclick="nextQuestionnaireStep()" class="px-7 py-3 bg-green-600 hover:bg-green-700 text-white font-semibold rounded-xl text-sm shadow-lg shadow-green-600/20 transition flex items-center space-x-2">
                                    <span>Next Step</span>
                                    <i data-lucide="arrow-right" class="w-4 h-4"></i>
                                </button>
                            ` : `
                                <button onclick="submitQuestionnaire()" class="px-8 py-3.5 bg-emerald-600 hover:bg-emerald-700 text-white font-bold rounded-xl text-sm shadow-xl shadow-emerald-600/25 transition flex items-center space-x-2">
                                    <i data-lucide="sparkles" class="w-5 h-5"></i>
                                    <span>Generate AI Profile & Matches</span>
                                </button>
                            `}
                        </div>
                    </div>
                </div>
            `;
            lucide.createIcons();
        }

        function renderQuestionnaireStepContent() {
            if (questionnaireStep === 1) {
                return `
                    <div class="space-y-4">
                        <span class="text-xs font-semibold text-green-600 uppercase tracking-wider bg-green-50 px-3 py-1 rounded-full">Step 1 of 7</span>
                        <h2 class="text-2xl font-bold text-slate-900">What are you interested in?</h2>
                        <p class="text-slate-600 text-sm">Select all categories and topics that spark your curiosity.</p>
                        <div class="grid grid-cols-2 sm:grid-cols-3 gap-3 pt-4">
                            ${DB.categories.map(cat => {
                                const selected = tempResponses.interests.includes(cat);
                                return `
                                    <button type="button" onclick="toggleInterest('${cat}')" class="p-4 rounded-2xl border text-left font-medium text-sm transition flex items-center justify-between ${selected ? 'bg-green-50 border-green-600 text-green-900 shadow-sm' : 'bg-white border-slate-200 text-slate-700 hover:border-slate-300'}">
                                        <span>${cat}</span>
                                        ${selected ? '<i data-lucide="check-circle" class="w-4 h-4 text-green-600"></i>' : ''}
                                    </button>
                                `;
                            }).join('')}
                        </div>
                    </div>
                `;
            } else if (questionnaireStep === 2) {
                return `
                    <div class="space-y-4">
                        <span class="text-xs font-semibold text-green-600 uppercase tracking-wider bg-green-50 px-3 py-1 rounded-full">Step 2 of 7</span>
                        <h2 class="text-2xl font-bold text-slate-900">What skills do you already have?</h2>
                        <p class="text-slate-600 text-sm">Select skills or proficiencies you currently possess.</p>
                        <div class="grid grid-cols-2 sm:grid-cols-3 gap-3 pt-4">
                            ${DB.skillsList.map(skill => {
                                const selected = tempResponses.skills.includes(skill);
                                return `
                                    <button type="button" onclick="toggleSkill('${skill}')" class="p-4 rounded-2xl border text-left font-medium text-sm transition flex items-center justify-between ${selected ? 'bg-emerald-50 border-emerald-600 text-emerald-900 shadow-sm' : 'bg-white border-slate-200 text-slate-700 hover:border-slate-300'}">
                                        <span>${skill}</span>
                                        ${selected ? '<i data-lucide="check-circle" class="w-4 h-4 text-emerald-600"></i>' : ''}
                                    </button>
                                `;
                            }).join('')}
                        </div>
                    </div>
                `;
            } else if (questionnaireStep === 3) {
                return `
                    <div class="space-y-4">
                        <span class="text-xs font-semibold text-green-600 uppercase tracking-wider bg-green-50 px-3 py-1 rounded-full">Step 3 of 7</span>
                        <h2 class="text-2xl font-bold text-slate-900">What would you like to learn?</h2>
                        <p class="text-slate-600 text-sm">Select areas or tools you want to master.</p>
                        <div class="grid grid-cols-2 sm:grid-cols-3 gap-3 pt-4">
                            ${DB.skillsList.map(goal => {
                                const selected = tempResponses.learning_goals.includes(goal);
                                return `
                                    <button type="button" onclick="toggleLearningGoal('${goal}')" class="p-4 rounded-2xl border text-left font-medium text-sm transition flex items-center justify-between ${selected ? 'bg-blue-50 border-blue-600 text-blue-900 shadow-sm' : 'bg-white border-slate-200 text-slate-700 hover:border-slate-300'}">
                                        <span>${goal}</span>
                                        ${selected ? '<i data-lucide="check-circle" class="w-4 h-4 text-blue-600"></i>' : ''}
                                    </button>
                                `;
                            }).join('')}
                        </div>
                    </div>
                `;
            } else if (questionnaireStep === 4) {
                const options = ['Team-based', 'Individual', 'Creative', 'Technical', 'Social', 'Competitive', 'Relaxed', 'Outdoor', 'Indoor'];
                return `
                    <div class="space-y-4">
                        <span class="text-xs font-semibold text-green-600 uppercase tracking-wider bg-green-50 px-3 py-1 rounded-full">Step 4 of 7</span>
                        <h2 class="text-2xl font-bold text-slate-900">What type of activities do you prefer?</h2>
                        <p class="text-slate-600 text-sm">Choose the styles of collaboration and engagement you enjoy most.</p>
                        <div class="grid grid-cols-2 sm:grid-cols-3 gap-3 pt-4">
                            ${options.map(act => {
                                const selected = tempResponses.activity_types.includes(act);
                                return `
                                    <button type="button" onclick="toggleActivityType('${act}')" class="p-4 rounded-2xl border text-left font-medium text-sm transition flex items-center justify-between ${selected ? 'bg-green-50 border-green-600 text-green-900 shadow-sm' : 'bg-white border-slate-200 text-slate-700 hover:border-slate-300'}">
                                        <span>${act}</span>
                                        ${selected ? '<i data-lucide="check-circle" class="w-4 h-4 text-green-600"></i>' : ''}
                                    </button>
                                `;
                            }).join('')}
                        </div>
                    </div>
                `;
            } else if (questionnaireStep === 5) {
                const levels = ['Beginner', 'Intermediate', 'Advanced'];
                return `
                    <div class="space-y-4">
                        <span class="text-xs font-semibold text-green-600 uppercase tracking-wider bg-green-50 px-3 py-1 rounded-full">Step 5 of 7</span>
                        <h2 class="text-2xl font-bold text-slate-900">How experienced are you?</h2>
                        <p class="text-slate-600 text-sm">Select your overall experience level across your primary interests.</p>
                        <div class="grid grid-cols-1 sm:grid-cols-3 gap-4 pt-4">
                            ${levels.map(lvl => {
                                const selected = tempResponses.experience_level === lvl;
                                return `
                                    <button type="button" onclick="setExperienceLevel('${lvl}')" class="p-6 rounded-2xl border text-center font-medium transition ${selected ? 'bg-green-50 border-green-600 text-green-900 shadow-sm' : 'bg-white border-slate-200 text-slate-700 hover:border-slate-300'}">
                                        <div class="text-lg font-bold">${lvl}</div>
                                    </button>
                                `;
                            }).join('')}
                        </div>
                    </div>
                `;
            } else if (questionnaireStep === 6) {
                const preferences = ['Indoor & Outdoor', 'Mostly Indoor', 'Mostly Outdoor', 'Flexible'];
                return `
                    <div class="space-y-4">
                        <span class="text-xs font-semibold text-green-600 uppercase tracking-wider bg-green-50 px-3 py-1 rounded-full">Step 6 of 7</span>
                        <h2 class="text-2xl font-bold text-slate-900">What kind of environment do you prefer?</h2>
                        <p class="text-slate-600 text-sm">Select your location and setting preference.</p>
                        <div class="grid grid-cols-2 gap-4 pt-4">
                            ${preferences.map(pref => {
                                const selected = tempResponses.indoor_outdoor === pref;
                                return `
                                    <button type="button" onclick="setIndoorOutdoor('${pref}')" class="p-5 rounded-2xl border text-center font-medium transition ${selected ? 'bg-green-50 border-green-600 text-green-900 shadow-sm' : 'bg-white border-slate-200 text-slate-700 hover:border-slate-300'}">
                                        ${pref}
                                    </button>
                                `;
                            }).join('')}
                        </div>
                    </div>
                `;
            } else if (questionnaireStep === 7) {
                return `
                    <div class="space-y-4">
                        <span class="text-xs font-semibold text-green-600 uppercase tracking-wider bg-green-50 px-3 py-1 rounded-full">Step 7 of 7</span>
                        <h2 class="text-2xl font-bold text-slate-900">Tell us about yourself in your own words</h2>
                        <p class="text-slate-600 text-sm">Our AI semantic engine will analyze this description to fine-tune your recommendations.</p>
                        <textarea rows="5" oninput="tempResponses.bio = this.value" placeholder="I enjoy building tech projects and photography, and I want to collaborate with teammates who share similar passions..." class="w-full p-4 rounded-2xl border border-slate-200 focus:outline-none focus:border-green-600 text-slate-800 text-sm">${tempResponses.bio}</textarea>
                    </div>
                `;
            }
        }

        function toggleInterest(item) {
            if (tempResponses.interests.includes(item)) {
                tempResponses.interests = tempResponses.interests.filter(i => i !== item);
            } else {
                tempResponses.interests.push(item);
            }
            renderQuestionnairePage(document.getElementById('main-content'));
        }

        function toggleSkill(item) {
            if (tempResponses.skills.includes(item)) {
                tempResponses.skills = tempResponses.skills.filter(i => i !== item);
            } else {
                tempResponses.skills.push(item);
            }
            renderQuestionnairePage(document.getElementById('main-content'));
        }

        function toggleLearningGoal(item) {
            if (tempResponses.learning_goals.includes(item)) {
                tempResponses.learning_goals = tempResponses.learning_goals.filter(i => i !== item);
            } else {
                tempResponses.learning_goals.push(item);
            }
            renderQuestionnairePage(document.getElementById('main-content'));
        }

        function toggleActivityType(item) {
            if (tempResponses.activity_types.includes(item)) {
                tempResponses.activity_types = tempResponses.activity_types.filter(i => i !== item);
            } else {
                tempResponses.activity_types.push(item);
            }
            renderQuestionnairePage(document.getElementById('main-content'));
        }

        function setExperienceLevel(lvl) {
            tempResponses.experience_level = lvl;
            renderQuestionnairePage(document.getElementById('main-content'));
        }

        function setIndoorOutdoor(pref) {
            tempResponses.indoor_outdoor = pref;
            renderQuestionnairePage(document.getElementById('main-content'));
        }

        function nextQuestionnaireStep() {
            if (questionnaireStep < totalSteps) {
                questionnaireStep++;
                renderQuestionnairePage(document.getElementById('main-content'));
            }
        }

        function prevQuestionnaireStep() {
            if (questionnaireStep > 1) {
                questionnaireStep--;
                renderQuestionnairePage(document.getElementById('main-content'));
            }
        }

        function submitQuestionnaire() {
            DB.studentProfile = { ...DB.studentProfile, ...tempResponses };
            showToast('AI Profile generated & recommendations updated successfully!', 'success');
            questionnaireStep = 1;
            router.navigate('recommendations');
        }
    </script>

    <script>
        function renderRecommendationsPage(container) {
            const profile = DB.studentProfile;
            
            // Calculate scores for all communities and sort
            const scoredCommunities = DB.communities.map(c => {
                const matchScore = calculateMatchScore(c, profile);
                const explanation = generateAIExplanation(c, profile);
                return { ...c, matchScore, explanation };
            }).sort((a, b) => b.matchScore - a.matchScore);

            container.innerHTML = `
                <div class="max-w-7xl mx-auto py-12 px-4 sm:px-6 lg:px-8 space-y-10">
                    <!-- Header Banner -->
                    <div class="bg-gradient-to-r from-emerald-900 to-green-800 rounded-3xl p-8 sm:p-10 text-white shadow-xl flex flex-col md:flex-row items-start md:items-center justify-between gap-6">
                        <div class="space-y-3 max-w-2xl">
                            <div class="inline-flex items-center space-x-2 bg-emerald-800/80 text-emerald-200 text-xs font-semibold px-3 py-1 rounded-full border border-emerald-700">
                                <i data-lucide="sparkles" class="w-3.5 h-3.5"></i>
                                <span>AI-Powered Matching Results</span>
                            </div>
                            <h1 class="text-3xl sm:text-4xl font-extrabold tracking-tight">Communities Recommended For You</h1>
                            <p class="text-emerald-100 text-sm leading-relaxed">
                                Based on your interests in <span class="font-semibold text-white">${profile.interests.slice(0, 3).join(', ')}</span> and your preferred activity styles.
                            </p>
                        </div>
                        <button onclick="router.navigate('questionnaire')" class="px-5 py-3 bg-white text-emerald-900 font-semibold rounded-2xl text-sm shadow-md hover:bg-emerald-50 transition flex items-center space-x-2">
                            <i data-lucide="sliders" class="w-4 h-4"></i>
                            <span>Update Preferences</span>
                        </button>
                    </div>

                    <!-- Communities Grid -->
                    <div class="grid grid-cols-1 md:grid-cols-2 lg:grid-cols-3 gap-8">
                        ${scoredCommunities.map(c => {
                            const isSaved = DB.savedCommunities.includes(c.id);
                            const isJoined = DB.memberships.some(m => m.student_id === DB.currentUser.id && m.community_id === c.id);
                            return `
                                <div class="bg-white rounded-3xl overflow-hidden border border-slate-200 shadow-sm hover:shadow-xl transition flex flex-col relative">
                                    <!-- Match Score Badge -->
                                    <div class="absolute top-3 right-3 z-10 bg-slate-900/80 backdrop-blur-md text-white font-bold text-xs px-3 py-1.5 rounded-full shadow-md flex items-center space-x-1">
                                        <i data-lucide="sparkles" class="w-3.5 h-3.5 text-emerald-400"></i>
                                        <span>${c.matchScore}% Match</span>
                                    </div>

                                    <div class="relative h-48 overflow-hidden">
                                        <img src="${c.image}" alt="${c.name}" class="w-full h-full object-cover">
                                        <span class="absolute top-3 left-3 bg-white/90 backdrop-blur-md text-slate-900 text-xs font-semibold px-3 py-1 rounded-full shadow-sm">${c.category}</span>
                                    </div>

                                    <div class="p-6 flex flex-col flex-grow space-y-4">
                                        <h3 class="text-xl font-bold text-slate-900">${c.name}</h3>
                                        <p class="text-slate-600 text-sm line-clamp-2">${c.description}</p>

                                        <!-- Why This Matches Box -->
                                        <div class="bg-emerald-50/70 border border-emerald-100 p-3.5 rounded-2xl space-y-1">
                                            <div class="text-xs font-bold text-emerald-800 flex items-center space-x-1">
                                                <i data-lucide="info" class="w-3.5 h-3.5"></i>
                                                <span>Why this matches you:</span>
                                            </div>
                                            <p class="text-xs text-emerald-900 leading-relaxed">${c.explanation}</p>
                                        </div>

                                        <div class="pt-4 border-t border-slate-100 flex items-center justify-between mt-auto">
                                            <button onclick="toggleSaveCommunity('${c.id}')" class="p-2.5 rounded-xl border border-slate-200 hover:bg-slate-50 transition ${isSaved ? 'text-green-600 bg-green-50 border-green-200' : 'text-slate-400'}" title="Bookmark">
                                                <i data-lucide="bookmark" class="w-5 h-5"></i>
                                            </button>
                                            <div class="flex items-center space-x-2">
                                                <button onclick="router.navigate('community_detail', { id: '${c.id}' })" class="px-4 py-2.5 bg-slate-100 hover:bg-slate-200 text-slate-700 font-semibold rounded-xl text-xs transition">
                                                    View
                                                </button>
                                                <button onclick="handleJoinCommunity('${c.id}')" class="px-4 py-2.5 ${isJoined ? 'bg-green-100 text-green-800' : 'bg-green-600 hover:bg-green-700 text-white'} font-semibold rounded-xl text-xs transition">
                                                    ${isJoined ? 'Joined' : 'Join'}
                                                </button>
                                            </div>
                                        </div>
                                    </div>
                                </div>
                            `;
                        }).join('')}
                    </div>
                </div>
            `;
            lucide.createIcons();
        }

        function toggleSaveCommunity(id) {
            if (DB.savedCommunities.includes(id)) {
                DB.savedCommunities = DB.savedCommunities.filter(i => i !== id);
                showToast('Removed from saved communities', 'success');
            } else {
                DB.savedCommunities.push(id);
                showToast('Community saved successfully!', 'success');
            }
            renderRecommendationsPage(document.getElementById('main-content'));
        }

        function handleJoinCommunity(id) {
            const exists = DB.memberships.some(m => m.student_id === DB.currentUser.id && m.community_id === id);
            if (!exists) {
                DB.memberships.push({ student_id: DB.currentUser.id, community_id: id, status: 'joined', joined_at: new Date().toISOString().split('T')[0] });
                showToast('Successfully joined community!', 'success');
            } else {
                showToast('You are already a member of this community.', 'success');
            }
            renderRecommendationsPage(document.getElementById('main-content'));
        }
    </script>

    <script>
        let exploreSearchQuery = '';
        let exploreCategoryFilter = 'All';

        function renderExplorePage(container) {
            let filtered = DB.communities;
            if (exploreSearchQuery.trim() !== '') {
                filtered = runAISearch(exploreSearchQuery);
            }
            if (exploreCategoryFilter !== 'All') {
                filtered = filtered.filter(c => c.category === exploreCategoryFilter);
            }

            container.innerHTML = `
                <div class="max-w-7xl mx-auto py-12 px-4 sm:px-6 lg:px-8 space-y-8">
                    <div class="space-y-3">
                        <span class="text-xs font-semibold text-green-600 uppercase tracking-wider bg-green-50 px-3 py-1 rounded-full">Explore Communities</span>
                        <h1 class="text-3xl font-bold text-slate-900">Discover All Student Groups & Hubs</h1>
                        <p class="text-slate-600 text-sm">Search naturally using AI or filter by category to find your next collaboration.</p>
                    </div>

                    <!-- Search & Filters Bar -->
                    <div class="bg-white p-4 rounded-2xl border border-slate-200 shadow-sm flex flex-col md:flex-row items-center gap-4">
                        <div class="relative flex-grow w-full">
                            <i data-lucide="search" class="absolute left-4 top-3.5 w-5 h-5 text-slate-400"></i>
                            <input type="text" id="explore-search-input" value="${exploreSearchQuery}" oninput="exploreSearchQuery = this.value; renderExplorePage(document.getElementById('main-content'));" placeholder="Try asking: 'I want something creative and social' or search by keyword..." class="w-full pl-12 pr-4 py-3 bg-slate-50 border border-slate-200 rounded-xl text-sm focus:outline-none focus:border-green-600">
                        </div>
                        <div class="flex items-center space-x-2 w-full md:w-auto overflow-x-auto pb-2 md:pb-0">
                            <select onchange="exploreCategoryFilter = this.value; renderExplorePage(document.getElementById('main-content'));" class="px-4 py-3 bg-slate-50 border border-slate-200 rounded-xl text-sm font-medium text-slate-700 focus:outline-none">
                                <option value="All">All Categories</option>
                                ${DB.categories.map(cat => `<option value="${cat}" ${exploreCategoryFilter === cat ? 'selected' : ''}>${cat}</option>`).join('')}
                            </select>
                        </div>
                    </div>

                    <!-- Communities Grid -->
                    <div class="grid grid-cols-1 md:grid-cols-3 gap-8">
                        ${filtered.length === 0 ? `
                            <div class="col-span-3 text-center py-16 space-y-3 bg-white rounded-3xl border border-slate-200">
                                <i data-lucide="search-x" class="w-12 h-12 text-slate-300 mx-auto"></i>
                                <h3 class="text-lg font-bold text-slate-700">No communities found</h3>
                                <p class="text-sm text-slate-500">Try adjusting your natural language search query or category filter.</p>
                            </div>
                        ` : filtered.map(c => `
                            <div class="bg-white rounded-3xl overflow-hidden border border-slate-200 shadow-sm hover:shadow-xl transition flex flex-col">
                                <div class="relative h-48 overflow-hidden">
                                    <img src="${c.image}" alt="${c.name}" class="w-full h-full object-cover">
                                    <span class="absolute top-3 left-3 bg-white/90 backdrop-blur-md text-slate-900 text-xs font-semibold px-3 py-1 rounded-full shadow-sm">${c.category}</span>
                                </div>
                                <div class="p-6 flex flex-col flex-grow space-y-4">
                                    <h3 class="text-xl font-bold text-slate-900">${c.name}</h3>
                                    <p class="text-slate-600 text-sm line-clamp-2">${c.description}</p>
                                    <div class="pt-4 border-t border-slate-100 flex items-center justify-between mt-auto">
                                        <span class="text-xs font-medium text-slate-500 flex items-center space-x-1">
                                            <i data-lucide="users" class="w-4 h-4 text-slate-400"></i>
                                            <span>${c.members_count} Members</span>
                                        </span>
                                        <button onclick="router.navigate('community_detail', { id: '${c.id}' })" class="px-4 py-2 bg-emerald-50 hover:bg-emerald-100 text-emerald-700 font-semibold rounded-xl text-xs transition">
                                            View Community
                                        </button>
                                    </div>
                                </div>
                            </div>
                        `).join('')}
                    </div>
                </div>
            `;
            lucide.createIcons();
        }
    </script>

    <script>
        function renderCommunityDetailPage(container, communityId) {
            const community = DB.communities.find(c => c.id === communityId) || DB.communities[0];
            const communityEvents = DB.events.filter(e => e.community_id === community.id);
            const isJoined = DB.memberships.some(m => m.student_id === DB.currentUser.id && m.community_id === community.id);
            const matchScore = calculateMatchScore(community, DB.studentProfile);
            const explanation = generateAIExplanation(community, DB.studentProfile);

            container.innerHTML = `
                <div class="max-w-5xl mx-auto py-12 px-4 sm:px-6 lg:px-8 space-y-10">
                    <!-- Cover Image & Header -->
                    <div class="relative h-80 rounded-3xl overflow-hidden shadow-xl">
                        <img src="${community.image}" alt="${community.name}" class="w-full h-full object-cover">
                        <div class="absolute inset-0 bg-gradient-to-t from-slate-950/80 via-slate-950/30 to-transparent flex flex-col justify-end p-8 text-white space-y-3">
                            <div class="flex items-center space-x-3">
                                <span class="bg-green-600 text-white text-xs font-semibold px-3 py-1 rounded-full">${community.category}</span>
                                <span class="bg-white/20 backdrop-blur-md text-white text-xs font-semibold px-3 py-1 rounded-full">${matchScore}% Match For You</span>
                            </div>
                            <h1 class="text-3xl sm:text-4xl font-extrabold tracking-tight">${community.name}</h1>
                            <p class="text-slate-200 text-sm max-w-2xl">${community.location} • Meeting: ${community.meeting_schedule}</p>
                        </div>
                    </div>

                    <div class="grid grid-cols-1 lg:grid-cols-3 gap-8">
                        <!-- Main Details -->
                        <div class="lg:col-span-2 space-y-8">
                            <div class="bg-white p-8 rounded-3xl border border-slate-200 shadow-sm space-y-4">
                                <h2 class="text-xl font-bold text-slate-900">About the Community</h2>
                                <p class="text-slate-600 text-sm leading-relaxed">${community.description}</p>
                            </div>

                            <!-- AI Matching Card -->
                            <div class="bg-gradient-to-r from-emerald-50 to-green-50 p-6 rounded-3xl border border-emerald-200 space-y-3">
                                <div class="flex items-center space-x-2 text-emerald-800 font-bold text-sm">
                                    <i data-lucide="sparkles" class="w-5 h-5 text-emerald-600"></i>
                                    <span>AI Matching Insights</span>
                                </div>
                                <p class="text-sm text-emerald-900 leading-relaxed">${explanation}</p>
                            </div>

                            <!-- Upcoming Events -->
                            <div class="bg-white p-8 rounded-3xl border border-slate-200 shadow-sm space-y-6">
                                <h2 class="text-xl font-bold text-slate-900">Upcoming Community Events</h2>
                                ${communityEvents.length === 0 ? `
                                    <p class="text-sm text-slate-500">No upcoming events scheduled right now. Check back soon!</p>
                                ` : communityEvents.map(e => `
                                    <div class="p-5 rounded-2xl border border-slate-100 bg-slate-50 flex flex-col sm:flex-row items-start sm:items-center justify-between gap-4">
                                        <div class="space-y-1">
                                            <h3 class="font-bold text-slate-900">${e.name}</h3>
                                            <p class="text-xs text-slate-500">${e.date} • ${e.time} • ${e.location}</p>
                                            <p class="text-xs text-slate-600">${e.description}</p>
                                        </div>
                                        <button onclick="showToast('Successfully registered for event!', 'success')" class="px-4 py-2 bg-green-600 hover:bg-green-700 text-white font-semibold rounded-xl text-xs transition whitespace-nowrap">
                                            Register
                                        </button>
                                    </div>
                                `).join('')}
                            </div>
                        </div>

                        <!-- Sidebar Actions -->
                        <div class="space-y-6">
                            <div class="bg-white p-6 rounded-3xl border border-slate-200 shadow-sm space-y-6">
                                <div class="flex items-center justify-between pb-4 border-b border-slate-100">
                                    <span class="text-sm font-medium text-slate-500">Total Members</span>
                                    <span class="font-bold text-slate-900">${community.members_count}</span>
                                </div>
                                <div class="flex items-center justify-between pb-4 border-b border-slate-100">
                                    <span class="text-sm font-medium text-slate-500">Experience Level</span>
                                    <span class="font-bold text-slate-900">${community.experience_level}</span>
                                </div>
                                <div class="space-y-2">
                                    <span class="text-xs font-semibold text-slate-500 uppercase tracking-wider">Required Skills</span>
                                    <div class="flex flex-wrap gap-1.5">
                                        ${(community.required_skills || []).map(s => `<span class="bg-slate-100 text-slate-700 text-xs font-medium px-2.5 py-1 rounded-lg">${s}</span>`).join('')}
                                    </div>
                                </div>
                                <div class="space-y-2 pt-2">
                                    <button onclick="handleJoinCommunity('${community.id}')" class="w-full py-3.5 ${isJoined ? 'bg-green-100 text-green-800' : 'bg-green-600 hover:bg-green-700 text-white'} font-bold rounded-2xl shadow-md transition text-sm">
                                        ${isJoined ? 'Joined Community' : 'Request to Join Community'}
                                    </button>
                                    <button onclick="router.navigate('explore')" class="w-full py-3 bg-slate-100 hover:bg-slate-200 text-slate-700 font-semibold rounded-2xl transition text-sm">
                                        Back to Explore
                                    </button>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            `;
            lucide.createIcons();
        }
    </script>

    <script>
        function renderEventsPage(container) {
            container.innerHTML = `
                <div class="max-w-7xl mx-auto py-12 px-4 sm:px-6 lg:px-8 space-y-8">
                    <div class="space-y-3">
                        <span class="text-xs font-semibold text-green-600 uppercase tracking-wider bg-green-50 px-3 py-1 rounded-full">Upcoming Events</span>
                        <h1 class="text-3xl font-bold text-slate-900">Workshops, Hackathons & Meetups</h1>
                        <p class="text-slate-600 text-sm">Personalized event recommendations based on your student profile.</p>
                    </div>

                    <div class="grid grid-cols-1 md:grid-cols-3 gap-8">
                        ${DB.events.map(e => {
                            const comm = DB.communities.find(c => c.id === e.community_id) || {};
                            return `
                                <div class="bg-white rounded-3xl p-6 border border-slate-200 shadow-sm flex flex-col space-y-4 justify-between">
                                    <div class="space-y-3">
                                        <div class="flex items-center justify-between">
                                            <span class="text-xs font-semibold text-emerald-700 bg-emerald-50 px-2.5 py-1 rounded-lg">${comm.category || 'Event'}</span>
                                            <span class="text-xs text-slate-400 font-medium">${e.date}</span>
                                        </div>
                                        <h3 class="text-xl font-bold text-slate-900">${e.name}</h3>
                                        <p class="text-slate-600 text-sm">${e.description}</p>
                                    </div>
                                    <div class="space-y-3 pt-4 border-t border-slate-100">
                                        <div class="text-xs text-slate-500 font-medium">📍 ${e.location} • ⏰ ${e.time}</div>
                                        <button onclick="showToast('Registered for ${e.name} successfully!', 'success')" class="w-full py-3 bg-green-600 hover:bg-green-700 text-white font-semibold rounded-xl text-sm transition">
                                            Register for Event
                                        </button>
                                    </div>
                                </div>
                            `;
                        }).join('')}
                    </div>
                </div>
            `;
            lucide.createIcons();
        }

        function renderSavedCommunitiesPage(container) {
            const saved = DB.communities.filter(c => DB.savedCommunities.includes(c.id));

            container.innerHTML = `
                <div class="max-w-7xl mx-auto py-12 px-4 sm:px-6 lg:px-8 space-y-8">
                    <div class="space-y-3">
                        <span class="text-xs font-semibold text-green-600 uppercase tracking-wider bg-green-50 px-3 py-1 rounded-full">Bookmarks</span>
                        <h1 class="text-3xl font-bold text-slate-900">Saved Communities</h1>
                        <p class="text-slate-600 text-sm">Quickly access the communities you have bookmarked for later.</p>
                    </div>

                    ${saved.length === 0 ? `
                        <div class="text-center py-20 bg-white rounded-3xl border border-slate-200 space-y-4">
                            <i data-lucide="bookmark" class="w-12 h-12 text-slate-300 mx-auto"></i>
                            <h3 class="text-lg font-bold text-slate-700">No saved communities yet</h3>
                            <p class="text-sm text-slate-500">Bookmark communities from the Explore or Recommendation pages.</p>
                            <button onclick="router.navigate('explore')" class="px-6 py-3 bg-green-600 text-white font-semibold rounded-xl text-sm">Explore Communities</button>
                        </div>
                    ` : `
                        <div class="grid grid-cols-1 md:grid-cols-3 gap-8">
                            ${saved.map(c => `
                                <div class="bg-white rounded-3xl overflow-hidden border border-slate-200 shadow-sm flex flex-col">
                                    <div class="relative h-48 overflow-hidden">
                                        <img src="${c.image}" alt="${c.name}" class="w-full h-full object-cover">
                                        <span class="absolute top-3 left-3 bg-white/90 backdrop-blur-md text-slate-900 text-xs font-semibold px-3 py-1 rounded-full shadow-sm">${c.category}</span>
                                    </div>
                                    <div class="p-6 flex flex-col flex-grow space-y-4">
                                        <h3 class="text-xl font-bold text-slate-900">${c.name}</h3>
                                        <p class="text-slate-600 text-sm line-clamp-2">${c.description}</p>
                                        <div class="pt-4 border-t border-slate-100 flex items-center justify-between mt-auto">
                                            <button onclick="toggleSaveCommunity('${c.id}')" class="text-xs text-red-600 font-medium hover:underline">Remove</button>
                                            <button onclick="router.navigate('community_detail', { id: '${c.id}' })" class="px-4 py-2 bg-emerald-50 hover:bg-emerald-100 text-emerald-700 font-semibold rounded-xl text-xs transition">View</button>
                                        </div>
                                    </div>
                                </div>
                            `).join('')}
                        </div>
                    `}
                </div>
            `;
            lucide.createIcons();
        }
    </script>

    <script>
        function renderOrganizerDashboard(container) {
            container.innerHTML = `
                <div class="max-w-7xl mx-auto py-12 px-4 sm:px-6 lg:px-8 space-y-10">
                    <div class="flex flex-col sm:flex-row items-start sm:items-center justify-between gap-4">
                        <div class="space-y-1">
                            <span class="text-xs font-semibold text-green-600 uppercase tracking-wider bg-green-50 px-3 py-1 rounded-full">Organizer Portal</span>
                            <h1 class="text-3xl font-bold text-slate-900">Manage Your Communities & Events</h1>
                        </div>
                        <button onclick="showToast('Community creation modal opened', 'success')" class="px-5 py-3 bg-green-600 hover:bg-green-700 text-white font-semibold rounded-2xl text-sm shadow-md transition flex items-center space-x-2">
                            <i data-lucide="plus" class="w-4 h-4"></i>
                            <span>Create New Community</span>
                        </button>
                    </div>

                    <!-- Stats Row -->
                    <div class="grid grid-cols-1 sm:grid-cols-3 gap-6">
                        <div class="bg-white p-6 rounded-3xl border border-slate-200 shadow-sm space-y-2">
                            <div class="text-sm font-medium text-slate-500">Total Members</div>
                            <div class="text-3xl font-extrabold text-slate-900">240</div>
                        </div>
                        <div class="bg-white p-6 rounded-3xl border border-slate-200 shadow-sm space-y-2">
                            <div class="text-sm font-medium text-slate-500">Active Events</div>
                            <div class="text-3xl font-extrabold text-slate-900">3</div>
                        </div>
                        <div class="bg-white p-6 rounded-3xl border border-slate-200 shadow-sm space-y-2">
                            <div class="text-sm font-medium text-slate-500">Pending Join Requests</div>
                            <div class="text-3xl font-extrabold text-emerald-600">${DB.joinRequests.length}</div>
                        </div>
                    </div>

                    <!-- Join Requests Table -->
                    <div class="bg-white rounded-3xl border border-slate-200 shadow-sm overflow-hidden p-6 space-y-6">
                        <h2 class="text-xl font-bold text-slate-900">Students Interested in Your Community</h2>
                        <div class="overflow-x-auto">
                            <table class="w-full text-left border-collapse text-sm">
                                <thead>
                                    <tr class="border-b border-slate-200 text-slate-400 font-semibold uppercase text-xs">
                                        <th class="pb-3">Student Name</th>
                                        <th class="pb-3">AI Match Score</th>
                                        <th class="pb-3">Common Interests</th>
                                        <th class="pb-3 text-right">Actions</th>
                                    </tr>
                                </thead>
                                <tbody class="divide-y divide-slate-100">
                                    ${DB.joinRequests.map(req => `
                                        <tr>
                                            <td class="py-4 font-semibold text-slate-900">${req.student_name}</td>
                                            <td class="py-4"><span class="bg-emerald-50 text-emerald-800 px-2.5 py-1 rounded-full font-bold text-xs">${req.match_score}% Match</span></td>
                                            <td class="py-4 text-slate-600">${req.common_interests}</td>
                                            <td class="py-4 text-right space-x-2">
                                                <button onclick="showToast('Approved join request for ${req.student_name}', 'success')" class="px-3 py-1.5 bg-green-600 text-white rounded-xl text-xs font-semibold">Approve</button>
                                                <button onclick="showToast('Declined request', 'success')" class="px-3 py-1.5 bg-slate-100 text-slate-700 rounded-xl text-xs font-semibold">Decline</button>
                                            </td>
                                        </tr>
                                    `).join('')}
                                </tbody>
                            </table>
                        </div>
                    </div>
                </div>
            `;
            lucide.createIcons();
        }

        function renderAdminDashboard(container) {
            container.innerHTML = `
                <div class="max-w-7xl mx-auto py-12 px-4 sm:px-6 lg:px-8 space-y-10">
                    <div class="space-y-1">
                        <span class="text-xs font-semibold text-slate-900 uppercase tracking-wider bg-slate-100 px-3 py-1 rounded-full">Admin Portal</span>
                        <h1 class="text-3xl font-bold text-slate-900">Platform Analytics & Management</h1>
                    </div>

                    <!-- Platform Analytics Stats -->
                    <div class="grid grid-cols-1 sm:grid-cols-4 gap-6">
                        <div class="bg-white p-6 rounded-3xl border border-slate-200 shadow-sm space-y-2">
                            <div class="text-sm font-medium text-slate-500">Total Students</div>
                            <div class="text-3xl font-extrabold text-slate-900">1,240</div>
                        </div>
                        <div class="bg-white p-6 rounded-3xl border border-slate-200 shadow-sm space-y-2">
                            <div class="text-sm font-medium text-slate-500">Total Communities</div>
                            <div class="text-3xl font-extrabold text-slate-900">${DB.communities.length}</div>
                        </div>
                        <div class="bg-white p-6 rounded-3xl border border-slate-200 shadow-sm space-y-2">
                            <div class="text-sm font-medium text-slate-500">Active Events</div>
                            <div class="text-3xl font-extrabold text-slate-900">${DB.events.length}</div>
                        </div>
                        <div class="bg-white p-6 rounded-3xl border border-slate-200 shadow-sm space-y-2">
                            <div class="text-sm font-medium text-slate-500">Match Accuracy</div>
                            <div class="text-3xl font-extrabold text-green-600">94.8%</div>
                        </div>
                    </div>

                    <!-- Configurable AI Weights Section -->
                    <div class="bg-white p-8 rounded-3xl border border-slate-200 shadow-sm space-y-6">
                        <div class="flex items-center justify-between">
                            <h2 class="text-xl font-bold text-slate-900">Configurable AI Recommendation Weights</h2>
                            <button onclick="showToast('AI weights updated successfully!', 'success')" class="px-4 py-2 bg-slate-900 text-white font-semibold rounded-xl text-xs">Save Weights</button>
                        </div>
                        <div class="grid grid-cols-1 sm:grid-cols-3 gap-6">
                            <div>
                                <label class="text-xs font-semibold text-slate-600">Semantic Similarity Weight</label>
                                <input type="number" step="0.05" value="${DB.adminWeights.semantic}" onchange="DB.adminWeights.semantic = parseFloat(this.value)" class="w-full mt-1 p-3 bg-slate-50 border border-slate-200 rounded-xl text-sm">
                            </div>
                            <div>
                                <label class="text-xs font-semibold text-slate-600">Interests Weight</label>
                                <input type="number" step="0.05" value="${DB.adminWeights.interests}" onchange="DB.adminWeights.interests = parseFloat(this.value)" class="w-full mt-1 p-3 bg-slate-50 border border-slate-200 rounded-xl text-sm">
                            </div>
                            <div>
                                <label class="text-xs font-semibold text-slate-600">Skills Compatibility Weight</label>
                                <input type="number" step="0.05" value="${DB.adminWeights.skills}" onchange="DB.adminWeights.skills = parseFloat(this.value)" class="w-full mt-1 p-3 bg-slate-50 border border-slate-200 rounded-xl text-sm">
                            </div>
                        </div>
                    </div>

                    <!-- Analytics Chart Container -->
                    <div class="bg-white p-8 rounded-3xl border border-slate-200 shadow-sm space-y-6">
                        <h2 class="text-xl font-bold text-slate-900">Community Popularity Distribution</h2>
                        <div class="h-80 relative">
                            <canvas id="adminAnalyticsChart"></canvas>
                        </div>
                    </div>
                </div>
            `;
            lucide.createIcons();

            // Render Chart.js
            setTimeout(() => {
                const ctx = document.getElementById('adminAnalyticsChart');
                if (ctx) {
                    new Chart(ctx, {
                        type: 'bar',
                        data: {
                            labels: DB.communities.map(c => c.name),
                            datasets: [{
                                label: 'Member Count',
                                data: DB.communities.map(c => c.members_count),
                                backgroundColor: '#16a34a',
                                borderRadius: 12
                            }]
                        },
                        options: {
                            responsive: true,
                            maintainAspectRatio: false,
                            plugins: { legend: { display: false } },
                            scales: { y: { beginAtZero: true } }
                        }
                    });
                }
            }, 50);
        }

        // Initialize application on load
        window.onload = function() {
            renderApp();
        };
    </script>
</body>
</html>
