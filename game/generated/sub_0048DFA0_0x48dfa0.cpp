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

// Function: sub_0048DFA0
// Address: 0x48dfa0 - 0x48e010
void sub_0048DFA0_0x48dfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DFA0_0x48dfa0");
#endif

    switch (ctx->pc) {
        case 0x48dfb8u: goto label_48dfb8;
        case 0x48dfc4u: goto label_48dfc4;
        case 0x48dfd0u: goto label_48dfd0;
        case 0x48dfdcu: goto label_48dfdc;
        case 0x48dfe4u: goto label_48dfe4;
        case 0x48dfecu: goto label_48dfec;
        case 0x48dff4u: goto label_48dff4;
        case 0x48dffcu: goto label_48dffc;
        case 0x48e004u: goto label_48e004;
        default: break;
    }

    ctx->pc = 0x48dfa0u;

    // 0x48dfa0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48dfa4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48dfa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48dfa8: 0x8445fa02  lh          $a1, -0x5FE($v0)
    ctx->pc = 0x48dfa8u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x72FA02u));
    // 0x48dfac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48dfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48dfb0: 0xc13e4ec  jal         func_4F93B0
    ctx->pc = 0x48DFB0u;
    SET_GPR_U32(ctx, 31, 0x48DFB8u);
    ctx->pc = 0x48DFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DFB0u;
    // 0x48dfb4: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F93B0u, 0x48DFB0u, 0x48DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DFB8u;
label_48dfb8:
    // 0x48dfb8: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x48dfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x48dfbc: 0xc13e4ec  jal         func_4F93B0
    ctx->pc = 0x48DFBCu;
    SET_GPR_U32(ctx, 31, 0x48DFC4u);
    ctx->pc = 0x48DFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DFBCu;
    // 0x48dfc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F93B0u, 0x48DFBCu, 0x48DFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DFC4u;
label_48dfc4:
    // 0x48dfc4: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x48dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x48dfc8: 0xc13e4ec  jal         func_4F93B0
    ctx->pc = 0x48DFC8u;
    SET_GPR_U32(ctx, 31, 0x48DFD0u);
    ctx->pc = 0x48DFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DFC8u;
    // 0x48dfcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F93B0u, 0x48DFC8u, 0x48DFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DFD0u;
label_48dfd0:
    // 0x48dfd0: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x48dfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x48dfd4: 0xc13e4ec  jal         func_4F93B0
    ctx->pc = 0x48DFD4u;
    SET_GPR_U32(ctx, 31, 0x48DFDCu);
    ctx->pc = 0x48DFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DFD4u;
    // 0x48dfd8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F93B0u, 0x48DFD4u, 0x48DFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DFDCu;
label_48dfdc:
    // 0x48dfdc: 0xc123822  jal         func_48E088
    ctx->pc = 0x48DFDCu;
    SET_GPR_U32(ctx, 31, 0x48DFE4u);
    ctx->pc = 0x48E088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E088u, 0x48DFDCu, 0x48DFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DFE4u;
label_48dfe4:
    // 0x48dfe4: 0xc123832  jal         func_48E0C8
    ctx->pc = 0x48DFE4u;
    SET_GPR_U32(ctx, 31, 0x48DFECu);
    ctx->pc = 0x48E0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E0C8u, 0x48DFE4u, 0x48DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DFECu;
label_48dfec:
    // 0x48dfec: 0xc123842  jal         func_48E108
    ctx->pc = 0x48DFECu;
    SET_GPR_U32(ctx, 31, 0x48DFF4u);
    ctx->pc = 0x48E108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E108u, 0x48DFECu, 0x48DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DFF4u;
label_48dff4:
    // 0x48dff4: 0xc123852  jal         func_48E148
    ctx->pc = 0x48DFF4u;
    SET_GPR_U32(ctx, 31, 0x48DFFCu);
    ctx->pc = 0x48E148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E148u, 0x48DFF4u, 0x48DFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DFFCu;
label_48dffc:
    // 0x48dffc: 0xc12387a  jal         func_48E1E8
    ctx->pc = 0x48DFFCu;
    SET_GPR_U32(ctx, 31, 0x48E004u);
    ctx->pc = 0x48E1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E1E8u, 0x48DFFCu, 0x48E004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E004u;
label_48e004:
    // 0x48e004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e008: 0x8123862  j           func_48E188
    ctx->pc = 0x48E008u;
    ctx->pc = 0x48E00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E008u;
    // 0x48e00c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E188u, 0x48E008u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48E010u;
}
