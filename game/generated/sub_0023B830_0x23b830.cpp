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

// Function: sub_0023B830
// Address: 0x23b830 - 0x23b8c0
void sub_0023B830_0x23b830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B830_0x23b830");
#endif

    ctx->pc = 0x23b830u;

    // 0x23b830: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23b830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23b834: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23b834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b838: 0x8c4388ac  lw          $v1, -0x7754($v0)
    ctx->pc = 0x23b838u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x23b83c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23b83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b840: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B840u;
    {
        const bool branch_taken_0x23b840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B840u;
        // 0x23b844: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b840) {
            ctx->pc = 0x23B858u;
            goto label_23b858;
        }
    }
    ctx->pc = 0x23B848u;
    // 0x23b848: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23b848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23b84c: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x23b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x23b850: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x23b850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x23b854: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x23b854u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_23b858:
    // 0x23b858: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B858u;
    {
        const bool branch_taken_0x23b858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b858) {
            ctx->pc = 0x23B868u;
            goto label_23b868;
        }
    }
    ctx->pc = 0x23B860u;
    // 0x23b860: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x23b860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23b864: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x23b864u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23b868:
    // 0x23b868: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x23B868u;
    {
        const bool branch_taken_0x23b868 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b868) {
            ctx->pc = 0x23B8B4u;
            goto label_23b8b4;
        }
    }
    ctx->pc = 0x23B870u;
    // 0x23b870: 0xc4a00088  lwc1        $f0, 0x88($a1)
    ctx->pc = 0x23b870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b874: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23b874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23b878: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23b878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23b87c: 0xc4a2008c  lwc1        $f2, 0x8C($a1)
    ctx->pc = 0x23b87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23b880: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23b880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23b884: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x23b884u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b888: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x23B888u;
    {
        const bool branch_taken_0x23b888 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23B88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B888u;
        // 0x23b88c: 0xe4a00088  swc1        $f0, 0x88($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b888) {
            ctx->pc = 0x23B8B4u;
            goto label_23b8b4;
        }
    }
    ctx->pc = 0x23B890u;
    // 0x23b890: 0xaca00088  sw          $zero, 0x88($a1)
    ctx->pc = 0x23b890u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
    // 0x23b894: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23b894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b898: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23b898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b89c: 0x90640010  lbu         $a0, 0x10($v1)
    ctx->pc = 0x23b89cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x23b8a0: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B8A0u;
    {
        const bool branch_taken_0x23b8a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x23B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8A0u;
        // 0x23b8a4: 0x24a30014  addiu       $v1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b8a0) {
            ctx->pc = 0x23B8B4u;
            goto label_23b8b4;
        }
    }
    ctx->pc = 0x23B8A8u;
    // 0x23b8a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23b8ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23b8b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_23b8b4:
    // 0x23b8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x23B8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B8BCu;
    // 0x23b8bc: 0x0  nop
    ctx->pc = 0x23b8bcu;
    // NOP
    ctx->pc = 0x23b8c0u;
}
