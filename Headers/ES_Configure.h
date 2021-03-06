/****************************************************************************
 Module
     ES_Configure.h
 Description
     This file contains macro definitions that are edited by the user to
     adapt the Events and Services framework to a particular application.
 Notes
     
 History
 When           Who     What/Why
 -------------- ---     --------
  10/11/15 18:00 jec      added new event type ES_SHORT_TIMEOUT
  10/21/13 20:54 jec      lots of added entries to bring the number of timers
                         and services up to 16 each
 08/06/13 14:10 jec      removed PostKeyFunc stuff since we are moving that
                         functionality out of the framework and putting it
                         explicitly into the event checking functions
 01/15/12 10:03 jec      started coding
*****************************************************************************/

#ifndef CONFIGURE_H
#define CONFIGURE_H

/****************************************************************************/
// The maximum number of services sets an upper bound on the number of 
// services that the framework will handle. Reasonable values are 8 and 16
// corresponding to an 8-bit(uint8_t) and 16-bit(uint16_t) Ready variable size
#define MAX_NUM_SERVICES 16

/****************************************************************************/
// This macro determines that nuber of services that are *actually* used in
// a particular application. It will vary in value from 1 to MAX_NUM_SERVICES
#define NUM_SERVICES 7

/****************************************************************************/
// These are the definitions for Service 0, the lowest priority service.
// Every Events and Services application must have a Service 0. Further 
// services are added in numeric sequence (1,2,3,...) with increasing 
// priorities
// the header file with the publmic function prototypes
#define SERV_0_HEADER "KeyboardService.h"
// the name of the Init function
#define SERV_0_INIT InitKeyboardService
// the name of the run function
#define SERV_0_RUN RunKeyboardService
// How big should this services Queue be?
#define SERV_0_QUEUE_SIZE 3

/****************************************************************************/
// The following sections are used to define the parameters for each of the
// services. You only need to fill out as many as the number of services 
// defined by NUM_SERVICES
/****************************************************************************/
// These are the definitions for Service 1
#if NUM_SERVICES > 1
// the header file with the public function prototypes
#define SERV_1_HEADER "MicrophoneService.h"
// the name of the Init function
#define SERV_1_INIT InitMicrophoneService
// the name of the run function
#define SERV_1_RUN RunMicrophoneService
// How big should this services Queue be?
#define SERV_1_QUEUE_SIZE 3
#endif

/****************************************************************************/
// These are the definitions for Service 2
#if NUM_SERVICES > 2
// the header file with the public function prototypes
#define SERV_2_HEADER "KnobService.h"
// the name of the Init function
#define SERV_2_INIT InitKnobService
// the name of the run function
#define SERV_2_RUN RunKnobService
// How big should this services Queue be?
#define SERV_2_QUEUE_SIZE 3
#endif

/****************************************************************************/
// These are the definitions for Service 3
#if NUM_SERVICES > 3
// the header file with the public function prototypes
#define SERV_3_HEADER "WatertubeService.h"
// the name of the Init function
#define SERV_3_INIT InitWatertubeService
// the name of the run function
#define SERV_3_RUN RunWatertubeService
// How big should this services Queue be?
#define SERV_3_QUEUE_SIZE 8
#endif

/****************************************************************************/
// These are the definitions for Service 4
#if NUM_SERVICES > 4
// the header file with the public function prototypes
#define SERV_4_HEADER "LEDService.h"
// the name of the Init function
#define SERV_4_INIT InitLEDService
// the name of the run function
#define SERV_4_RUN RunLEDService
// How big should this services Queue be?
#define SERV_4_QUEUE_SIZE 3
#endif

/****************************************************************************/
// These are the definitions for Service 5
#if NUM_SERVICES > 5
// the header file with the public function prototypes
#define SERV_5_HEADER "ResetService.h"
// the name of the Init function
#define SERV_5_INIT InitializeResetService
// the name of the run function
#define SERV_5_RUN RunResetService
// How big should this services Queue be?
#define SERV_5_QUEUE_SIZE 3
#endif

/****************************************************************************/
// These are the definitions for Service 6
#if NUM_SERVICES > 6
// the header file with the public function prototypes
#define SERV_6_HEADER "ResistiveStripService.h"
// the name of the Init function
#define SERV_6_INIT InitResistiveStripService
// the name of the run function
#define SERV_6_RUN RunResistiveStripService
// How big should this services Queue be?
#define SERV_6_QUEUE_SIZE 3
#endif

