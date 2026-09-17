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

// Function: sub_0020E050
// Address: 0x20e050 - 0x20e0d0
void sub_0020E050_0x20e050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E050_0x20e050");
#endif

    switch (ctx->pc) {
        case 0x20e0c0u: goto label_20e0c0;
        default: break;
    }

    ctx->pc = 0x20e050u;

    // 0x20e050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20e050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20e054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20e054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20e058: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x20e058u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x20e05c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x20e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x20e060: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20e060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e064: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x20e064u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20e068: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20e068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20e06c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x20e06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x20e070: 0x2421a540  addiu       $at, $at, -0x5AC0
    ctx->pc = 0x20e070u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294944064));
    // 0x20e074: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x20e074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x20e078: 0x8462006a  lh          $v0, 0x6A($v1)
    ctx->pc = 0x20e078u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x20e07c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20E07Cu;
    {
        const bool branch_taken_0x20e07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E07Cu;
        // 0x20e080: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e07c) {
            ctx->pc = 0x20E0C0u;
            goto label_20e0c0;
        }
    }
    ctx->pc = 0x20E084u;
    // 0x20e084: 0xc4650038  lwc1        $f5, 0x38($v1)
    ctx->pc = 0x20e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x20e088: 0xc4640020  lwc1        $f4, 0x20($v1)
    ctx->pc = 0x20e088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20e08c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x20e08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20e090: 0xc4630024  lwc1        $f3, 0x24($v1)
    ctx->pc = 0x20e090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20e094: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20e094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e098: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x20e098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e09c: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x20e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e0a0: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x20e0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20e0a4: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x20e0a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20e0a8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x20e0a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20e0ac: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x20e0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20e0b0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x20e0b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x20e0b4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x20e0b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x20e0b8: 0xc08e45e  jal         func_239178
    ctx->pc = 0x20E0B8u;
    SET_GPR_U32(ctx, 31, 0x20E0C0u);
    ctx->pc = 0x20E0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E0B8u;
    // 0x20e0bc: 0xe7a50018  swc1        $f5, 0x18($sp) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x239178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239178u, 0x20E0B8u, 0x20E0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E0C0u;
label_20e0c0:
    // 0x20e0c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20e0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x20E0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E0C4u;
        // 0x20e0c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E0CCu;
    // 0x20e0cc: 0x0  nop
    ctx->pc = 0x20e0ccu;
    // NOP
    ctx->pc = 0x20e0d0u;
}
