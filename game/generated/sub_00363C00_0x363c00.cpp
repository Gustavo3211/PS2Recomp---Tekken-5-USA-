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

// Function: sub_00363C00
// Address: 0x363c00 - 0x363cf0
void sub_00363C00_0x363c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363C00_0x363c00");
#endif

    switch (ctx->pc) {
        case 0x363c34u: goto label_363c34;
        case 0x363c84u: goto label_363c84;
        case 0x363cacu: goto label_363cac;
        default: break;
    }

    ctx->pc = 0x363c00u;

    // 0x363c00: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x363c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x363c04: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x363c04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x363c08: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x363c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x363c0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x363c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x363c10: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x363c10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x363c14: 0x2410001a  addiu       $s0, $zero, 0x1A
    ctx->pc = 0x363c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x363c18: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x363c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x363c1c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x363c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x363c20: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x363C20u;
    {
        const bool branch_taken_0x363c20 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x363C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363C20u;
        // 0x363c24: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363c20) {
            ctx->pc = 0x363C40u;
            goto label_363c40;
        }
    }
    ctx->pc = 0x363C28u;
    // 0x363c28: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x363c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x363c2c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x363C2Cu;
    SET_GPR_U32(ctx, 31, 0x363C34u);
    ctx->pc = 0x363C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363C2Cu;
    // 0x363c30: 0x24847968  addiu       $a0, $a0, 0x7968 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x363C2Cu, 0x363C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363C34u;
label_363c34:
    // 0x363c34: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x363C34u;
    {
        const bool branch_taken_0x363c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363C34u;
        // 0x363c38: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363c34) {
            ctx->pc = 0x363CD8u;
            goto label_363cd8;
        }
    }
    ctx->pc = 0x363C3Cu;
    // 0x363c3c: 0x0  nop
    ctx->pc = 0x363c3cu;
    // NOP
label_363c40:
    // 0x363c40: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x363c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x363c44: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x363c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x363c48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x363c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x363c4c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x363c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x363c50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x363c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363c54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x363c54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x363c58: 0x0  nop
    ctx->pc = 0x363c58u;
    // NOP
    // 0x363c5c: 0x0  nop
    ctx->pc = 0x363c5cu;
    // NOP
    // 0x363c60: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x363c60u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x363c64: 0x0  nop
    ctx->pc = 0x363c64u;
    // NOP
    // 0x363c68: 0x0  nop
    ctx->pc = 0x363c68u;
    // NOP
    // 0x363c6c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x363c6cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x363c70: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x363c70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363c74: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x363C74u;
    {
        const bool branch_taken_0x363c74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x363c74) {
            ctx->pc = 0x363C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363C74u;
            // 0x363c78: 0x46140042  mul.s       $f1, $f0, $f20 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x363C88u;
            goto label_363c88;
        }
    }
    ctx->pc = 0x363C7Cu;
    // 0x363c7c: 0xc04754c  jal         func_11D530
    ctx->pc = 0x363C7Cu;
    SET_GPR_U32(ctx, 31, 0x363C84u);
    ctx->pc = 0x11D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D530u, 0x363C7Cu, 0x363C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363C84u;
label_363c84:
    // 0x363c84: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x363c84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_363c88:
    // 0x363c88: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x363c88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x363c8c: 0xc4a0c0e0  lwc1        $f0, -0x3F20($a1)
    ctx->pc = 0x363c8cu;
    { uint32_t bits = FAST_READ32(0x45C0E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363c90: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x363c90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x363c94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x363c94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363c98: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x363C98u;
    {
        const bool branch_taken_0x363c98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x363C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363C98u;
        // 0x363c9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363c98) {
            ctx->pc = 0x363CA8u;
            goto label_363ca8;
        }
    }
    ctx->pc = 0x363CA0u;
    // 0x363ca0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x363CA0u;
    {
        const bool branch_taken_0x363ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363CA0u;
        // 0x363ca4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363ca0) {
            ctx->pc = 0x363CD4u;
            goto label_363cd4;
        }
    }
    ctx->pc = 0x363CA8u;
label_363ca8:
    // 0x363ca8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x363ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_363cac:
    // 0x363cac: 0x2882001b  slti        $v0, $a0, 0x1B
    ctx->pc = 0x363cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x363cb0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x363CB0u;
    {
        const bool branch_taken_0x363cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x363CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363CB0u;
        // 0x363cb4: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363cb0) {
            ctx->pc = 0x363CD4u;
            goto label_363cd4;
        }
    }
    ctx->pc = 0x363CB8u;
    // 0x363cb8: 0x24a2c0e0  addiu       $v0, $a1, -0x3F20
    ctx->pc = 0x363cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951136));
    // 0x363cbc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x363cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x363cc0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x363cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363cc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x363cc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363cc8: 0x4502fff8  bc1fl       . + 4 + (-0x8 << 2)
    ctx->pc = 0x363CC8u;
    {
        const bool branch_taken_0x363cc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x363cc8) {
            ctx->pc = 0x363CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363CC8u;
            // 0x363ccc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363CACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363cac;
        }
    }
    ctx->pc = 0x363CD0u;
    // 0x363cd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x363cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_363cd4:
    // 0x363cd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x363cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_363cd8:
    // 0x363cd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x363cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363cdc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x363cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x363ce0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x363ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x363ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x363CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363CE4u;
        // 0x363ce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363CECu;
    // 0x363cec: 0x0  nop
    ctx->pc = 0x363cecu;
    // NOP
    ctx->pc = 0x363cf0u;
}
