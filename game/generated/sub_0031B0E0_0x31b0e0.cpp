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

// Function: sub_0031B0E0
// Address: 0x31b0e0 - 0x31b168
void sub_0031B0E0_0x31b0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B0E0_0x31b0e0");
#endif

    ctx->pc = 0x31b0e0u;

    // 0x31b0e0: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x31b0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x31b0e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31b0e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b0e8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x31b0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31b0ec: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x31b0ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x31b0f0: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x31b0f0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x31b0f4: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x31b0f4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x31b0f8: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b0f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31b0fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x31b0fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31b100: 0x46007024  .word       0x46007024                   # cvt.w.s     $f0, $f14 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b100u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[14]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31b104: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x31b104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x31b108: 0x46006824  .word       0x46006824                   # cvt.w.s     $f0, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b108u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31b10c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x31b10cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x31b110: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x31b110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x31b114: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B114u;
    {
        const bool branch_taken_0x31b114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B114u;
        // 0x31b118: 0x28e80100  slti        $t0, $a3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b114) {
            ctx->pc = 0x31B128u;
            goto label_31b128;
        }
    }
    ctx->pc = 0x31B11Cu;
    // 0x31b11c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x31b11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b120: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x31b120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x31b124: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x31b124u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_31b128:
    // 0x31b128: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x31b128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x31b12c: 0xac850040  sw          $a1, 0x40($a0)
    ctx->pc = 0x31b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
    // 0x31b130: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B130u;
    {
        const bool branch_taken_0x31b130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B130u;
        // 0x31b134: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b130) {
            ctx->pc = 0x31B144u;
            goto label_31b144;
        }
    }
    ctx->pc = 0x31B138u;
    // 0x31b138: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x31b138u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b13c: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x31b13cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x31b140: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x31b140u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_31b144:
    // 0x31b144: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x31b144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x31b148: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B148u;
    {
        const bool branch_taken_0x31b148 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B148u;
        // 0x31b14c: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b148) {
            ctx->pc = 0x31B15Cu;
            goto label_31b15c;
        }
    }
    ctx->pc = 0x31B150u;
    // 0x31b150: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x31b150u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b154: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x31b154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x31b158: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x31b158u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_31b15c:
    // 0x31b15c: 0x3e00008  jr          $ra
    ctx->pc = 0x31B15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B15Cu;
        // 0x31b160: 0xac830048  sw          $v1, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B164u;
    // 0x31b164: 0x0  nop
    ctx->pc = 0x31b164u;
    // NOP
    ctx->pc = 0x31b168u;
}
