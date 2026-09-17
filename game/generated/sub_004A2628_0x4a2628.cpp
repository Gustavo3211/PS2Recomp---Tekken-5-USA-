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

// Function: sub_004A2628
// Address: 0x4a2628 - 0x4a2710
void sub_004A2628_0x4a2628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2628_0x4a2628");
#endif

    switch (ctx->pc) {
        case 0x4a2668u: goto label_4a2668;
        case 0x4a2678u: goto label_4a2678;
        case 0x4a2688u: goto label_4a2688;
        case 0x4a2698u: goto label_4a2698;
        case 0x4a26a8u: goto label_4a26a8;
        case 0x4a26b8u: goto label_4a26b8;
        case 0x4a26c0u: goto label_4a26c0;
        case 0x4a26d8u: goto label_4a26d8;
        case 0x4a26f0u: goto label_4a26f0;
        default: break;
    }

    ctx->pc = 0x4a2628u;

    // 0x4a2628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a2628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a262c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a262cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a2630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a2630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2634: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4a2634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4a2638: 0x86030138  lh          $v1, 0x138($s0)
    ctx->pc = 0x4a2638u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x4a263c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x4a263cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4a2640: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4A2640u;
    {
        const bool branch_taken_0x4a2640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2640u;
        // 0x4a2644: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2640) {
            ctx->pc = 0x4A26B8u;
            goto label_4a26b8;
        }
    }
    ctx->pc = 0x4A2648u;
    // 0x4a2648: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4a2648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4a264c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a264cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a2650: 0x8c63b1b0  lw          $v1, -0x4E50($v1)
    ctx->pc = 0x4a2650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947248)));
    // 0x4a2654: 0x600008  jr          $v1
    ctx->pc = 0x4A2654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4A2660u: goto label_4a2660;
            case 0x4A2670u: goto label_4a2670;
            case 0x4A2680u: goto label_4a2680;
            case 0x4A2690u: goto label_4a2690;
            case 0x4A26A0u: goto label_4a26a0;
            case 0x4A26B0u: goto label_4a26b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2654u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4A265Cu;
    // 0x4a265c: 0x0  nop
    ctx->pc = 0x4a265cu;
    // NOP
label_4a2660:
    // 0x4a2660: 0xc1288d2  jal         func_4A2348
    ctx->pc = 0x4A2660u;
    SET_GPR_U32(ctx, 31, 0x4A2668u);
    ctx->pc = 0x4A2664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2660u;
    // 0x4a2664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2348u, 0x4A2660u, 0x4A2668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2668u;
label_4a2668:
    // 0x4a2668: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4A2668u;
    {
        const bool branch_taken_0x4a2668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2668) {
            ctx->pc = 0x4A26B8u;
            goto label_4a26b8;
        }
    }
    ctx->pc = 0x4A2670u;
label_4a2670:
    // 0x4a2670: 0xc1288e4  jal         func_4A2390
    ctx->pc = 0x4A2670u;
    SET_GPR_U32(ctx, 31, 0x4A2678u);
    ctx->pc = 0x4A2674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2670u;
    // 0x4a2674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2390u, 0x4A2670u, 0x4A2678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2678u;
label_4a2678:
    // 0x4a2678: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4A2678u;
    {
        const bool branch_taken_0x4a2678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2678) {
            ctx->pc = 0x4A26B8u;
            goto label_4a26b8;
        }
    }
    ctx->pc = 0x4A2680u;
label_4a2680:
    // 0x4a2680: 0xc12893a  jal         func_4A24E8
    ctx->pc = 0x4A2680u;
    SET_GPR_U32(ctx, 31, 0x4A2688u);
    ctx->pc = 0x4A2684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2680u;
    // 0x4a2684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A24E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A24E8u, 0x4A2680u, 0x4A2688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2688u;
