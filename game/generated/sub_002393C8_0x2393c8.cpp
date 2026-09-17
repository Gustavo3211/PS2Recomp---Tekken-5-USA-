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

// Function: sub_002393C8
// Address: 0x2393c8 - 0x239420
void sub_002393C8_0x2393c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002393C8_0x2393c8");
#endif

    ctx->pc = 0x2393c8u;

    // 0x2393c8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2393c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2393cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2393ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2393d0: 0x2484ff80  addiu       $a0, $a0, -0x80
    ctx->pc = 0x2393d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x2393d4: 0x28820031  slti        $v0, $a0, 0x31
    ctx->pc = 0x2393d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x2393d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2393D8u;
    {
        const bool branch_taken_0x2393d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2393DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393D8u;
        // 0x2393dc: 0x2883ffd0  slti        $v1, $a0, -0x30 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967248) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393d8) {
            ctx->pc = 0x2393F8u;
            goto label_2393f8;
        }
    }
    ctx->pc = 0x2393E0u;
    // 0x2393e0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2393e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2393e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2393e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2393e8: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x2393e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x2393ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2393ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2393f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2393F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2393F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393F0u;
        // 0x2393f4: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2393F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2393F8u;
label_2393f8:
    // 0x2393f8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2393F8u;
    {
        const bool branch_taken_0x2393f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2393f8) {
            ctx->pc = 0x239414u;
            goto label_239414;
        }
    }
    ctx->pc = 0x239400u;
    // 0x239400: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x239400u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x239404: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x239404u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x239408: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x239408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x23940c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23940cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239410: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x239410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_239414:
    // 0x239414: 0x3e00008  jr          $ra
    ctx->pc = 0x239414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23941Cu;
    // 0x23941c: 0x0  nop
    ctx->pc = 0x23941cu;
    // NOP
    ctx->pc = 0x239420u;
}
