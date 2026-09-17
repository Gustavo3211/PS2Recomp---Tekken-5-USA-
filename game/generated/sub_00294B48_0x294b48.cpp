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

// Function: sub_00294B48
// Address: 0x294b48 - 0x294bc0
void sub_00294B48_0x294b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294B48_0x294b48");
#endif

    ctx->pc = 0x294b48u;

    // 0x294b48: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x294b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x294b4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x294b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294b50: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x294b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x294b54: 0x90a60080  lbu         $a2, 0x80($a1)
    ctx->pc = 0x294b54u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x294b58: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x294B58u;
    {
        const bool branch_taken_0x294b58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x294B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B58u;
        // 0x294b5c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b58) {
            ctx->pc = 0x294B68u;
            goto label_294b68;
        }
    }
    ctx->pc = 0x294B60u;
    // 0x294b60: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x294B60u;
    {
        const bool branch_taken_0x294b60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x294b60) {
            ctx->pc = 0x294B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294B60u;
            // 0x294b64: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294B74u;
            goto label_294b74;
        }
    }
    ctx->pc = 0x294B68u;
label_294b68:
    // 0x294b68: 0xe4ac00d0  swc1        $f12, 0xD0($a1)
    ctx->pc = 0x294b68u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 208), bits); }
    // 0x294b6c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x294b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x294b70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x294b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_294b74:
    // 0x294b74: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x294b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x294b78: 0x90a60080  lbu         $a2, 0x80($a1)
    ctx->pc = 0x294b78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x294b7c: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x294B7Cu;
    {
        const bool branch_taken_0x294b7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x294B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B7Cu;
        // 0x294b80: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b7c) {
            ctx->pc = 0x294B8Cu;
            goto label_294b8c;
        }
    }
    ctx->pc = 0x294B84u;
    // 0x294b84: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x294B84u;
    {
        const bool branch_taken_0x294b84 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x294b84) {
            ctx->pc = 0x294B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294B84u;
            // 0x294b88: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294B94u;
            goto label_294b94;
        }
    }
    ctx->pc = 0x294B8Cu;
label_294b8c:
    // 0x294b8c: 0xe4ac00d0  swc1        $f12, 0xD0($a1)
    ctx->pc = 0x294b8cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 208), bits); }
    // 0x294b90: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x294b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_294b94:
    // 0x294b94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x294b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294b98: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x294b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x294b9c: 0x90850080  lbu         $a1, 0x80($a0)
    ctx->pc = 0x294b9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x294ba0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x294BA0u;
    {
        const bool branch_taken_0x294ba0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x294BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BA0u;
        // 0x294ba4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ba0) {
            ctx->pc = 0x294BB0u;
            goto label_294bb0;
        }
    }
    ctx->pc = 0x294BA8u;
    // 0x294ba8: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x294BA8u;
    {
        const bool branch_taken_0x294ba8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x294ba8) {
            ctx->pc = 0x294BB4u;
            goto label_294bb4;
        }
    }
    ctx->pc = 0x294BB0u;
label_294bb0:
    // 0x294bb0: 0xe48c00d0  swc1        $f12, 0xD0($a0)
    ctx->pc = 0x294bb0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
label_294bb4:
    // 0x294bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x294BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294BBCu;
    // 0x294bbc: 0x0  nop
    ctx->pc = 0x294bbcu;
    // NOP
    ctx->pc = 0x294bc0u;
}
