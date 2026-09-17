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

// Function: sub_0032D928
// Address: 0x32d928 - 0x32da50
void sub_0032D928_0x32d928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D928_0x32d928");
#endif

    ctx->pc = 0x32d928u;

    // 0x32d928: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x32d928u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x32d92c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x32d92cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d930: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x32d930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x32d934: 0x25650010  addiu       $a1, $t3, 0x10
    ctx->pc = 0x32d934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x32d938: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x32d938u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
    // 0x32d93c: 0x24e24000  addiu       $v0, $a3, 0x4000
    ctx->pc = 0x32d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16384));
    // 0x32d940: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x32d940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x32d944: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x32d944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x32d948: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x32d948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x32d94c: 0x45400  sll         $t2, $a0, 16
    ctx->pc = 0x32d94cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x32d950: 0x34400  sll         $t0, $v1, 16
    ctx->pc = 0x32d950u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32d954: 0x30e94000  andi        $t1, $a3, 0x4000
    ctx->pc = 0x32d954u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x32d958: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D958u;
    {
        const bool branch_taken_0x32d958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D958u;
        // 0x32d95c: 0x30e63fff  andi        $a2, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d958) {
            ctx->pc = 0x32D968u;
            goto label_32d968;
        }
    }
    ctx->pc = 0x32D960u;
    // 0x32d960: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32d960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32d964: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x32d964u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_32d968:
    // 0x32d968: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x32d968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x32d96c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x32d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x32d970: 0x24660340  addiu       $a2, $v1, 0x340
    ctx->pc = 0x32d970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 832));
    // 0x32d974: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32d974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d978: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x32d978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x32d97c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32d97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32d980: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x32d980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x32d984: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x32d984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32d988: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x32d988u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32d98c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x32D98Cu;
    {
        const bool branch_taken_0x32d98c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x32D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D98Cu;
        // 0x32d990: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d98c) {
            ctx->pc = 0x32D9D0u;
            goto label_32d9d0;
        }
    }
    ctx->pc = 0x32D994u;
    // 0x32d994: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D994u;
    {
        const bool branch_taken_0x32d994 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D994u;
        // 0x32d998: 0x30e43fff  andi        $a0, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d994) {
            ctx->pc = 0x32D9A4u;
            goto label_32d9a4;
        }
    }
    ctx->pc = 0x32D99Cu;
    // 0x32d99c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32d9a0: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x32d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32d9a4:
    // 0x32d9a4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x32d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32d9a8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x32d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x32d9ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32d9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32d9b0: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x32d9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x32d9b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d9b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d9b8: 0x0  nop
    ctx->pc = 0x32d9b8u;
    // NOP
    // 0x32d9bc: 0x0  nop
    ctx->pc = 0x32d9bcu;
    // NOP
    // 0x32d9c0: 0x46020103  div.s       $f4, $f0, $f2
    ctx->pc = 0x32d9c0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[2];
    // 0x32d9c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32D9C4u;
    {
        const bool branch_taken_0x32d9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D9C4u;
        // 0x32d9c8: 0x460c2082  mul.s       $f2, $f4, $f12 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d9c4) {
            ctx->pc = 0x32D9D8u;
            goto label_32d9d8;
        }
    }
    ctx->pc = 0x32D9CCu;
    // 0x32d9cc: 0x0  nop
    ctx->pc = 0x32d9ccu;
    // NOP
label_32d9d0:
    // 0x32d9d0: 0xc4444e54  lwc1        $f4, 0x4E54($v0)
    ctx->pc = 0x32d9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x32d9d4: 0x460c2082  mul.s       $f2, $f4, $f12
    ctx->pc = 0x32d9d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
label_32d9d8:
    // 0x32d9d8: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x32d9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x32d9dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32d9dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32d9e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x32d9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x32d9e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32d9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d9e8: 0xe4a10024  swc1        $f1, 0x24($a1)
    ctx->pc = 0x32d9e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x32d9ec: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x32d9ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x32d9f0: 0x0  nop
    ctx->pc = 0x32d9f0u;
    // NOP
    // 0x32d9f4: 0x0  nop
    ctx->pc = 0x32d9f4u;
    // NOP
    // 0x32d9f8: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x32d9f8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x32d9fc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x32d9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x32da00: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x32da00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x32da04: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x32da04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x32da08: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x32da08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x32da0c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x32da0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x32da10: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x32da10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x32da14: 0x0  nop
    ctx->pc = 0x32da14u;
    // NOP
    // 0x32da18: 0x0  nop
    ctx->pc = 0x32da18u;
    // NOP
    // 0x32da1c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x32da1cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x32da20: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x32da20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x32da24: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x32da24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x32da28: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x32da28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x32da2c: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x32da2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x32da30: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x32da30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x32da34: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x32da34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x32da38: 0xe4a3002c  swc1        $f3, 0x2C($a1)
    ctx->pc = 0x32da38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x32da3c: 0xe4a30028  swc1        $f3, 0x28($a1)
    ctx->pc = 0x32da3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x32da40: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x32da40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x32da44: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x32da44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x32da48: 0x3e00008  jr          $ra
    ctx->pc = 0x32DA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DA48u;
        // 0x32da4c: 0xad6000e4  sw          $zero, 0xE4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DA50u;
}
