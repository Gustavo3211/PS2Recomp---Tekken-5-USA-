#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C2540
// Address: 0x4c2540 - 0x4c26a0
void sub_004C2540_0x4c2540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C2540_0x4c2540");
#endif

    switch (ctx->pc) {
        case 0x4c2560u: goto label_4c2560;
        case 0x4c2580u: goto label_4c2580;
        case 0x4c2624u: goto label_4c2624;
        default: break;
    }

    ctx->pc = 0x4c2540u;

    // 0x4c2540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c2540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c2544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c2544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c2548: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c2548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c254c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c254cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2550: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c2550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c2554: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4c2554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4c2558: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4C2558u;
    SET_GPR_U32(ctx, 31, 0x4C2560u);
    ctx->pc = 0x4C255Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2558u;
    // 0x4c255c: 0x263001b4  addiu       $s0, $s1, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4C2558u, 0x4C2560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2560u;
label_4c2560:
    // 0x4c2560: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c2560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c2564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c2564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2568: 0xac620eb4  sw          $v0, 0xEB4($v1)
    ctx->pc = 0x4c2568u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0EB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0EB4u, _value); } while (0);
    // 0x4c256c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c256cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c2570: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4C2570u;
    {
        const bool branch_taken_0x4c2570 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C2574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2570u;
        // 0x4c2574: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2570) {
            ctx->pc = 0x4C25A0u;
            goto label_4c25a0;
        }
    }
    ctx->pc = 0x4C2578u;
    // 0x4c2578: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4C2578u;
    SET_GPR_U32(ctx, 31, 0x4C2580u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4C2578u, 0x4C2580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2580u;
label_4c2580:
    // 0x4c2580: 0x24058000  addiu       $a1, $zero, -0x8000
    ctx->pc = 0x4c2580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x4c2584: 0x262401b6  addiu       $a0, $s1, 0x1B6
    ctx->pc = 0x4c2584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 438));
    // 0x4c2588: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c2588u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c258c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4c258cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4c2590: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4c2590u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2594: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4c2594u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c2598: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4c2598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4c259c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x4c259cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_4c25a0:
    // 0x4c25a0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x4c25a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c25a4: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4C25A4u;
    {
        const bool branch_taken_0x4c25a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C25A4u;
        // 0x4c25a8: 0x8e320140  lw          $s2, 0x140($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c25a4) {
            ctx->pc = 0x4C25C8u;
            goto label_4c25c8;
        }
    }
    ctx->pc = 0x4C25ACu;
    // 0x4c25ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c25acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c25b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c25b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c25b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c25b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c25b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c25b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c25bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4c25bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c25c0: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4C25C0u;
    ctx->pc = 0x4C25C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C25C0u;
    // 0x4c25c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4C25C8u;
label_4c25c8:
    // 0x4c25c8: 0x964701c2  lhu         $a3, 0x1C2($s2)
    ctx->pc = 0x4c25c8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 450)));
    // 0x4c25cc: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4c25ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4c25d0: 0x25080ea4  addiu       $t0, $t0, 0xEA4
    ctx->pc = 0x4c25d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3748));
    // 0x4c25d4: 0x8622015e  lh          $v0, 0x15E($s1)
    ctx->pc = 0x4c25d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 350)));
    // 0x4c25d8: 0xa62701c2  sh          $a3, 0x1C2($s1)
    ctx->pc = 0x4c25d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 450), (uint16_t)GPR_U32(ctx, 7));
    // 0x4c25dc: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4c25dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4c25e0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4c25e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4c25e4: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4c25e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4c25e8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4c25e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0EA4u));
    // 0x4c25ec: 0x25290ea8  addiu       $t1, $t1, 0xEA8
    ctx->pc = 0x4c25ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3752));
    // 0x4c25f0: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x4c25f0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0EA8u));
    // 0x4c25f4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4c25f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c25f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c25f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c25fc: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x4c25fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2600: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c2600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c2604: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c2604u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c2608: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4c2608u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4c260c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c260cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2610: 0x86220160  lh          $v0, 0x160($s1)
    ctx->pc = 0x4c2610u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x4c2614: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4c2614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4c2618: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4c2618u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4c261c: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4C261Cu;
    SET_GPR_U32(ctx, 31, 0x4C2624u);
    ctx->pc = 0x4C2620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C261Cu;
    // 0x4c2620: 0xad270000  sw          $a3, 0x0($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4C261Cu, 0x4C2624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2624u;
label_4c2624:
    // 0x4c2624: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4c2624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4c2628: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x4c2628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4c262c: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x4c262cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x4c2630: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4c2630u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c2634: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4c2634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4c2638: 0x26260018  addiu       $a2, $s1, 0x18
    ctx->pc = 0x4c2638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x4c263c: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x4c263cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x4c2640: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c2640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c2644: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4c2644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c2648: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c2648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c264c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c264cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2650: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4c2650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4c2654: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4c2654u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c2658: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4c2658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4c265c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c265cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c2660: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c2660u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c2664: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x4c2664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4c2668: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4c2668u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c266c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4c266cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4c2670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c2670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2674: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c2674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c2678: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c2678u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c267c: 0x96420118  lhu         $v0, 0x118($s2)
    ctx->pc = 0x4c267cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 280)));
    // 0x4c2680: 0xa6220118  sh          $v0, 0x118($s1)
    ctx->pc = 0x4c2680u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c2684: 0x9643011c  lhu         $v1, 0x11C($s2)
    ctx->pc = 0x4c2684u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x4c2688: 0xa6270120  sh          $a3, 0x120($s1)
    ctx->pc = 0x4c2688u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 288), (uint16_t)GPR_U32(ctx, 7));
    // 0x4c268c: 0xa623011c  sh          $v1, 0x11C($s1)
    ctx->pc = 0x4c268cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c2690: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c2690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c2694: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c2694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c2698: 0x8127e84  j           func_49FA10
    ctx->pc = 0x4C2698u;
    ctx->pc = 0x4C269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2698u;
    // 0x4c269c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    sub_0049FA10_0x49fa10(rdram, ctx, runtime); return;
    ctx->pc = 0x4C26A0u;
}
