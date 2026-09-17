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

// Function: sub_002A72D0
// Address: 0x2a72d0 - 0x2a7348
void sub_002A72D0_0x2a72d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A72D0_0x2a72d0");
#endif

    switch (ctx->pc) {
        case 0x2a72f8u: goto label_2a72f8;
        case 0x2a7300u: goto label_2a7300;
        case 0x2a7308u: goto label_2a7308;
        case 0x2a7320u: goto label_2a7320;
        case 0x2a7328u: goto label_2a7328;
        case 0x2a7330u: goto label_2a7330;
        default: break;
    }

    ctx->pc = 0x2a72d0u;

    // 0x2a72d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a72d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a72d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a72d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a72d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a72d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a72dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a72dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a72e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a72e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a72e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a72e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a72e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a72e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a72ec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2a72ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2a72f0: 0xc0cb244  jal         func_32C910
    ctx->pc = 0x2A72F0u;
    SET_GPR_U32(ctx, 31, 0x2A72F8u);
    ctx->pc = 0x2A72F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A72F0u;
    // 0x2a72f4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C910u, 0x2A72F0u, 0x2A72F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A72F8u;
label_2a72f8:
    // 0x2a72f8: 0xc0c828a  jal         func_320A28
    ctx->pc = 0x2A72F8u;
    SET_GPR_U32(ctx, 31, 0x2A7300u);
    ctx->pc = 0x2A72FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A72F8u;
    // 0x2a72fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320A28u, 0x2A72F8u, 0x2A7300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7300u;
label_2a7300:
    // 0x2a7300: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x2A7300u;
    SET_GPR_U32(ctx, 31, 0x2A7308u);
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x2A7300u, 0x2A7308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7308u;
label_2a7308:
    // 0x2a7308: 0xda3c0000  lqc2        $vf28, 0x0($s1)
    ctx->pc = 0x2a7308u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a730c: 0xda3d0010  lqc2        $vf29, 0x10($s1)
    ctx->pc = 0x2a730cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2a7310: 0xda3e0020  lqc2        $vf30, 0x20($s1)
    ctx->pc = 0x2a7310u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2a7314: 0xda3f0030  lqc2        $vf31, 0x30($s1)
    ctx->pc = 0x2a7314u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2a7318: 0xc0c8dfe  jal         func_3237F8
    ctx->pc = 0x2A7318u;
    SET_GPR_U32(ctx, 31, 0x2A7320u);
    ctx->pc = 0x2A731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7318u;
    // 0x2a731c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3237F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3237F8u, 0x2A7318u, 0x2A7320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7320u;
label_2a7320:
    // 0x2a7320: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x2A7320u;
    SET_GPR_U32(ctx, 31, 0x2A7328u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x2A7320u, 0x2A7328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7328u;
label_2a7328:
    // 0x2a7328: 0xc0c828a  jal         func_320A28
    ctx->pc = 0x2A7328u;
    SET_GPR_U32(ctx, 31, 0x2A7330u);
    ctx->pc = 0x2A732Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7328u;
    // 0x2a732c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320A28u, 0x2A7328u, 0x2A7330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7330u;
label_2a7330:
    // 0x2a7330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a7330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7334: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a7334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a7338: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a7338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a733c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2a733cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a7340: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7340u;
        // 0x2a7344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7348u;
}
