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

// Function: sub_002462D0
// Address: 0x2462d0 - 0x2463b8
void sub_002462D0_0x2462d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002462D0_0x2462d0");
#endif

    switch (ctx->pc) {
        case 0x2462f8u: goto label_2462f8;
        case 0x246320u: goto label_246320;
        case 0x246360u: goto label_246360;
        case 0x246370u: goto label_246370;
        case 0x246380u: goto label_246380;
        default: break;
    }

    ctx->pc = 0x2462d0u;

    // 0x2462d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2462d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2462d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2462d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2462d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2462d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2462dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2462dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2462e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2462e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2462e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2462e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2462e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2462e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2462ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2462ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2462f0: 0xc0916b0  jal         func_245AC0
    ctx->pc = 0x2462F0u;
    SET_GPR_U32(ctx, 31, 0x2462F8u);
    ctx->pc = 0x2462F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2462F0u;
    // 0x2462f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245AC0u, 0x2462F0u, 0x2462F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2462F8u;
label_2462f8:
    // 0x2462f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2462f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2462fc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2462fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x246300: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x246300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x246304: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x246304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x246308: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x246308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24630c: 0x8c63f0d8  lw          $v1, -0xF28($v1)
    ctx->pc = 0x24630cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963416)));
    // 0x246310: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x246310u;
    {
        const bool branch_taken_0x246310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246310) {
            ctx->pc = 0x246358u;
            goto label_246358;
        }
    }
    ctx->pc = 0x246318u;
    // 0x246318: 0xc08afec  jal         func_22BFB0
    ctx->pc = 0x246318u;
    SET_GPR_U32(ctx, 31, 0x246320u);
    ctx->pc = 0x24631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246318u;
    // 0x24631c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFB0u, 0x246318u, 0x246320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246320u;
label_246320:
    // 0x246320: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x246320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246324: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x246324u;
    {
        const bool branch_taken_0x246324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246324u;
        // 0x246328: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246324) {
            ctx->pc = 0x24639Cu;
            goto label_24639c;
        }
    }
    ctx->pc = 0x24632Cu;
    // 0x24632c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x246330: 0x1642001a  bne         $s2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x246330u;
    {
        const bool branch_taken_0x246330 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x246334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246330u;
        // 0x246334: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246330) {
            ctx->pc = 0x24639Cu;
            goto label_24639c;
        }
    }
    ctx->pc = 0x246338u;
    // 0x246338: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x246338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x24633c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x24633Cu;
    {
        const bool branch_taken_0x24633c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24633Cu;
        // 0x246340: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24633c) {
            ctx->pc = 0x246398u;
            goto label_246398;
        }
    }
    ctx->pc = 0x246344u;
    // 0x246344: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x246344u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x246348: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x246348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x24634c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x246350: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x246350u;
    {
        const bool branch_taken_0x246350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246350u;
        // 0x246354: 0x8c530068  lw          $s3, 0x68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246350) {
            ctx->pc = 0x246398u;
            goto label_246398;
        }
    }
    ctx->pc = 0x246358u;
label_246358:
    // 0x246358: 0xc0916b8  jal         func_245AE0
    ctx->pc = 0x246358u;
    SET_GPR_U32(ctx, 31, 0x246360u);
    ctx->pc = 0x24635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246358u;
    // 0x24635c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245AE0u, 0x246358u, 0x246360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246360u;
label_246360:
    // 0x246360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246364: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x246364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246368: 0xc0916e6  jal         func_245B98
    ctx->pc = 0x246368u;
    SET_GPR_U32(ctx, 31, 0x246370u);
    ctx->pc = 0x24636Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246368u;
    // 0x24636c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245B98u, 0x246368u, 0x246370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246370u;
label_246370:
    // 0x246370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246374: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x246374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246378: 0xc091704  jal         func_245C10
    ctx->pc = 0x246378u;
    SET_GPR_U32(ctx, 31, 0x246380u);
    ctx->pc = 0x24637Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246378u;
    // 0x24637c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C10u, 0x246378u, 0x246380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246380u;
label_246380:
    // 0x246380: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x246380u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246384: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x246384u;
    {
        const bool branch_taken_0x246384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246384u;
        // 0x246388: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246384) {
            ctx->pc = 0x2463A0u;
            goto label_2463a0;
        }
    }
    ctx->pc = 0x24638Cu;
    // 0x24638c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x246390: 0x52420001  beql        $s2, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x246390u;
    {
        const bool branch_taken_0x246390 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x246390) {
            ctx->pc = 0x246394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246390u;
            // 0x246394: 0x8c730068  lw          $s3, 0x68($v1) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246398u;
            goto label_246398;
        }
    }
    ctx->pc = 0x246398u;
label_246398:
    // 0x246398: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x246398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24639c:
    // 0x24639c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24639cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2463a0:
    // 0x2463a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2463a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2463a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2463a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2463a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2463a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2463ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2463acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2463b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2463B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2463B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463B0u;
        // 0x2463b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2463B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2463B8u;
}
