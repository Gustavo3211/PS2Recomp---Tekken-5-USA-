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

// Function: sub_0031D080
// Address: 0x31d080 - 0x31d128
void sub_0031D080_0x31d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D080_0x31d080");
#endif

    ctx->pc = 0x31d080u;

    // 0x31d080: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31d080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31d084: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x31d084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x31d088: 0x3402c80b  ori         $v0, $zero, 0xC80B
    ctx->pc = 0x31d088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)51211);
    // 0x31d08c: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x31d08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x31d090: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31d090u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31d094: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x31d094u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x31d098: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x31d098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x31d09c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31d09cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d0a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31d0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31d0a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31d0a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d0a8: 0x3c071400  lui         $a3, 0x1400
    ctx->pc = 0x31d0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)5120 << 16));
    // 0x31d0ac: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x31d0acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x31d0b0: 0x34e70500  ori         $a3, $a3, 0x500
    ctx->pc = 0x31d0b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1280);
    // 0x31d0b4: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x31d0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x31d0b8: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x31d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x31d0bc: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x31d0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x31d0c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x31d0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d0c4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31d0c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D0C8u;
    {
        const bool branch_taken_0x31d0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D0C8u;
        // 0x31d0cc: 0x24a20040  addiu       $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d0c8) {
            ctx->pc = 0x31D0D8u;
            goto label_31d0d8;
        }
    }
    ctx->pc = 0x31D0D0u;
    // 0x31d0d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31D0D0u;
    {
        const bool branch_taken_0x31d0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D0D0u;
        // 0x31d0d4: 0xaca0001c  sw          $zero, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d0d0) {
            ctx->pc = 0x31D0E4u;
            goto label_31d0e4;
        }
    }
    ctx->pc = 0x31D0D8u;
label_31d0d8:
    // 0x31d0d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31d0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31d0dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31d0dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d0e0: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x31d0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_31d0e4:
    // 0x31d0e4: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x31d0e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x31d0e8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x31d0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d0ec: 0xe4a10028  swc1        $f1, 0x28($a1)
    ctx->pc = 0x31d0ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x31d0f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x31d0f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31d0f4: 0xe4a2002c  swc1        $f2, 0x2C($a1)
    ctx->pc = 0x31d0f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x31d0f8: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x31d0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x31d0fc: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x31d0fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x31d100: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x31d100u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x31d104: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x31d104u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x31d108: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x31d108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x31d10c: 0x94c40008  lhu         $a0, 0x8($a2)
    ctx->pc = 0x31d10cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x31d110: 0xaca70038  sw          $a3, 0x38($a1)
    ctx->pc = 0x31d110u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 7));
    // 0x31d114: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x31d114u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x31d118: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x31d118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x31d11c: 0x3e00008  jr          $ra
    ctx->pc = 0x31D11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D11Cu;
        // 0x31d120: 0xaca40034  sw          $a0, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D124u;
    // 0x31d124: 0x0  nop
    ctx->pc = 0x31d124u;
    // NOP
    ctx->pc = 0x31d128u;
}
