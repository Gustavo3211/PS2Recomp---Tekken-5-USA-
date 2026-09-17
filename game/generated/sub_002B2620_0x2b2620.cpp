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

// Function: sub_002B2620
// Address: 0x2b2620 - 0x2b2680
void sub_002B2620_0x2b2620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2620_0x2b2620");
#endif

    switch (ctx->pc) {
        case 0x2b2638u: goto label_2b2638;
        case 0x2b2644u: goto label_2b2644;
        case 0x2b2650u: goto label_2b2650;
        case 0x2b265cu: goto label_2b265c;
        case 0x2b2668u: goto label_2b2668;
        default: break;
    }

    ctx->pc = 0x2b2620u;

    // 0x2b2620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b2620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b2624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2628: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b262c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b262cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b2630: 0xc0aa772  jal         func_2A9DC8
    ctx->pc = 0x2B2630u;
    SET_GPR_U32(ctx, 31, 0x2B2638u);
    ctx->pc = 0x2B2634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2630u;
    // 0x2b2634: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC8u, 0x2B2630u, 0x2B2638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2638u;
label_2b2638:
    // 0x2b2638: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2b2638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b263c: 0xc0aa772  jal         func_2A9DC8
    ctx->pc = 0x2B263Cu;
    SET_GPR_U32(ctx, 31, 0x2B2644u);
    ctx->pc = 0x2B2640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B263Cu;
    // 0x2b2640: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC8u, 0x2B263Cu, 0x2B2644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2644u;
label_2b2644:
    // 0x2b2644: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2b2644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b2648: 0xc0aa740  jal         func_2A9D00
    ctx->pc = 0x2B2648u;
    SET_GPR_U32(ctx, 31, 0x2B2650u);
    ctx->pc = 0x2B264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2648u;
    // 0x2b264c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9D00u, 0x2B2648u, 0x2B2650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2650u;
label_2b2650:
    // 0x2b2650: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x2b2650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b2654: 0xc0aa758  jal         func_2A9D60
    ctx->pc = 0x2B2654u;
    SET_GPR_U32(ctx, 31, 0x2B265Cu);
    ctx->pc = 0x2B2658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2654u;
    // 0x2b2658: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9D60u, 0x2B2654u, 0x2B265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B265Cu;
label_2b265c:
    // 0x2b265c: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x2b265cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b2660: 0xc0aa758  jal         func_2A9D60
    ctx->pc = 0x2B2660u;
    SET_GPR_U32(ctx, 31, 0x2B2668u);
    ctx->pc = 0x2B2664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2660u;
    // 0x2b2664: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9D60u, 0x2B2660u, 0x2B2668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2668u;
label_2b2668:
    // 0x2b2668: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2b2668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2b266c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b266cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2674: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2674u;
        // 0x2b2678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B267Cu;
    // 0x2b267c: 0x0  nop
    ctx->pc = 0x2b267cu;
    // NOP
    ctx->pc = 0x2b2680u;
}
