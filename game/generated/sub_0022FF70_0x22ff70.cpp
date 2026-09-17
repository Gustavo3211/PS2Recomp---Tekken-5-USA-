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

// Function: sub_0022FF70
// Address: 0x22ff70 - 0x2300b8
void sub_0022FF70_0x22ff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FF70_0x22ff70");
#endif

    switch (ctx->pc) {
        case 0x22ffa0u: goto label_22ffa0;
        case 0x22ffdcu: goto label_22ffdc;
        case 0x22fff0u: goto label_22fff0;
        default: break;
    }

    ctx->pc = 0x22ff70u;

    // 0x22ff70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22ff70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22ff74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ff74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ff78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22ff78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22ff7c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x22ff7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ff80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22ff80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22ff84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22ff84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ff88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22ff88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22ff8c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22ff8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ff90: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x22ff90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x22ff94: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x22ff94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x22ff98: 0xc08beea  jal         func_22FBA8
    ctx->pc = 0x22FF98u;
    SET_GPR_U32(ctx, 31, 0x22FFA0u);
    ctx->pc = 0x22FF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF98u;
    // 0x22ff9c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FBA8u, 0x22FF98u, 0x22FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFA0u;
label_22ffa0:
    // 0x22ffa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22ffa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ffa4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x22ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x22ffa8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22FFA8u;
    {
        const bool branch_taken_0x22ffa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFA8u;
        // 0x22ffac: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffa8) {
            ctx->pc = 0x22FFBCu;
            goto label_22ffbc;
        }
    }
    ctx->pc = 0x22FFB0u;
    // 0x22ffb0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x22ffb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x22ffb4: 0x36310001  ori         $s1, $s1, 0x1
    ctx->pc = 0x22ffb4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x22ffb8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x22ffb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_22ffbc:
    // 0x22ffbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22FFBCu;
    {
        const bool branch_taken_0x22ffbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFBCu;
        // 0x22ffc0: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffbc) {
            ctx->pc = 0x22FFCCu;
            goto label_22ffcc;
        }
    }
    ctx->pc = 0x22FFC4u;
    // 0x22ffc4: 0xc78084c4  lwc1        $f0, -0x7B3C($gp)
    ctx->pc = 0x22ffc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ffc8: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x22ffc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_22ffcc:
    // 0x22ffcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22FFCCu;
    {
        const bool branch_taken_0x22ffcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFCCu;
        // 0x22ffd0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffcc) {
            ctx->pc = 0x22FFE0u;
            goto label_22ffe0;
        }
    }
    ctx->pc = 0x22FFD4u;
    // 0x22ffd4: 0xc091de8  jal         func_2477A0
    ctx->pc = 0x22FFD4u;
    SET_GPR_U32(ctx, 31, 0x22FFDCu);
    ctx->pc = 0x22FFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FFD4u;
    // 0x22ffd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2477A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2477A0u, 0x22FFD4u, 0x22FFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFDCu;
label_22ffdc:
    // 0x22ffdc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22ffdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22ffe0:
    // 0x22ffe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22ffe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ffe4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x22ffe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ffe8: 0xc08bf38  jal         func_22FCE0
    ctx->pc = 0x22FFE8u;
    SET_GPR_U32(ctx, 31, 0x22FFF0u);
    ctx->pc = 0x22FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FFE8u;
    // 0x22ffec: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FCE0u, 0x22FFE8u, 0x22FFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFF0u;
label_22fff0:
    // 0x22fff0: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x22fff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x22fff4: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x22fff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22fff8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x22fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x22fffc: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x22fffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230000: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x230000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230004: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x230004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x230008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23000c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x23000cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x230010: 0x6a860007  ldl         $a2, 0x7($s4)
    ctx->pc = 0x230010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x230014: 0x6e860000  ldr         $a2, 0x0($s4)
    ctx->pc = 0x230014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x230018: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x230018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x23001c: 0xb2060017  sdl         $a2, 0x17($s0)
    ctx->pc = 0x23001cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230020: 0xb6060010  sdr         $a2, 0x10($s0)
    ctx->pc = 0x230020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230024: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x230024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    // 0x230028: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x230028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x23002c: 0x8c8388ac  lw          $v1, -0x7754($a0)
    ctx->pc = 0x23002cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x230030: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x230030u;
    {
        const bool branch_taken_0x230030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x230034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230030u;
        // 0x230034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230030) {
            ctx->pc = 0x230048u;
            goto label_230048;
        }
    }
    ctx->pc = 0x230038u;
    // 0x230038: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x230038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23003c: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x23003cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x230040: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x230040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x230044: 0x4282b  sltu        $a1, $zero, $a0
    ctx->pc = 0x230044u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_230048:
    // 0x230048: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x230048u;
    {
        const bool branch_taken_0x230048 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230048u;
        // 0x23004c: 0x32220003  andi        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230048) {
            ctx->pc = 0x230084u;
            goto label_230084;
        }
    }
    ctx->pc = 0x230050u;
    // 0x230050: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x230050u;
    {
        const bool branch_taken_0x230050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230050) {
            ctx->pc = 0x230054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230050u;
            // 0x230054: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23007Cu;
            goto label_23007c;
        }
    }
    ctx->pc = 0x230058u;
    // 0x230058: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x230058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23005c: 0xc78184c8  lwc1        $f1, -0x7B38($gp)
    ctx->pc = 0x23005cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230060: 0xc78284cc  lwc1        $f2, -0x7B34($gp)
    ctx->pc = 0x230060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230064: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x230064u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x230068: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x230068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23006c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x23006Cu;
    {
        const bool branch_taken_0x23006c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x230070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23006Cu;
        // 0x230070: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23006c) {
            ctx->pc = 0x230078u;
            goto label_230078;
        }
    }
    ctx->pc = 0x230074u;
    // 0x230074: 0xe6020040  swc1        $f2, 0x40($s0)
    ctx->pc = 0x230074u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_230078:
    // 0x230078: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x230078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_23007c:
    // 0x23007c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23007cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x230080: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x230080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_230084:
    // 0x230084: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x230084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x230088: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x230088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x23008c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x23008cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x230090: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x230090u;
    {
        const bool branch_taken_0x230090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230090) {
            ctx->pc = 0x230094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230090u;
            // 0x230094: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230098u;
            goto label_230098;
        }
    }
    ctx->pc = 0x230098u;
label_230098:
    // 0x230098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23009c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23009cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2300a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2300a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2300a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2300a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2300a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2300a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2300ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2300acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2300b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2300B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2300B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2300B0u;
        // 0x2300b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2300B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2300B8u;
}