/****************************************************************************/
// These are the definitions for Service 7
#if NUM_SERVICES > 7
// the header file with the public function prototypes
#define SERV_7_HEADER "TestHarnessService7.h"
// the name of the Init function
#define SERV_7_INIT InitTestHarnessService7
// the name of the run function
#define SERV_7_RUN RunTestHarnessService7
// How big should this services Queue be?
#define SERV_7_QUEUE_SIZE 3
#endif

/****************************************************************************/
// These are the definitions for Service 8
#if NUM_SERVICES > 8
// the header file with the public function prototypes
#define SERV_8_HEADER "TestHarnessService8.h"
// the name of the Init function
#define SERV_8_INIT InitTestHarnessService8
// the name of the run function
#define SERV_8_RUN RunTestHarnessService8
// How big should this services Queue be?
#define SERV_8_QUEUE_SIZE 3
#endif

/****************************************************************************/
// These are the definitions for Service 9
#if NUM_SERVICES > 9
// the header file with the public function prototypes
#define SERV_9_HEADER "TestHarnessService9.h"
// the name of the Init function
#define SERV_9_INIT InitTestHarnessService9
// the name of the run function
#define SERV_9_RUN RunTestHarnessService9
// How big should this services Queue be?
#define SERV_9_QUEUE_SIZE 3
#endif

/****************************************************************************/
// These are the definitions for Service 10
#if NUM_SERVICES > 10
// the header file with the public function prototypes
#define SERV_10_HEADER "TestHarnessService10.h"
// the name of the Init function
#define SERV_10_INIT InitTestHarnessService10
// the name of the run function
#define SERV_10_RUN RunTestHarnessService10
// How big should this services Queue be?
#define SERV_10_QUEUE_SIZE 3
#endif

/****************************************************************************/
// These are the definitions for Service 11
#if NUM_SERVICES > 11
// the header file with the public function prototypes
#define SERV_11_HEADER "TestHarnessService11.h"
// the name of the Init function
#define SERV_11_INIT InitTestHarnessService11
// the name of the run function
#define SERV_11_RUN RunTestHarnessService11
// How big should this services Queue be?
#define SERV_11_QUEUE_SIZE 3
#endif

/****************************************************************************/
// These are the definitions for Service 12
#if NUM_SERVICES > 12
// the header file with the public function prototypes
#define SERV_12_HEADER "TestHarnessService12.h"
// the name of the Init function
#define SERV_12_INIT InitTestHarnessService12
// the name of the run function
#define SERV_12_RUN RunTestHarnessService12
// How big should this services Queue be?
#define SERV_12_QUEUE_SIZE 3
#endif

/****************************************************************************/
// These are the definitions for Service 13
#if NUM_SERVICES > 13
// the header file with the public function prototypes
#define SERV_13_HEADER "TestHarnessService13.h"
// the name of the Init function
#define SERV_13_INIT InitTestHarnessService13
// the name of the run function
#define SERV_13_RUN RunTestHarnessService13
// How big should this services Queue be?
#define SERV_13_QUEUE_SIZE 3
#endif

/****************************************************************************/
// These are the definitions for Service 14
#if NUM_SERVICES > 14
// the header file with the public function prototypes
#define SERV_14_HEADER "TestHarnessService14.h"
// the name of the Init function
#define SERV_14_INIT InitTestHarnessService14
// the name of the run function
#define SERV_14_RUN RunTestHarnessService14
// How big should this services Queue be?
#define SERV_14_QUEUE_SIZE 3
#endif

/****************************************************************************/
// These are the definitions for Service 15
#if NUM_SERVICES > 15
// the header file with the public function prototypes
#define SERV_15_HEADER "TestHarnessService15.h"
// the name of the Init function
#define SERV_15_INIT InitTestHarnessService15
// the name of the run function
#define SERV_15_RUN RunTestHarnessService15
// How big should this services Queue be?
#define SERV_15_QUEUE_SIZE 3
#endif


