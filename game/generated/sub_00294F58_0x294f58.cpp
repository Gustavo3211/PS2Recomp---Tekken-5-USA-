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

// Function: sub_00294F58
// Address: 0x294f58 - 0x294fc0
void sub_00294F58_0x294f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294F58_0x294f58");
#endif

    ctx->pc = 0x294f58u;

    // 0x294f58: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x294f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x294f5c: 0x2ca50005  sltiu       $a1, $a1, 0x5
    ctx->pc = 0x294f5cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x294f60: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x294F60u;
    {
        const bool branch_taken_0x294f60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x294F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F60u;
        // 0x294f64: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f60) {
            ctx->pc = 0x294FB4u;
            goto label_294fb4;
        }
    }
    ctx->pc = 0x294F68u;
    // 0x294f68: 0x8c420148  lw          $v0, 0x148($v0)
    ctx->pc = 0x294f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x294f6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x294F6Cu;
    {
        const bool branch_taken_0x294f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F6Cu;
        // 0x294f70: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f6c) {
            ctx->pc = 0x294F80u;
            goto label_294f80;
        }
    }
    ctx->pc = 0x294F74u;
    // 0x294f74: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x294f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x294f78: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x294f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x294f7c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x294f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_294f80:
    // 0x294f80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x294f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x294f84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x294f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294f88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x294f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294f8c: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x294f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x294f90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x294f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x294f94: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x294f94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x294f98: 0x90640080  lbu         $a0, 0x80($v1)
    ctx->pc = 0x294f98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x294f9c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x294F9Cu;
    {
        const bool branch_taken_0x294f9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x294FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F9Cu;
        // 0x294fa0: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f9c) {
            ctx->pc = 0x294FB0u;
            goto label_294fb0;
        }
    }
    ctx->pc = 0x294FA4u;
    // 0x294fa4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x294fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x294fa8: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x294FA8u;
    {
        const bool branch_taken_0x294fa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x294fa8) {
            ctx->pc = 0x294FB4u;
            goto label_294fb4;
        }
    }
    ctx->pc = 0x294FB0u;
label_294fb0:
    // 0x294fb0: 0xe46000cc  swc1        $f0, 0xCC($v1)
    ctx->pc = 0x294fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 204), bits); }
label_294fb4:
    // 0x294fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x294FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294FBCu;
    // 0x294fbc: 0x0  nop
    ctx->pc = 0x294fbcu;
    // NOP
    ctx->pc = 0x294fc0u;
}
