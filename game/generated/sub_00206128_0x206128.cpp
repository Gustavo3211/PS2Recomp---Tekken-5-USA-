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

// Function: sub_00206128
// Address: 0x206128 - 0x206180
void sub_00206128_0x206128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206128_0x206128");
#endif

    ctx->pc = 0x206128u;

    // 0x206128: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x206128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20612c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x20612cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x206130: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x206130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x206134: 0x84a2014e  lh          $v0, 0x14E($a1)
    ctx->pc = 0x206134u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 334)));
    // 0x206138: 0x94a40162  lhu         $a0, 0x162($a1)
    ctx->pc = 0x206138u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 354)));
    // 0x20613c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20613cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206140: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x206140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x206144: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x206144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x206148: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x206148u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20614c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x20614cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x206150: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x206150u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x206154: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x206154u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x206158: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x206158u;
    {
        const bool branch_taken_0x206158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206158) {
            ctx->pc = 0x206178u;
            goto label_206178;
        }
    }
    ctx->pc = 0x206160u;
    // 0x206160: 0x90a201ae  lbu         $v0, 0x1AE($a1)
    ctx->pc = 0x206160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 430)));
    // 0x206164: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206164u;
    {
        const bool branch_taken_0x206164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206164u;
        // 0x206168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206164) {
            ctx->pc = 0x206174u;
            goto label_206174;
        }
    }
    ctx->pc = 0x20616Cu;
    // 0x20616c: 0xa0a2020a  sb          $v0, 0x20A($a1)
    ctx->pc = 0x20616cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 522), (uint8_t)GPR_U32(ctx, 2));
    // 0x206170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206174:
    // 0x206174: 0xa0a201ae  sb          $v0, 0x1AE($a1)
    ctx->pc = 0x206174u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 430), (uint8_t)GPR_U32(ctx, 2));
label_206178:
    // 0x206178: 0x3e00008  jr          $ra
    ctx->pc = 0x206178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206180u;
}
