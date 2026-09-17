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

// Function: sub_00325D78
// Address: 0x325d78 - 0x325de0
void sub_00325D78_0x325d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325D78_0x325d78");
#endif

    ctx->pc = 0x325d78u;

    // 0x325d78: 0x30c28000  andi        $v0, $a2, 0x8000
    ctx->pc = 0x325d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x325d7c: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x325d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x325d80: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x325d80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x325d84: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x325d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x325d88: 0x30678000  andi        $a3, $v1, 0x8000
    ctx->pc = 0x325d88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x325d8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x325D8Cu;
    {
        const bool branch_taken_0x325d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D8Cu;
        // 0x325d90: 0x30c63fff  andi        $a2, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325d8c) {
            ctx->pc = 0x325D9Cu;
            goto label_325d9c;
        }
    }
    ctx->pc = 0x325D94u;
    // 0x325d94: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x325d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x325d98: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x325d98u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_325d9c:
    // 0x325d9c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x325d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x325da0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x325da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x325da4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x325da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x325da8: 0x8c630340  lw          $v1, 0x340($v1)
    ctx->pc = 0x325da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x325dac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x325dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x325db0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x325db0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325db4: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x325DB4u;
    {
        const bool branch_taken_0x325db4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x325DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325DB4u;
        // 0x325db8: 0xe4a00014  swc1        $f0, 0x14($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x325db4) {
            ctx->pc = 0x325DD0u;
            goto label_325dd0;
        }
    }
    ctx->pc = 0x325DBCu;
    // 0x325dbc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x325dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x325dc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x325dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x325DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325DC4u;
        // 0x325dc8: 0xe4a00010  swc1        $f0, 0x10($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325DCCu;
    // 0x325dcc: 0x0  nop
    ctx->pc = 0x325dccu;
    // NOP
label_325dd0:
    // 0x325dd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x325dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x325dd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x325dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x325DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325DD8u;
        // 0x325ddc: 0xe4a00010  swc1        $f0, 0x10($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325DE0u;
}