/****************************************************************************/
// Name/define the events of interest
// Universal events occupy the lowest entries, followed by user-defined events
typedef enum {  ES_NO_EVENT = 0,
                ES_ERROR,  /* used to indicate an error from the service */
                ES_INIT,   /* used to transition from initial pseudo-state */
                ES_TIMEOUT, /* signals that the timer has expired */
                ES_SHORT_TIMEOUT, /* signals that a short timer has expired */
								// Example Events
                ES_NEW_KEY,

								// LED Service Events
								LED_MODE_1,
								LED_MODE_2,
								LED_MODE_3,
								LED_MODE_4,
								LED_MODE_5,
								LED_MODE_6,
								LED_MODE_7,
								LED_MODE_8,
								LED_MODE_9,
								LED_MODE_10,
								
								// Water Tube Service Events
								CHANGE_WATER_1,
								CHANGE_WATER_2,
								CHANGE_WATER_3,
								CHANGE_WATER_4,
								CHANGE_WATER_5,
								CHANGE_WATER_6,
								CHANGE_WATER_7,
								CHANGE_WATER_8,
								WATERTUBE_SLEEP,
								
								// Knob Service events
								CHANGE_KNOB_VIBRATION,
								
								// Resistive Strip Events 
								RESISTIVE_STRIP_CHANGED,
								
								// Microphone Service Events
								MICROPHONE_SOUND_RECORDED,
								MICROPHONE_FOURIER_COMPLETED,
								MICROPHONE_START,
								MICROPHONE_STOP,
								
								// Lifecycle Hardware Initilization
								LIFECYCLE_HARDWARE_INITALIZED,
								LIFECYCLE_START_WELCOME_PERFORMANCE,
								LIFECYCLE_WELCOME_COMPLETE,
								LIFECYCLE_INACTIVITY_RESET,
								LIFECYCLE_PASSAGE_OF_TIME_COMPLETE,
								LIFECYCLE_RESET_ALL,
								
								// Reset Service Events
								ES_SLEEP,  // Posted to make services sleep  
								ES_WAKE,   // Posted to make services wake
								ES_INTERACTION, 
								ES_RESET_BUTTON, 
								ES_WELCOME_COMPLETE
} ES_EventTyp_t;

/****************************************************************************/
// These are the definitions for the Distribution lists. Each definition
// should be a comma separated list of post functions to indicate which
// services are on that distribution list.
#define NUM_DIST_LISTS 1
#if NUM_DIST_LISTS > 0 
#define DIST_LIST0 PostMicrophoneService,
#endif
#if NUM_DIST_LISTS > 1 
#define DIST_LIST1 PostTemplateFSM
#endif
#if NUM_DIST_LISTS > 2
#define DIST_LIST2 PostTemplateFSM
#endif
#if NUM_DIST_LISTS > 3
#define DIST_LIST3 PostTemplateFSM
#endif
#if NUM_DIST_LISTS > 4
#define DIST_LIST4 PostTemplateFSM
#endif
#if NUM_DIST_LISTS > 5
#define DIST_LIST5 PostTemplateFSM
#endif
#if NUM_DIST_LISTS > 6
#define DIST_LIST6 PostTemplateFSM
#endif
#if NUM_DIST_LISTS > 7
#define DIST_LIST7 PostTemplateFSM
#endif

/****************************************************************************/
// This are the name of the Event checking funcion header file.
#define EVENT_CHECK_HEADER "EventCheckers.h"

/****************************************************************************/
// This is the list of event checking functions
#define EVENT_CHECK_LIST Check4Keystroke, Check4Knob, Check4ResetButton



/****************************************************************************/
// These are the definitions for the post functions to be executed when the
// corresponding timer expires. All 16 must be defined. If you are not using
// a timer, then you should use TIMER_UNUSED
// Unlike services, any combination of timers may be used and there is no
// priority in servicing them
#define TIMER_UNUSED ((pPostFunc)0)
#define TIMER0_RESP_FUNC PostMicrophoneService // Short timer in Mircophone Service
#define TIMER1_RESP_FUNC PostMicrophoneService // Short timer in Mircophone Service
#define TIMER2_RESP_FUNC PostResetService
#define TIMER3_RESP_FUNC PostResetService
#define TIMER4_RESP_FUNC PostLEDService
#define TIMER5_RESP_FUNC PostResistiveStripService
#define TIMER6_RESP_FUNC PostKnobService
#define TIMER7_RESP_FUNC TIMER_UNUSED
#define TIMER8_RESP_FUNC TIMER_UNUSED
#define TIMER9_RESP_FUNC TIMER_UNUSED
#define TIMER10_RESP_FUNC TIMER_UNUSED
#define TIMER11_RESP_FUNC TIMER_UNUSED
#define TIMER12_RESP_FUNC TIMER_UNUSED
#define TIMER13_RESP_FUNC TIMER_UNUSED
#define TIMER14_RESP_FUNC TIMER_UNUSED
#define TIMER15_RESP_FUNC TIMER_UNUSED

/****************************************************************************/
// Give the timer numbers symbolic names to make it easier to move them
// to different timers if the need arises. Keep these definitions close to the
// definitions for the response functions to make it easier to check that
// the timer number matches where the timer event will be routed
// These symbolic names should be changed to be relevant to your application

#define PASSAGE_OF_TIME_TIMER 2
#define INACTIVITY_TIMER 3
#define WELCOME_LED_TIMER 4
#define RESISTIVE_STRIP_TIMER 5
#define KNOB_VIBRATION_TIMER 6

#endif /* CONFIGURE_H */
