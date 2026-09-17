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

// Function: sub_001F31C0
// Address: 0x1f31c0 - 0x1f3248
void sub_001F31C0_0x1f31c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F31C0_0x1f31c0");
#endif

    switch (ctx->pc) {
        case 0x1f31f8u: goto label_1f31f8;
        case 0x1f322cu: goto label_1f322c;
        case 0x1f3234u: goto label_1f3234;
        default: break;
    }

    ctx->pc = 0x1f31c0u;

    // 0x1f31c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f31c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f31c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f31c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f31c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f31c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f31cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f31ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f31d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f31d4: 0x26030750  addiu       $v1, $s0, 0x750
    ctx->pc = 0x1f31d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1872));
    // 0x1f31d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f31d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31dc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1f31dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31e0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1f31e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f31e4: 0xe6000650  swc1        $f0, 0x650($s0)
    ctx->pc = 0x1f31e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1616), bits); }
    // 0x1f31e8: 0x7e020630  sq          $v0, 0x630($s0)
    ctx->pc = 0x1f31e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1584), GPR_VEC(ctx, 2));
    // 0x1f31ec: 0xe6000658  swc1        $f0, 0x658($s0)
    ctx->pc = 0x1f31ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1624), bits); }
    // 0x1f31f0: 0xe6000654  swc1        $f0, 0x654($s0)
    ctx->pc = 0x1f31f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1620), bits); }
    // 0x1f31f4: 0x0  nop
    ctx->pc = 0x1f31f4u;
    // NOP
label_1f31f8:
    // 0x1f31f8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1f31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1f31fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f31fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f3200: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x1f3200u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f3204: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f3204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f3208: 0x28a40006  slti        $a0, $a1, 0x6
    ctx->pc = 0x1f3208u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f320c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F320Cu;
    {
        const bool branch_taken_0x1f320c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F320Cu;
        // 0x1f3210: 0x7c4305d0  sq          $v1, 0x5D0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 1488), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f320c) {
            ctx->pc = 0x1F31F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f31f8;
        }
    }
    ctx->pc = 0x1F3214u;
    // 0x1f3214: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f321c: 0xe6000690  swc1        $f0, 0x690($s0)
    ctx->pc = 0x1f321cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1680), bits); }
    // 0x1f3220: 0xe6000698  swc1        $f0, 0x698($s0)
    ctx->pc = 0x1f3220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1688), bits); }
    // 0x1f3224: 0xc0832c4  jal         func_20CB10
    ctx->pc = 0x1F3224u;
    SET_GPR_U32(ctx, 31, 0x1F322Cu);
    ctx->pc = 0x1F3228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3224u;
    // 0x1f3228: 0xe6000694  swc1        $f0, 0x694($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1684), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB10u, 0x1F3224u, 0x1F322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F322Cu;
label_1f322c:
    // 0x1f322c: 0xc0832d6  jal         func_20CB58
    ctx->pc = 0x1F322Cu;
    SET_GPR_U32(ctx, 31, 0x1F3234u);
    ctx->pc = 0x1F3230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F322Cu;
    // 0x1f3230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB58u, 0x1F322Cu, 0x1F3234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3234u;
label_1f3234:
    // 0x1f3234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f3234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3238: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f3238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f323c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F323Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F323Cu;
        // 0x1f3240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F323Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3244u;
    // 0x1f3244: 0x0  nop
    ctx->pc = 0x1f3244u;
    // NOP
    ctx->pc = 0x1f3248u;
}
