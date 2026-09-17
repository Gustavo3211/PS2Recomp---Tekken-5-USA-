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

// Function: sub_00329248
// Address: 0x329248 - 0x329348
void sub_00329248_0x329248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329248_0x329248");
#endif

    switch (ctx->pc) {
        case 0x329270u: goto label_329270;
        case 0x32927cu: goto label_32927c;
        case 0x32928cu: goto label_32928c;
        case 0x329298u: goto label_329298;
        case 0x3292acu: goto label_3292ac;
        case 0x3292c0u: goto label_3292c0;
        case 0x3292d4u: goto label_3292d4;
        case 0x3292e8u: goto label_3292e8;
        case 0x3292fcu: goto label_3292fc;
        case 0x32930cu: goto label_32930c;
        case 0x329320u: goto label_329320;
        default: break;
    }

    ctx->pc = 0x329248u;

    // 0x329248: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x329248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32924c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x32924cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x329250: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x329250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x329254: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x329254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x329258: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x329258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x32925c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32925cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x329260: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x329260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329264: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x329264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x329268: 0x3c120044  lui         $s2, 0x44
    ctx->pc = 0x329268u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)68 << 16));
    // 0x32926c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32926cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_329270:
    // 0x329270: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x329270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x329274: 0xc0ca982  jal         func_32A608
    ctx->pc = 0x329274u;
    SET_GPR_U32(ctx, 31, 0x32927Cu);
    ctx->pc = 0x329278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329274u;
    // 0x329278: 0x2644f380  addiu       $a0, $s2, -0xC80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294964096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A608u, 0x329274u, 0x32927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32927Cu;
label_32927c:
    // 0x32927c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32927cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329280: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329284: 0xc0ca5d6  jal         func_329758
    ctx->pc = 0x329284u;
    SET_GPR_U32(ctx, 31, 0x32928Cu);
    ctx->pc = 0x329288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329284u;
    // 0x329288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329758u, 0x329284u, 0x32928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32928Cu;
label_32928c:
    // 0x32928c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32928cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329290: 0xc0ca5fa  jal         func_3297E8
    ctx->pc = 0x329290u;
    SET_GPR_U32(ctx, 31, 0x329298u);
    ctx->pc = 0x329294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329290u;
    // 0x329294: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3297E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3297E8u, 0x329290u, 0x329298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329298u;
label_329298:
    // 0x329298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32929c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32929cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3292a0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3292a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3292a4: 0xc0ca618  jal         func_329860
    ctx->pc = 0x3292A4u;
    SET_GPR_U32(ctx, 31, 0x3292ACu);
    ctx->pc = 0x3292A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292A4u;
    // 0x3292a8: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x329860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329860u, 0x3292A4u, 0x3292ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3292ACu;
label_3292ac:
    // 0x3292ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3292acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3292b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3292b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3292b4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3292b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3292b8: 0xc0ca63c  jal         func_3298F0
    ctx->pc = 0x3292B8u;
    SET_GPR_U32(ctx, 31, 0x3292C0u);
    ctx->pc = 0x3292BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292B8u;
    // 0x3292bc: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3298F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3298F0u, 0x3292B8u, 0x3292C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3292C0u;
label_3292c0:
    // 0x3292c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3292c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3292c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3292c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3292c8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3292c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3292cc: 0xc0ca654  jal         func_329950
    ctx->pc = 0x3292CCu;
    SET_GPR_U32(ctx, 31, 0x3292D4u);
    ctx->pc = 0x3292D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292CCu;
    // 0x3292d0: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x329950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329950u, 0x3292CCu, 0x3292D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3292D4u;
label_3292d4:
    // 0x3292d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3292d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3292d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3292d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3292dc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3292dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3292e0: 0xc0ca67c  jal         func_3299F0
    ctx->pc = 0x3292E0u;
    SET_GPR_U32(ctx, 31, 0x3292E8u);
    ctx->pc = 0x3292E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292E0u;
    // 0x3292e4: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3299F0u, 0x3292E0u, 0x3292E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3292E8u;
label_3292e8:
    // 0x3292e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3292e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3292ec: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x3292ecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x3292f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3292f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3292f4: 0xc0ca6a4  jal         func_329A90
    ctx->pc = 0x3292F4u;
    SET_GPR_U32(ctx, 31, 0x3292FCu);
    ctx->pc = 0x3292F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292F4u;
    // 0x3292f8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x329A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329A90u, 0x3292F4u, 0x3292FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3292FCu;
label_3292fc:
    // 0x3292fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3292fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329300: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x329300u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x329304: 0xc0ca6b2  jal         func_329AC8
    ctx->pc = 0x329304u;
    SET_GPR_U32(ctx, 31, 0x32930Cu);
    ctx->pc = 0x329308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329304u;
    // 0x329308: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x329AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329AC8u, 0x329304u, 0x32930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32930Cu;
label_32930c:
    // 0x32930c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329314: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x329314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329318: 0xc0ca6e8  jal         func_329BA0
    ctx->pc = 0x329318u;
    SET_GPR_U32(ctx, 31, 0x329320u);
    ctx->pc = 0x32931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329318u;
    // 0x32931c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329BA0u, 0x329318u, 0x329320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329320u;
label_329320:
    // 0x329320: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x329320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x329324: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x329324u;
    {
        const bool branch_taken_0x329324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329324u;
        // 0x329328: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329324) {
            ctx->pc = 0x329270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329270;
        }
    }
    ctx->pc = 0x32932Cu;
    // 0x32932c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32932cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329330: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x329334: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x329334u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329338: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x329338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32933c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x32933cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x329340: 0x3e00008  jr          $ra
    ctx->pc = 0x329340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329340u;
        // 0x329344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329348u;
}