label_4a2688:
    // 0x4a2688: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4A2688u;
    {
        const bool branch_taken_0x4a2688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2688) {
            ctx->pc = 0x4A26B8u;
            goto label_4a26b8;
        }
    }
    ctx->pc = 0x4A2690u;
label_4a2690:
    // 0x4a2690: 0xc128950  jal         func_4A2540
    ctx->pc = 0x4A2690u;
    SET_GPR_U32(ctx, 31, 0x4A2698u);
    ctx->pc = 0x4A2694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2690u;
    // 0x4a2694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2540u, 0x4A2690u, 0x4A2698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2698u;
label_4a2698:
    // 0x4a2698: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A2698u;
    {
        const bool branch_taken_0x4a2698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2698) {
            ctx->pc = 0x4A26B8u;
            goto label_4a26b8;
        }
    }
    ctx->pc = 0x4A26A0u;
label_4a26a0:
    // 0x4a26a0: 0xc128972  jal         func_4A25C8
    ctx->pc = 0x4A26A0u;
    SET_GPR_U32(ctx, 31, 0x4A26A8u);
    ctx->pc = 0x4A26A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A26A0u;
    // 0x4a26a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A25C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A25C8u, 0x4A26A0u, 0x4A26A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A26A8u;
label_4a26a8:
    // 0x4a26a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4A26A8u;
    {
        const bool branch_taken_0x4a26a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a26a8) {
            ctx->pc = 0x4A26B8u;
            goto label_4a26b8;
        }
    }
    ctx->pc = 0x4A26B0u;
label_4a26b0:
    // 0x4a26b0: 0xc128988  jal         func_4A2620
    ctx->pc = 0x4A26B0u;
    SET_GPR_U32(ctx, 31, 0x4A26B8u);
    ctx->pc = 0x4A2620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2620u, 0x4A26B0u, 0x4A26B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A26B8u;
label_4a26b8:
    // 0x4a26b8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A26B8u;
    SET_GPR_U32(ctx, 31, 0x4A26C0u);
    ctx->pc = 0x4A26BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A26B8u;
    // 0x4a26bc: 0x86040118  lh          $a0, 0x118($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A26B8u, 0x4A26C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A26C0u;
label_4a26c0:
    // 0x4a26c0: 0x8604011c  lh          $a0, 0x11C($s0)
    ctx->pc = 0x4a26c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x4a26c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a26c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a26c8: 0x31402  srl         $v0, $v1, 16
    ctx->pc = 0x4a26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4a26cc: 0xa6030024  sh          $v1, 0x24($s0)
    ctx->pc = 0x4a26ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a26d0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A26D0u;
    SET_GPR_U32(ctx, 31, 0x4A26D8u);
    ctx->pc = 0x4A26D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A26D0u;
    // 0x4a26d4: 0xa6020022  sh          $v0, 0x22($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A26D0u, 0x4A26D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A26D8u;
label_4a26d8:
    // 0x4a26d8: 0x86040120  lh          $a0, 0x120($s0)
    ctx->pc = 0x4a26d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x4a26dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a26dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a26e0: 0x31402  srl         $v0, $v1, 16
    ctx->pc = 0x4a26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4a26e4: 0xa6030028  sh          $v1, 0x28($s0)
    ctx->pc = 0x4a26e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a26e8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A26E8u;
    SET_GPR_U32(ctx, 31, 0x4A26F0u);
    ctx->pc = 0x4A26ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A26E8u;
    // 0x4a26ec: 0xa6020026  sh          $v0, 0x26($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A26E8u, 0x4A26F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A26F0u;
label_4a26f0:
    // 0x4a26f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a26f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a26f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4a26f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a26f8: 0x31402  srl         $v0, $v1, 16
    ctx->pc = 0x4a26f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4a26fc: 0xa603002c  sh          $v1, 0x2C($s0)
    ctx->pc = 0x4a26fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2700: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x4a2700u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a2704: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a2704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2708: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2708u;
        // 0x4a270c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A2710u;
}
