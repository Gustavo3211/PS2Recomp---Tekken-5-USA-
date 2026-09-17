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

// Function: sub_0031BB50
// Address: 0x31bb50 - 0x31bbb8
void sub_0031BB50_0x31bb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BB50_0x31bb50");
#endif

    switch (ctx->pc) {
        case 0x31bb80u: goto label_31bb80;
        case 0x31bb98u: goto label_31bb98;
        case 0x31bba4u: goto label_31bba4;
        default: break;
    }

    ctx->pc = 0x31bb50u;

    // 0x31bb50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31bb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31bb54: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31bb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31bb58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31bb58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb5c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31bb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31bb60: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x31bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x31bb64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31BB64u;
    {
        const bool branch_taken_0x31bb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB64u;
        // 0x31bb68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb64) {
            ctx->pc = 0x31BB88u;
            goto label_31bb88;
        }
    }
    ctx->pc = 0x31BB6Cu;
    // 0x31bb6c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31bb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31bb70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31bb70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31bb74: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x31bb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x31bb78: 0xc0c744a  jal         func_31D128
    ctx->pc = 0x31BB78u;
    SET_GPR_U32(ctx, 31, 0x31BB80u);
    ctx->pc = 0x31BB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB78u;
    // 0x31bb7c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D128u, 0x31BB78u, 0x31BB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BB80u;
label_31bb80:
    // 0x31bb80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31BB80u;
    {
        const bool branch_taken_0x31bb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB80u;
        // 0x31bb84: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb80) {
            ctx->pc = 0x31BBA8u;
            goto label_31bba8;
        }
    }
    ctx->pc = 0x31BB88u;
label_31bb88:
    // 0x31bb88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31bb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31bb8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31bb8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31bb90: 0xc0c73aa  jal         func_31CEA8
    ctx->pc = 0x31BB90u;
    SET_GPR_U32(ctx, 31, 0x31BB98u);
    ctx->pc = 0x31BB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB90u;
    // 0x31bb94: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEA8u, 0x31BB90u, 0x31BB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BB98u;
label_31bb98:
    // 0x31bb98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31bb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb9c: 0xc0c73ae  jal         func_31CEB8
    ctx->pc = 0x31BB9Cu;
    SET_GPR_U32(ctx, 31, 0x31BBA4u);
    ctx->pc = 0x31BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB9Cu;
    // 0x31bba0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEB8u, 0x31BB9Cu, 0x31BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BBA4u;
label_31bba4:
    // 0x31bba4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31bba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31bba8:
    // 0x31bba8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31bba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31bbac: 0x3e00008  jr          $ra
    ctx->pc = 0x31BBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBACu;
        // 0x31bbb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BBB4u;
    // 0x31bbb4: 0x0  nop
    ctx->pc = 0x31bbb4u;
    // NOP
    ctx->pc = 0x31bbb8u;
}
