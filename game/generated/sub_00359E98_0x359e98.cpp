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

// Function: sub_00359E98
// Address: 0x359e98 - 0x359f18
void sub_00359E98_0x359e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359E98_0x359e98");
#endif

    switch (ctx->pc) {
        case 0x359eacu: goto label_359eac;
        case 0x359ec8u: goto label_359ec8;
        case 0x359ed0u: goto label_359ed0;
        case 0x359ee8u: goto label_359ee8;
        case 0x359f00u: goto label_359f00;
        default: break;
    }

    ctx->pc = 0x359e98u;

    // 0x359e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359e9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359ea0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x359ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x359ea4: 0xc0d6b4e  jal         func_35AD38
    ctx->pc = 0x359EA4u;
    SET_GPR_U32(ctx, 31, 0x359EACu);
    ctx->pc = 0x359EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359EA4u;
    // 0x359ea8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AD38u, 0x359EA4u, 0x359EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359EACu;
label_359eac:
    // 0x359eac: 0x8f82c7ac  lw          $v0, -0x3854($gp)
    ctx->pc = 0x359eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x359eb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x359EB0u;
    {
        const bool branch_taken_0x359eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359EB0u;
        // 0x359eb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359eb0) {
            ctx->pc = 0x359EC8u;
            goto label_359ec8;
        }
    }
    ctx->pc = 0x359EB8u;
    // 0x359eb8: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x359eb8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x359ebc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x359ebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x359ec0: 0xc0d99f2  jal         func_3667C8
    ctx->pc = 0x359EC0u;
    SET_GPR_U32(ctx, 31, 0x359EC8u);
    ctx->pc = 0x3667C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3667C8u, 0x359EC0u, 0x359EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359EC8u;
label_359ec8:
    // 0x359ec8: 0xc0d6a96  jal         func_35AA58
    ctx->pc = 0x359EC8u;
    SET_GPR_U32(ctx, 31, 0x359ED0u);
    ctx->pc = 0x35AA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA58u, 0x359EC8u, 0x359ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359ED0u;
label_359ed0:
    // 0x359ed0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359ed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359ed8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x359ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359edc: 0x3e00008  jr          $ra
    ctx->pc = 0x359EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359EDCu;
        // 0x359ee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359EE4u;
    // 0x359ee4: 0x0  nop
    ctx->pc = 0x359ee4u;
    // NOP
label_359ee8:
    // 0x359ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359eec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359ef0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359ef4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x359ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x359ef8: 0xc0d6724  jal         func_359C90
    ctx->pc = 0x359EF8u;
    SET_GPR_U32(ctx, 31, 0x359F00u);
    ctx->pc = 0x359EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359EF8u;
    // 0x359efc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359C90u, 0x359EF8u, 0x359F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F00u;
label_359f00:
    // 0x359f00: 0x8f84c7ac  lw          $a0, -0x3854($gp)
    ctx->pc = 0x359f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x359f04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x359f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359f08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359f08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359f0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x359f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359f10: 0x80d9b82  j           func_366E08
    ctx->pc = 0x359F10u;
    ctx->pc = 0x359F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359F10u;
    // 0x359f14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366E08u, 0x359F10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359F18u;
}
