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

// Function: sub_00321140
// Address: 0x321140 - 0x3211f0
void sub_00321140_0x321140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321140_0x321140");
#endif

    switch (ctx->pc) {
        case 0x321178u: goto label_321178;
        case 0x321184u: goto label_321184;
        case 0x321194u: goto label_321194;
        case 0x3211a4u: goto label_3211a4;
        case 0x3211b4u: goto label_3211b4;
        case 0x3211c4u: goto label_3211c4;
        default: break;
    }

    ctx->pc = 0x321140u;

    // 0x321140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x321140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x321144: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x321144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x321148: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x321148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32114c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x32114cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321150: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x321150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x321154: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x321154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321158: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x321158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x32115c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32115cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321160: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321164: 0xa28024  and         $s0, $a1, $v0
    ctx->pc = 0x321164u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x321168: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x321168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32116c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32116cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x321170: 0xc0ce780  jal         func_339E00
    ctx->pc = 0x321170u;
    SET_GPR_U32(ctx, 31, 0x321178u);
    ctx->pc = 0x321174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321170u;
    // 0x321174: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339E00u, 0x321170u, 0x321178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321178u;
label_321178:
    // 0x321178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32117c: 0xc0cf890  jal         func_33E240
    ctx->pc = 0x32117Cu;
    SET_GPR_U32(ctx, 31, 0x321184u);
    ctx->pc = 0x321180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32117Cu;
    // 0x321180: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E240u, 0x32117Cu, 0x321184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321184u;
label_321184:
    // 0x321184: 0x264409c0  addiu       $a0, $s2, 0x9C0
    ctx->pc = 0x321184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2496));
    // 0x321188: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x321188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32118c: 0xc0ceff4  jal         func_33BFD0
    ctx->pc = 0x32118Cu;
    SET_GPR_U32(ctx, 31, 0x321194u);
    ctx->pc = 0x321190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32118Cu;
    // 0x321190: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BFD0u, 0x32118Cu, 0x321194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321194u;
label_321194:
    // 0x321194: 0x26440a00  addiu       $a0, $s2, 0xA00
    ctx->pc = 0x321194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2560));
    // 0x321198: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x321198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32119c: 0xc0cf0c6  jal         func_33C318
    ctx->pc = 0x32119Cu;
    SET_GPR_U32(ctx, 31, 0x3211A4u);
    ctx->pc = 0x3211A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32119Cu;
    // 0x3211a0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C318u, 0x32119Cu, 0x3211A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3211A4u;
label_3211a4:
    // 0x3211a4: 0x26441280  addiu       $a0, $s2, 0x1280
    ctx->pc = 0x3211a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4736));
    // 0x3211a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3211a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3211ac: 0xc0cf110  jal         func_33C440
    ctx->pc = 0x3211ACu;
    SET_GPR_U32(ctx, 31, 0x3211B4u);
    ctx->pc = 0x3211B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3211ACu;
    // 0x3211b0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C440u, 0x3211ACu, 0x3211B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3211B4u;
label_3211b4:
    // 0x3211b4: 0x264412c0  addiu       $a0, $s2, 0x12C0
    ctx->pc = 0x3211b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4800));
    // 0x3211b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3211b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3211bc: 0xc0cf19c  jal         func_33C670
    ctx->pc = 0x3211BCu;
    SET_GPR_U32(ctx, 31, 0x3211C4u);
    ctx->pc = 0x3211C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3211BCu;
    // 0x3211c0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C670u, 0x3211BCu, 0x3211C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3211C4u;
label_3211c4:
    // 0x3211c4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3211c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3211c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3211c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3211cc: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x3211ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x3211d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3211d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3211d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3211d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3211d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3211d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3211dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3211dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3211e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3211e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3211e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3211E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3211E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3211E4u;
        // 0x3211e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3211E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3211ECu;
    // 0x3211ec: 0x0  nop
    ctx->pc = 0x3211ecu;
    // NOP
    ctx->pc = 0x3211f0u;
}
