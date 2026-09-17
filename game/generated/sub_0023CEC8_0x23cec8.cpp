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

// Function: sub_0023CEC8
// Address: 0x23cec8 - 0x23cf68
void sub_0023CEC8_0x23cec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CEC8_0x23cec8");
#endif

    switch (ctx->pc) {
        case 0x23cf08u: goto label_23cf08;
        default: break;
    }

    ctx->pc = 0x23cec8u;

    // 0x23cec8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23cecc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ceccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23ced0: 0x8c4388ac  lw          $v1, -0x7754($v0)
    ctx->pc = 0x23ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x23ced4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23ced4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ced8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ced8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23cedc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23cedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cee0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CEE0u;
    {
        const bool branch_taken_0x23cee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEE0u;
        // 0x23cee4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cee0) {
            ctx->pc = 0x23CEF8u;
            goto label_23cef8;
        }
    }
    ctx->pc = 0x23CEE8u;
    // 0x23cee8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23ceec: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x23ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x23cef0: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x23cef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x23cef4: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x23cef4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23cef8:
    // 0x23cef8: 0x50a00017  beql        $a1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x23CEF8u;
    {
        const bool branch_taken_0x23cef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cef8) {
            ctx->pc = 0x23CEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CEF8u;
            // 0x23cefc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CF58u;
            goto label_23cf58;
        }
    }
    ctx->pc = 0x23CF00u;
    // 0x23cf00: 0xc08f352  jal         func_23CD48
    ctx->pc = 0x23CF00u;
    SET_GPR_U32(ctx, 31, 0x23CF08u);
    ctx->pc = 0x23CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CD48u, 0x23CF00u, 0x23CF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF08u;
label_23cf08:
    // 0x23cf08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23cf08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23cf0c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23cf0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23cf10: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23CF10u;
    {
        const bool branch_taken_0x23cf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF10u;
        // 0x23cf14: 0x2604085c  addiu       $a0, $s0, 0x85C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf10) {
            ctx->pc = 0x23CF54u;
            goto label_23cf54;
        }
    }
    ctx->pc = 0x23CF18u;
    // 0x23cf18: 0x9603003c  lhu         $v1, 0x3C($s0)
    ctx->pc = 0x23cf18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x23cf1c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x23cf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23cf20: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x23cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23cf24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23cf28: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x23cf28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x23cf2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cf30: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x23cf30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x23cf34: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x23cf34u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x23cf38: 0xc421f384  lwc1        $f1, -0xC7C($at)
    ctx->pc = 0x23cf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23cf3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23cf3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23cf40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23cf40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23cf44: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x23CF44u;
    {
        const bool branch_taken_0x23cf44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF44u;
        // 0x23cf48: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf44) {
            ctx->pc = 0x23CF54u;
            goto label_23cf54;
        }
    }
    ctx->pc = 0x23CF4Cu;
    // 0x23cf4c: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x23cf4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x23cf50: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x23cf50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_23cf54:
    // 0x23cf54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23cf54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23cf58:
    // 0x23cf58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23cf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23cf5c: 0x3e00008  jr          $ra
    ctx->pc = 0x23CF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF5Cu;
        // 0x23cf60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CF64u;
    // 0x23cf64: 0x0  nop
    ctx->pc = 0x23cf64u;
    // NOP
    ctx->pc = 0x23cf68u;
}
