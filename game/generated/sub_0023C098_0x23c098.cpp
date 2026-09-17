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

// Function: sub_0023C098
// Address: 0x23c098 - 0x23c108
void sub_0023C098_0x23c098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C098_0x23c098");
#endif

    switch (ctx->pc) {
        case 0x23c0e0u: goto label_23c0e0;
        case 0x23c0f8u: goto label_23c0f8;
        default: break;
    }

    ctx->pc = 0x23c098u;

    // 0x23c098: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23c098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23c09c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c09cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c0a0: 0x8c44e110  lw          $a0, -0x1EF0($v0)
    ctx->pc = 0x23c0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3AE110u));
    // 0x23c0a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c0a8: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x23c0a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23c0ac: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x23c0acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23c0b0: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x23C0B0u;
    {
        const bool branch_taken_0x23c0b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x23C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0B0u;
        // 0x23c0b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0b0) {
            ctx->pc = 0x23C0E0u;
            goto label_23c0e0;
        }
    }
    ctx->pc = 0x23C0B8u;
    // 0x23c0b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23c0bc: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23C0BCu;
    {
        const bool branch_taken_0x23c0bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c0bc) {
            ctx->pc = 0x23C0D8u;
            goto label_23c0d8;
        }
    }
    ctx->pc = 0x23C0C4u;
    // 0x23c0c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23c0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23c0c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23c0c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23c0cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23C0CCu;
    {
        const bool branch_taken_0x23c0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c0cc) {
            ctx->pc = 0x23C0E0u;
            goto label_23c0e0;
        }
    }
    ctx->pc = 0x23C0D4u;
    // 0x23c0d4: 0x0  nop
    ctx->pc = 0x23c0d4u;
    // NOP
label_23c0d8:
    // 0x23c0d8: 0xc08f022  jal         func_23C088
    ctx->pc = 0x23C0D8u;
    SET_GPR_U32(ctx, 31, 0x23C0E0u);
    ctx->pc = 0x23C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C0D8u;
    // 0x23c0dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C088u, 0x23C0D8u, 0x23C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C0E0u;
label_23c0e0:
    // 0x23c0e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c0e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c0e4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x23c0e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c0e8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x23C0E8u;
    {
        const bool branch_taken_0x23c0e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0E8u;
        // 0x23c0ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0e8) {
            ctx->pc = 0x23C0FCu;
            goto label_23c0fc;
        }
    }
    ctx->pc = 0x23C0F0u;
    // 0x23c0f0: 0xc08eff4  jal         func_23BFD0
    ctx->pc = 0x23C0F0u;
    SET_GPR_U32(ctx, 31, 0x23C0F8u);
    ctx->pc = 0x23C0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C0F0u;
    // 0x23c0f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BFD0u, 0x23C0F0u, 0x23C0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C0F8u;
label_23c0f8:
    // 0x23c0f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c0fc:
    // 0x23c0fc: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x23c0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23c100: 0x3e00008  jr          $ra
    ctx->pc = 0x23C100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C100u;
        // 0x23c104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C108u;
}
