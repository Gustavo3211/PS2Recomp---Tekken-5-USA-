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

// Function: sub_00200E78
// Address: 0x200e78 - 0x200ed0
void sub_00200E78_0x200e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200E78_0x200e78");
#endif

    ctx->pc = 0x200e78u;

    // 0x200e78: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x200e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x200e7c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x200E7Cu;
    {
        const bool branch_taken_0x200e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200e7c) {
            ctx->pc = 0x200EC8u;
            goto label_200ec8;
        }
    }
    ctx->pc = 0x200E84u;
    // 0x200e84: 0x9082019f  lbu         $v0, 0x19F($a0)
    ctx->pc = 0x200e84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 415)));
    // 0x200e88: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x200E88u;
    {
        const bool branch_taken_0x200e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E88u;
        // 0x200e8c: 0x24820820  addiu       $v0, $a0, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e88) {
            ctx->pc = 0x200EC8u;
            goto label_200ec8;
        }
    }
    ctx->pc = 0x200E90u;
    // 0x200e90: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x200e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x200e94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200e98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x200e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x200e9c: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x200e9cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x200ea0: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x200ea0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200ea4: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x200ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x200ea8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x200EA8u;
    {
        const bool branch_taken_0x200ea8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x200EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EA8u;
        // 0x200eac: 0xa4400004  sh          $zero, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ea8) {
            ctx->pc = 0x200EB8u;
            goto label_200eb8;
        }
    }
    ctx->pc = 0x200EB0u;
    // 0x200eb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x200EB0u;
    {
        const bool branch_taken_0x200eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EB0u;
        // 0x200eb4: 0xa48302c6  sh          $v1, 0x2C6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 710), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200eb0) {
            ctx->pc = 0x200EC0u;
            goto label_200ec0;
        }
    }
    ctx->pc = 0x200EB8u;
label_200eb8:
    // 0x200eb8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x200eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x200ebc: 0xa48202c6  sh          $v0, 0x2C6($a0)
    ctx->pc = 0x200ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 710), (uint16_t)GPR_U32(ctx, 2));
label_200ec0:
    // 0x200ec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200ec4: 0xa082019f  sb          $v0, 0x19F($a0)
    ctx->pc = 0x200ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 415), (uint8_t)GPR_U32(ctx, 2));
label_200ec8:
    // 0x200ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x200EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200ED0u;
}
