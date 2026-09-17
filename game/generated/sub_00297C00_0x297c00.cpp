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

// Function: sub_00297C00
// Address: 0x297c00 - 0x297c98
void sub_00297C00_0x297c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297C00_0x297c00");
#endif

    switch (ctx->pc) {
        case 0x297c30u: goto label_297c30;
        default: break;
    }

    ctx->pc = 0x297c00u;

    // 0x297c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297c04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297c08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c0c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x297c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x297c10: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x297c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x297c14: 0x5060001c  beql        $v1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x297C14u;
    {
        const bool branch_taken_0x297c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297c14) {
            ctx->pc = 0x297C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297C14u;
            // 0x297c18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297C88u;
            goto label_297c88;
        }
    }
    ctx->pc = 0x297C1Cu;
    // 0x297c1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297c20: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x297C20u;
    {
        const bool branch_taken_0x297c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x297c20) {
            ctx->pc = 0x297C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297C20u;
            // 0x297c24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297C88u;
            goto label_297c88;
        }
    }
    ctx->pc = 0x297C28u;
    // 0x297c28: 0xc0a5e46  jal         func_297918
    ctx->pc = 0x297C28u;
    SET_GPR_U32(ctx, 31, 0x297C30u);
    ctx->pc = 0x297918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297918u, 0x297C28u, 0x297C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C30u;
label_297c30:
    // 0x297c30: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x297c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x297c34: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x297c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x297c38: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x297c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297c3c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x297c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297c40: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x297c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x297c44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x297c44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x297c48: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x297c48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297c4c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x297C4Cu;
    {
        const bool branch_taken_0x297c4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x297C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C4Cu;
        // 0x297c50: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c4c) {
            ctx->pc = 0x297C58u;
            goto label_297c58;
        }
    }
    ctx->pc = 0x297C54u;
    // 0x297c54: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x297c54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_297c58:
    // 0x297c58: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x297c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297c5c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x297c5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297c60: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x297C60u;
    {
        const bool branch_taken_0x297c60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x297c60) {
            ctx->pc = 0x297C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297C60u;
            // 0x297c64: 0xe6030008  swc1        $f3, 0x8($s0) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x297C68u;
            goto label_297c68;
        }
    }
    ctx->pc = 0x297C68u;
label_297c68:
    // 0x297c68: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x297c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x297c6c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x297c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x297c70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x297c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x297c74: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x297c74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x297c78: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x297C78u;
    {
        const bool branch_taken_0x297c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x297C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C78u;
        // 0x297c7c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c78) {
            ctx->pc = 0x297C84u;
            goto label_297c84;
        }
    }
    ctx->pc = 0x297C80u;
    // 0x297c80: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x297c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_297c84:
    // 0x297c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_297c88:
    // 0x297c88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x297c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x297c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x297C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C8Cu;
        // 0x297c90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297C94u;
    // 0x297c94: 0x0  nop
    ctx->pc = 0x297c94u;
    // NOP
    ctx->pc = 0x297c98u;
}
