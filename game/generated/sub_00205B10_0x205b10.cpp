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

// Function: sub_00205B10
// Address: 0x205b10 - 0x205b98
void sub_00205B10_0x205b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205B10_0x205b10");
#endif

    switch (ctx->pc) {
        case 0x205b30u: goto label_205b30;
        default: break;
    }

    ctx->pc = 0x205b10u;

    // 0x205b10: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x205b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x205b14: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x205b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205b18: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x205b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x205b1c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x205b1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205b20: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x205b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x205b24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x205b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205b28: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x205b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x205b2c: 0x0  nop
    ctx->pc = 0x205b2cu;
    // NOP
label_205b30:
    // 0x205b30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x205b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x205b34: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x205b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x205b38: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x205b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x205b3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x205b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x205b40: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x205b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x205b44: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x205b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x205b48: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x205b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205b4c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x205b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x205b50: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x205b50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205b54: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x205b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205b58: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x205b58u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x205b5c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x205b5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x205b60: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x205b60u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x205b64: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x205b64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x205b68: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x205b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x205b6c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x205b6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x205b70: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x205b70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x205b74: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x205b74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205b78: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x205B78u;
    {
        const bool branch_taken_0x205b78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x205B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B78u;
        // 0x205b7c: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b78) {
            ctx->pc = 0x205B88u;
            goto label_205b88;
        }
    }
    ctx->pc = 0x205B80u;
    // 0x205b80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x205B80u;
    {
        const bool branch_taken_0x205b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B80u;
        // 0x205b84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b80) {
            ctx->pc = 0x205B90u;
            goto label_205b90;
        }
    }
    ctx->pc = 0x205B88u;
label_205b88:
    // 0x205b88: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x205B88u;
    {
        const bool branch_taken_0x205b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B88u;
        // 0x205b8c: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b88) {
            ctx->pc = 0x205B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205b30;
        }
    }
    ctx->pc = 0x205B90u;
label_205b90:
    // 0x205b90: 0x3e00008  jr          $ra
    ctx->pc = 0x205B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B90u;
        // 0x205b94: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205B98u;
}
