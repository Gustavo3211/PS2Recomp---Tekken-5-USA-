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

// Function: sub_00236988
// Address: 0x236988 - 0x236a00
void sub_00236988_0x236988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236988_0x236988");
#endif

    switch (ctx->pc) {
        case 0x2369a4u: goto label_2369a4;
        case 0x2369c0u: goto label_2369c0;
        default: break;
    }

    ctx->pc = 0x236988u;

    // 0x236988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23698c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23698cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236990: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x236990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236994: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23699c: 0xc08da20  jal         func_236880
    ctx->pc = 0x23699Cu;
    SET_GPR_U32(ctx, 31, 0x2369A4u);
    ctx->pc = 0x2369A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23699Cu;
    // 0x2369a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236880u, 0x23699Cu, 0x2369A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2369A4u;
label_2369a4:
    // 0x2369a4: 0x8603003e  lh          $v1, 0x3E($s0)
    ctx->pc = 0x2369a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x2369a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2369a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2369ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2369acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2369b0: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2369B0u;
    {
        const bool branch_taken_0x2369b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2369B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369B0u;
        // 0x2369b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2369b0) {
            ctx->pc = 0x2369ECu;
            goto label_2369ec;
        }
    }
    ctx->pc = 0x2369B8u;
    // 0x2369b8: 0xc08daae  jal         func_236AB8
    ctx->pc = 0x2369B8u;
    SET_GPR_U32(ctx, 31, 0x2369C0u);
    ctx->pc = 0x236AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AB8u, 0x2369B8u, 0x2369C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2369C0u;
label_2369c0:
    // 0x2369c0: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2369c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2369c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2369c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2369c8: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x2369c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2369cc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2369ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2369d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2369d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2369d4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2369d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2369d8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x2369d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2369dc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2369dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2369e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2369e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2369e4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2369E4u;
    {
        const bool branch_taken_0x2369e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2369e4) {
            ctx->pc = 0x2369E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2369E4u;
            // 0x2369e8: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2369ECu;
            goto label_2369ec;
        }
    }
    ctx->pc = 0x2369ECu;
label_2369ec:
    // 0x2369ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2369ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2369f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2369f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2369f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2369f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2369f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2369F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2369FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369F8u;
        // 0x2369fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2369F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236A00u;
}
