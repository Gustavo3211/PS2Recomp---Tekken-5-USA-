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

// Function: sub_002A28E0
// Address: 0x2a28e0 - 0x2a29b8
void sub_002A28E0_0x2a28e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A28E0_0x2a28e0");
#endif

    switch (ctx->pc) {
        case 0x2a2920u: goto label_2a2920;
        case 0x2a2940u: goto label_2a2940;
        case 0x2a294cu: goto label_2a294c;
        case 0x2a2980u: goto label_2a2980;
        case 0x2a298cu: goto label_2a298c;
        default: break;
    }

    ctx->pc = 0x2a28e0u;

    // 0x2a28e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a28e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a28e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a28e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a28e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a28e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a28ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2a28ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a28f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a28f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a28f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a28f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a28f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a28f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a28fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a28fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a2900: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a2900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a2904: 0x16820023  bne         $s4, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2A2904u;
    {
        const bool branch_taken_0x2a2904 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A2908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2904u;
        // 0x2a2908: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2904) {
            ctx->pc = 0x2A2994u;
            goto label_2a2994;
        }
    }
    ctx->pc = 0x2A290Cu;
    // 0x2a290c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2a290cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2910: 0x16500011  bne         $s2, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A2910u;
    {
        const bool branch_taken_0x2a2910 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x2A2914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2910u;
        // 0x2a2914: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2910) {
            ctx->pc = 0x2A2958u;
            goto label_2a2958;
        }
    }
    ctx->pc = 0x2A2918u;
    // 0x2a2918: 0xc0a79d0  jal         func_29E740
    ctx->pc = 0x2A2918u;
    SET_GPR_U32(ctx, 31, 0x2A2920u);
    ctx->pc = 0x2A291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2918u;
    // 0x2a291c: 0x2484c668  addiu       $a0, $a0, -0x3998 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E740u, 0x2A2918u, 0x2A2920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2920u;
label_2a2920:
    // 0x2a2920: 0x1650000d  bne         $s2, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A2920u;
    {
        const bool branch_taken_0x2a2920 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x2A2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2920u;
        // 0x2a2924: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2920) {
            ctx->pc = 0x2A2958u;
            goto label_2a2958;
        }
    }
    ctx->pc = 0x2A2928u;
    // 0x2a2928: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2a2928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x2a292c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2a292cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2930: 0x24507720  addiu       $s0, $v0, 0x7720
    ctx->pc = 0x2a2930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30496));
    // 0x2a2934: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2a2934u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a2938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a293c: 0x0  nop
    ctx->pc = 0x2a293cu;
    // NOP
label_2a2940:
    // 0x2a2940: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x2a2940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2a2944: 0xc0a7eaa  jal         func_29FAA8
    ctx->pc = 0x2A2944u;
    SET_GPR_U32(ctx, 31, 0x2A294Cu);
    ctx->pc = 0x2A2948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2944u;
    // 0x2a2948: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAA8u, 0x2A2944u, 0x2A294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A294Cu;
label_2a294c:
    // 0x2a294c: 0x1633fffc  bne         $s1, $s3, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2A294Cu;
    {
        const bool branch_taken_0x2a294c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x2A2950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A294Cu;
        // 0x2a2950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a294c) {
            ctx->pc = 0x2A2940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2940;
        }
    }
    ctx->pc = 0x2A2954u;
    // 0x2a2954: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a2954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2a2958:
    // 0x2a2958: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A2958u;
    {
        const bool branch_taken_0x2a2958 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2958u;
        // 0x2a295c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2958) {
            ctx->pc = 0x2A2998u;
            goto label_2a2998;
        }
    }
    ctx->pc = 0x2A2960u;
    // 0x2a2960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2964: 0x5642000d  bnel        $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A2964u;
    {
        const bool branch_taken_0x2a2964 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a2964) {
            ctx->pc = 0x2A2968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2964u;
            // 0x2a2968: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A299Cu;
            goto label_2a299c;
        }
    }
    ctx->pc = 0x2A296Cu;
    // 0x2a296c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2a296cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x2a2970: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2a2970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2974: 0x245077e0  addiu       $s0, $v0, 0x77E0
    ctx->pc = 0x2a2974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30688));
    // 0x2a2978: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2a2978u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a297c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a297cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2980:
    // 0x2a2980: 0x26100068  addiu       $s0, $s0, 0x68
    ctx->pc = 0x2a2980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x2a2984: 0xc0a8058  jal         func_2A0160
    ctx->pc = 0x2A2984u;
    SET_GPR_U32(ctx, 31, 0x2A298Cu);
    ctx->pc = 0x2A2988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2984u;
    // 0x2a2988: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0160u, 0x2A2984u, 0x2A298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A298Cu;
label_2a298c:
    // 0x2a298c: 0x1632fffc  bne         $s1, $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2A298Cu;
    {
        const bool branch_taken_0x2a298c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x2A2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A298Cu;
        // 0x2a2990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a298c) {
            ctx->pc = 0x2A2980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2980;
        }
    }
    ctx->pc = 0x2A2994u;
label_2a2994:
    // 0x2a2994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a2994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a2998:
    // 0x2a2998: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a2998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2a299c:
    // 0x2a299c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a299cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a29a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a29a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a29a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a29a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a29a8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2a29a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a29ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2A29ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A29B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29ACu;
        // 0x2a29b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A29ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A29B4u;
    // 0x2a29b4: 0x0  nop
    ctx->pc = 0x2a29b4u;
    // NOP
    ctx->pc = 0x2a29b8u;
}
