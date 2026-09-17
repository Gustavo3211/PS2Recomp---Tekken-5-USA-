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

// Function: sub_0029E070
// Address: 0x29e070 - 0x29e108
void sub_0029E070_0x29e070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E070_0x29e070");
#endif

    switch (ctx->pc) {
        case 0x29e0f8u: goto label_29e0f8;
        default: break;
    }

    ctx->pc = 0x29e070u;

    // 0x29e070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29e070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29e074: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x29e074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29e078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29e07c: 0x8ce40150  lw          $a0, 0x150($a3)
    ctx->pc = 0x29e07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x29e080: 0x8ce60154  lw          $a2, 0x154($a3)
    ctx->pc = 0x29e080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 340)));
    // 0x29e084: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x29e084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x29e088: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x29e088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x29e08c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29e090: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x29e090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x29e094: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x29e094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29e098: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x29e098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x29e09c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x29e09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29e0a0: 0x8ce40150  lw          $a0, 0x150($a3)
    ctx->pc = 0x29e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x29e0a4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x29e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x29e0a8: 0x2842001f  slti        $v0, $v0, 0x1F
    ctx->pc = 0x29e0a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x29e0ac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29E0ACu;
    {
        const bool branch_taken_0x29e0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E0ACu;
        // 0x29e0b0: 0x2ca5000a  sltiu       $a1, $a1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e0ac) {
            ctx->pc = 0x29E0C4u;
            goto label_29e0c4;
        }
    }
    ctx->pc = 0x29E0B4u;
    // 0x29e0b4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x29e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x29e0b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e0bc: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x29e0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x29e0c0: 0xace30160  sw          $v1, 0x160($a3)
    ctx->pc = 0x29e0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 352), GPR_U32(ctx, 3));
label_29e0c4:
    // 0x29e0c4: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x29E0C4u;
    {
        const bool branch_taken_0x29e0c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E0C4u;
        // 0x29e0c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e0c4) {
            ctx->pc = 0x29E0FCu;
            goto label_29e0fc;
        }
    }
    ctx->pc = 0x29E0CCu;
    // 0x29e0cc: 0x8ce20150  lw          $v0, 0x150($a3)
    ctx->pc = 0x29e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x29e0d0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29e0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29e0d4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x29e0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x29e0d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29e0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e0dc: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x29e0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29e0e0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x29e0e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x29e0e4: 0x0  nop
    ctx->pc = 0x29e0e4u;
    // NOP
    // 0x29e0e8: 0x0  nop
    ctx->pc = 0x29e0e8u;
    // NOP
    // 0x29e0ec: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x29e0ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x29e0f0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29E0F0u;
    SET_GPR_U32(ctx, 31, 0x29E0F8u);
    ctx->pc = 0x29E0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E0F0u;
    // 0x29e0f4: 0x8cc4fffc  lw          $a0, -0x4($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29E0F0u, 0x29E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E0F8u;
label_29e0f8:
    // 0x29e0f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29e0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29e0fc:
    // 0x29e0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x29E0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E0FCu;
        // 0x29e100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E104u;
    // 0x29e104: 0x0  nop
    ctx->pc = 0x29e104u;
    // NOP
    ctx->pc = 0x29e108u;
}
