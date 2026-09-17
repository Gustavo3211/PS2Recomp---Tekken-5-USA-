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

// Function: sub_0032B8F0
// Address: 0x32b8f0 - 0x32b9d8
void sub_0032B8F0_0x32b8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032B8F0_0x32b8f0");
#endif

    switch (ctx->pc) {
        case 0x32b9ccu: goto label_32b9cc;
        default: break;
    }

    ctx->pc = 0x32b8f0u;

    // 0x32b8f0: 0x460c6800  add.s       $f0, $f13, $f12
    ctx->pc = 0x32b8f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
    // 0x32b8f4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x32b8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x32b8f8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x32b8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x32b8fc: 0x460e7840  add.s       $f1, $f15, $f14
    ctx->pc = 0x32b8fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x32b900: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x32b900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x32b904: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x32b904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x32b908: 0x46108880  add.s       $f2, $f17, $f16
    ctx->pc = 0x32b908u;
    ctx->f[2] = FPU_ADD_S(ctx->f[17], ctx->f[16]);
    // 0x32b90c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32b90cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32b910: 0x460c6b41  sub.s       $f13, $f13, $f12
    ctx->pc = 0x32b910u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x32b914: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32b914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32b918: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x32b918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x32b91c: 0x460e7bc1  sub.s       $f15, $f15, $f14
    ctx->pc = 0x32b91cu;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[14]);
    // 0x32b920: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32b920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32b924: 0x46108c41  sub.s       $f17, $f17, $f16
    ctx->pc = 0x32b924u;
    ctx->f[17] = FPU_SUB_S(ctx->f[17], ctx->f[16]);
    // 0x32b928: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x32b928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x32b92c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x32b92cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x32b930: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32b930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b934: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x32b934u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x32b938: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32b938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32b93c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x32b93cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x32b940: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x32b940u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x32b944: 0x0  nop
    ctx->pc = 0x32b944u;
    // NOP
    // 0x32b948: 0x0  nop
    ctx->pc = 0x32b948u;
    // NOP
    // 0x32b94c: 0x46112103  div.s       $f4, $f4, $f17
    ctx->pc = 0x32b94cu;
    if (ctx->f[17] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[17];
    // 0x32b950: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x32b950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x32b954: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x32b954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x32b958: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x32b958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x32b95c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x32b95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x32b960: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x32b960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x32b964: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x32b964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x32b968: 0x0  nop
    ctx->pc = 0x32b968u;
    // NOP
    // 0x32b96c: 0x0  nop
    ctx->pc = 0x32b96cu;
    // NOP
    // 0x32b970: 0x460f0843  div.s       $f1, $f1, $f15
    ctx->pc = 0x32b970u;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[15];
    // 0x32b974: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x32b974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x32b978: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x32b978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x32b97c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x32b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x32b980: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x32b980u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x32b984: 0x0  nop
    ctx->pc = 0x32b984u;
    // NOP
    // 0x32b988: 0x0  nop
    ctx->pc = 0x32b988u;
    // NOP
    // 0x32b98c: 0x460f1bc3  div.s       $f15, $f3, $f15
    ctx->pc = 0x32b98cu;
    if (ctx->f[15] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[15] = ctx->f[3] / ctx->f[15];
    // 0x32b990: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x32b990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x32b994: 0x0  nop
    ctx->pc = 0x32b994u;
    // NOP
    // 0x32b998: 0x0  nop
    ctx->pc = 0x32b998u;
    // NOP
    // 0x32b99c: 0x460d0003  div.s       $f0, $f0, $f13
    ctx->pc = 0x32b99cu;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[13];
    // 0x32b9a0: 0xe7af0014  swc1        $f15, 0x14($sp)
    ctx->pc = 0x32b9a0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x32b9a4: 0x0  nop
    ctx->pc = 0x32b9a4u;
    // NOP
    // 0x32b9a8: 0x0  nop
    ctx->pc = 0x32b9a8u;
    // NOP
    // 0x32b9ac: 0x46111083  div.s       $f2, $f2, $f17
    ctx->pc = 0x32b9acu;
    if (ctx->f[17] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[17];
    // 0x32b9b0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x32b9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x32b9b4: 0x0  nop
    ctx->pc = 0x32b9b4u;
    // NOP
    // 0x32b9b8: 0x0  nop
    ctx->pc = 0x32b9b8u;
    // NOP
    // 0x32b9bc: 0x460d18c3  div.s       $f3, $f3, $f13
    ctx->pc = 0x32b9bcu;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[13];
    // 0x32b9c0: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x32b9c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x32b9c4: 0xc0ce51a  jal         func_339468
    ctx->pc = 0x32B9C4u;
    SET_GPR_U32(ctx, 31, 0x32B9CCu);
    ctx->pc = 0x32B9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B9C4u;
    // 0x32b9c8: 0xe7a30000  swc1        $f3, 0x0($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x339468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339468u, 0x32B9C4u, 0x32B9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B9CCu;
label_32b9cc:
    // 0x32b9cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32b9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32b9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x32B9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9D0u;
        // 0x32b9d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B9D8u;
}
