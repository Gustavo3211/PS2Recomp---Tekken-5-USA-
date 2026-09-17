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

// Function: sub_003412A0
// Address: 0x3412a0 - 0x341318
void sub_003412A0_0x3412a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003412A0_0x3412a0");
#endif

    switch (ctx->pc) {
        case 0x3412d8u: goto label_3412d8;
        default: break;
    }

    ctx->pc = 0x3412a0u;

    // 0x3412a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3412a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3412a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3412a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3412a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3412a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3412ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3412acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3412b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3412b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3412b4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3412b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3412b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3412b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3412bc: 0x9223001c  lbu         $v1, 0x1C($s1)
    ctx->pc = 0x3412bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3412c0: 0x1466000f  bne         $v1, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x3412C0u;
    {
        const bool branch_taken_0x3412c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x3412C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3412C0u;
        // 0x3412c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3412c0) {
            ctx->pc = 0x341300u;
            goto label_341300;
        }
    }
    ctx->pc = 0x3412C8u;
    // 0x3412c8: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x3412c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3412cc: 0xf08021  addu        $s0, $a3, $s0
    ctx->pc = 0x3412ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x3412d0: 0xc0d047c  jal         func_3411F0
    ctx->pc = 0x3412D0u;
    SET_GPR_U32(ctx, 31, 0x3412D8u);
    ctx->pc = 0x3412D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3412D0u;
    // 0x3412d4: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3411F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3411F0u, 0x3412D0u, 0x3412D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3412D8u;
label_3412d8:
    // 0x3412d8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3412d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3412dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3412dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3412e0: 0x9223001e  lbu         $v1, 0x1E($s1)
    ctx->pc = 0x3412e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x3412e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3412e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3412e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3412e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3412ec: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3412ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x3412f0: 0x9223001f  lbu         $v1, 0x1F($s1)
    ctx->pc = 0x3412f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
    // 0x3412f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3412f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3412f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3412f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3412fc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x3412fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_341300:
    // 0x341300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x341300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341304: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x341304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x341308: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x341308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34130c: 0x3e00008  jr          $ra
    ctx->pc = 0x34130Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34130Cu;
        // 0x341310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34130Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341314u;
    // 0x341314: 0x0  nop
    ctx->pc = 0x341314u;
    // NOP
    ctx->pc = 0x341318u;
}
