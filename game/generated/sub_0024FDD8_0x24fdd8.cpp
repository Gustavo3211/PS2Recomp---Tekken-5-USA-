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

// Function: sub_0024FDD8
// Address: 0x24fdd8 - 0x24ff18
void sub_0024FDD8_0x24fdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FDD8_0x24fdd8");
#endif

    switch (ctx->pc) {
        case 0x24fe08u: goto label_24fe08;
        case 0x24fe18u: goto label_24fe18;
        case 0x24feb8u: goto label_24feb8;
        case 0x24ff00u: goto label_24ff00;
        default: break;
    }

    ctx->pc = 0x24fdd8u;

    // 0x24fdd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24fdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24fddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24fddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24fde0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24fde0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fde4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24fde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24fde8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24fde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24fdec: 0x8602011c  lh          $v0, 0x11C($s0)
    ctx->pc = 0x24fdecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x24fdf0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24FDF0u;
    {
        const bool branch_taken_0x24fdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDF0u;
        // 0x24fdf4: 0x261100c0  addiu       $s1, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fdf0) {
            ctx->pc = 0x24FE2Cu;
            goto label_24fe2c;
        }
    }
    ctx->pc = 0x24FDF8u;
    // 0x24fdf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24fdf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fdfc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24fdfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe00: 0xc093c66  jal         func_24F198
    ctx->pc = 0x24FE00u;
    SET_GPR_U32(ctx, 31, 0x24FE08u);
    ctx->pc = 0x24FE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FE00u;
    // 0x24fe04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F198u, 0x24FE00u, 0x24FE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FE08u;
label_24fe08:
    // 0x24fe08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24fe08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24fe0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24fe0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fe10: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24FE10u;
    SET_GPR_U32(ctx, 31, 0x24FE18u);
    ctx->pc = 0x24FE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FE10u;
    // 0x24fe14: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24FE10u, 0x24FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FE18u;
label_24fe18:
    // 0x24fe18: 0x8603006c  lh          $v1, 0x6C($s0)
    ctx->pc = 0x24fe18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x24fe1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24fe1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24fe20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24fe20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fe24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24fe24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24fe28: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x24fe28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_24fe2c:
    // 0x24fe2c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x24fe30: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x24fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x24fe34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FE34u;
    {
        const bool branch_taken_0x24fe34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE34u;
        // 0x24fe38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe34) {
            ctx->pc = 0x24FE4Cu;
            goto label_24fe4c;
        }
    }
    ctx->pc = 0x24FE3Cu;
    // 0x24fe3c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24fe40: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x24fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x24fe44: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x24fe44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x24fe48: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x24fe48u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_24fe4c:
    // 0x24fe4c: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x24FE4Cu;
    {
        const bool branch_taken_0x24fe4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE4Cu;
        // 0x24fe50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe4c) {
            ctx->pc = 0x24FED8u;
            goto label_24fed8;
        }
    }
    ctx->pc = 0x24FE54u;
    // 0x24fe54: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x24fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x24fe58: 0x8603004c  lh          $v1, 0x4C($s0)
    ctx->pc = 0x24fe58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x24fe5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24fe5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe60: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x24fe60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x24fe64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24fe64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe68: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x24fe68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x24fe6c: 0x2c670077  sltiu       $a3, $v1, 0x77
    ctx->pc = 0x24fe6cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)119) ? 1 : 0);
    // 0x24fe70: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x24fe70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x24fe74: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x24fe74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x24fe78: 0x8d2988d0  lw          $t1, -0x7730($t1)
    ctx->pc = 0x24fe78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294936784)));
    // 0x24fe7c: 0x7180a  movz        $v1, $zero, $a3
    ctx->pc = 0x24fe7cu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x24fe80: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x24fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x24fe84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24fe84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe88: 0x8d280894  lw          $t0, 0x894($t1)
    ctx->pc = 0x24fe88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 2196)));
    // 0x24fe8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24fe90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x24fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x24fe94: 0x8d03001c  lw          $v1, 0x1C($t0)
    ctx->pc = 0x24fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x24fe98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24fe9c: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x24fe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fea0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x24fea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x24fea4: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x24fea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fea8: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x24fea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x24feac: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x24feacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24feb0: 0xc093e68  jal         func_24F9A0
    ctx->pc = 0x24FEB0u;
    SET_GPR_U32(ctx, 31, 0x24FEB8u);
    ctx->pc = 0x24FEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FEB0u;
    // 0x24feb4: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F9A0u, 0x24FEB0u, 0x24FEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FEB8u;
label_24feb8:
    // 0x24feb8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x24FEB8u;
    {
        const bool branch_taken_0x24feb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24feb8) {
            ctx->pc = 0x24FEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FEB8u;
            // 0x24febc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FF04u;
            goto label_24ff04;
        }
    }
    ctx->pc = 0x24FEC0u;
    // 0x24fec0: 0x8602006c  lh          $v0, 0x6C($s0)
    ctx->pc = 0x24fec0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x24fec4: 0x8604006a  lh          $a0, 0x6A($s0)
    ctx->pc = 0x24fec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x24fec8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24fecc: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x24feccu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24fed0: 0x1810  mfhi        $v1
    ctx->pc = 0x24fed0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x24fed4: 0xa603006a  sh          $v1, 0x6A($s0)
    ctx->pc = 0x24fed4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 3));
label_24fed8:
    // 0x24fed8: 0x86020064  lh          $v0, 0x64($s0)
    ctx->pc = 0x24fed8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x24fedc: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x24fedcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x24fee0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24fee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24fee4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24FEE4u;
    {
        const bool branch_taken_0x24fee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FEE4u;
        // 0x24fee8: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fee4) {
            ctx->pc = 0x24FEF8u;
            goto label_24fef8;
        }
    }
    ctx->pc = 0x24FEECu;
    // 0x24feec: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x24feecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x24fef0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24fef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24fef4: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x24fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_24fef8:
    // 0x24fef8: 0xc0947f6  jal         func_251FD8
    ctx->pc = 0x24FEF8u;
    SET_GPR_U32(ctx, 31, 0x24FF00u);
    ctx->pc = 0x24FEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FEF8u;
    // 0x24fefc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251FD8u, 0x24FEF8u, 0x24FF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FF00u;
label_24ff00:
    // 0x24ff00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ff00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24ff04:
    // 0x24ff04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24ff04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24ff08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24ff08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ff0c: 0x3e00008  jr          $ra
    ctx->pc = 0x24FF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF0Cu;
        // 0x24ff10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FF14u;
    // 0x24ff14: 0x0  nop
    ctx->pc = 0x24ff14u;
    // NOP
    ctx->pc = 0x24ff18u;
}
