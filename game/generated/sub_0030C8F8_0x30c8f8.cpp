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

// Function: sub_0030C8F8
// Address: 0x30c8f8 - 0x30cc58
void sub_0030C8F8_0x30c8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C8F8_0x30c8f8");
#endif

    switch (ctx->pc) {
        case 0x30c99cu: goto label_30c99c;
        case 0x30c9ecu: goto label_30c9ec;
        case 0x30cb64u: goto label_30cb64;
        case 0x30cb7cu: goto label_30cb7c;
        case 0x30cba4u: goto label_30cba4;
        case 0x30cbacu: goto label_30cbac;
        case 0x30cbbcu: goto label_30cbbc;
        case 0x30cbe0u: goto label_30cbe0;
        case 0x30cbfcu: goto label_30cbfc;
        case 0x30cc08u: goto label_30cc08;
        case 0x30cc10u: goto label_30cc10;
        case 0x30cc18u: goto label_30cc18;
        case 0x30cc20u: goto label_30cc20;
        case 0x30cc28u: goto label_30cc28;
        default: break;
    }

    ctx->pc = 0x30c8f8u;

    // 0x30c8f8: 0x8f86c538  lw          $a2, -0x3AC8($gp)
    ctx->pc = 0x30c8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952248)));
    // 0x30c8fc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30c8fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30c900: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x30c900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x30c904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30c904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30c908: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30c908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30c90c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30c90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c910: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30c910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30c914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30c914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c918: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30c918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30c91c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x30c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x30c920: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x30c920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x30c924: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x30c924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x30c928: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x30c928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x30c92c: 0x10c300bf  beq         $a2, $v1, . + 4 + (0xBF << 2)
    ctx->pc = 0x30C92Cu;
    {
        const bool branch_taken_0x30c92c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C92Cu;
        // 0x30c930: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c92c) {
            ctx->pc = 0x30CC2Cu;
            goto label_30cc2c;
        }
    }
    ctx->pc = 0x30C934u;
    // 0x30c934: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x30c934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c938: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x30c938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x30c93c: 0x106000bb  beqz        $v1, . + 4 + (0xBB << 2)
    ctx->pc = 0x30C93Cu;
    {
        const bool branch_taken_0x30c93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C93Cu;
        // 0x30c940: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c93c) {
            ctx->pc = 0x30CC2Cu;
            goto label_30cc2c;
        }
    }
    ctx->pc = 0x30C944u;
    // 0x30c944: 0x30a30020  andi        $v1, $a1, 0x20
    ctx->pc = 0x30c944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x30c948: 0x146000b8  bnez        $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x30C948u;
    {
        const bool branch_taken_0x30c948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C948u;
        // 0x30c94c: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c948) {
            ctx->pc = 0x30CC2Cu;
            goto label_30cc2c;
        }
    }
    ctx->pc = 0x30C950u;
    // 0x30c950: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x30c950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x30c954: 0x106000b5  beqz        $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x30C954u;
    {
        const bool branch_taken_0x30c954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C954u;
        // 0x30c958: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c954) {
            ctx->pc = 0x30CC2Cu;
            goto label_30cc2c;
        }
    }
    ctx->pc = 0x30C95Cu;
    // 0x30c95c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x30c95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c960: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30c960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30c964: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30c964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c968: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30c968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c96c: 0x450100af  bc1t        . + 4 + (0xAF << 2)
    ctx->pc = 0x30C96Cu;
    {
        const bool branch_taken_0x30c96c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C96Cu;
        // 0x30c970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c96c) {
            ctx->pc = 0x30CC2Cu;
            goto label_30cc2c;
        }
    }
    ctx->pc = 0x30C974u;
    // 0x30c974: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30c974u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30c978: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x30c978u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30c97c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x30c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x30c980: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x30c980u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x30c984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30c984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30c988: 0x29043  sra         $s2, $v0, 1
    ctx->pc = 0x30c988u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 1));
    // 0x30c98c: 0x5a400004  blezl       $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C98Cu;
    {
        const bool branch_taken_0x30c98c = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x30c98c) {
            ctx->pc = 0x30C990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C98Cu;
            // 0x30c990: 0x2a220000  slti        $v0, $s1, 0x0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C9A0u;
            goto label_30c9a0;
        }
    }
    ctx->pc = 0x30C994u;
    // 0x30c994: 0xc0c436e  jal         func_310DB8
    ctx->pc = 0x30C994u;
    SET_GPR_U32(ctx, 31, 0x30C99Cu);
    ctx->pc = 0x30C998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C994u;
    // 0x30c998: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310DB8u, 0x30C994u, 0x30C99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C99Cu;
label_30c99c:
    // 0x30c99c: 0x2a220000  slti        $v0, $s1, 0x0
    ctx->pc = 0x30c99cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
label_30c9a0:
    // 0x30c9a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30c9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c9a4: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x30c9a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x30c9a8: 0x12230007  beq         $s1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C9A8u;
    {
        const bool branch_taken_0x30c9a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9A8u;
        // 0x30c9ac: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9a8) {
            ctx->pc = 0x30C9C8u;
            goto label_30c9c8;
        }
    }
    ctx->pc = 0x30C9B0u;
    // 0x30c9b0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x30c9b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30c9b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C9B4u;
    {
        const bool branch_taken_0x30c9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9B4u;
        // 0x30c9b8: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9b4) {
            ctx->pc = 0x30C9C8u;
            goto label_30c9c8;
        }
    }
    ctx->pc = 0x30C9BCu;
    // 0x30c9bc: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30C9BCu;
    {
        const bool branch_taken_0x30c9bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9BCu;
        // 0x30c9c0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9bc) {
            ctx->pc = 0x30C9C8u;
            goto label_30c9c8;
        }
    }
    ctx->pc = 0x30C9C4u;
    // 0x30c9c4: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x30c9c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30c9c8:
    // 0x30c9c8: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x30c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x30c9cc: 0x2a630005  slti        $v1, $s3, 0x5
    ctx->pc = 0x30c9ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x30c9d0: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x30c9d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30c9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c9d8: 0x38540001  xori        $s4, $v0, 0x1
    ctx->pc = 0x30c9d8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x30c9dc: 0x223980a  movz        $s3, $s1, $v1
    ctx->pc = 0x30c9dcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
    // 0x30c9e0: 0xae140324  sw          $s4, 0x324($s0)
    ctx->pc = 0x30c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 20));
    // 0x30c9e4: 0xc0c4416  jal         func_311058
    ctx->pc = 0x30C9E4u;
    SET_GPR_U32(ctx, 31, 0x30C9ECu);
    ctx->pc = 0x30C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C9E4u;
    // 0x30c9e8: 0x280b02d  daddu       $s6, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311058u, 0x30C9E4u, 0x30C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C9ECu;
label_30c9ec:
    // 0x30c9ec: 0x1440008f  bnez        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x30C9ECu;
    {
        const bool branch_taken_0x30c9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9ECu;
        // 0x30c9f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9ec) {
            ctx->pc = 0x30CC2Cu;
            goto label_30cc2c;
        }
    }
    ctx->pc = 0x30C9F4u;
    // 0x30c9f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c9f8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x30c9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x30c9fc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x30C9FCu;
    {
        const bool branch_taken_0x30c9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9FCu;
        // 0x30ca00: 0x8f83c54c  lw          $v1, -0x3AB4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9fc) {
            ctx->pc = 0x30CAB0u;
            goto label_30cab0;
        }
    }
    ctx->pc = 0x30CA04u;
    // 0x30ca04: 0x123840  sll         $a3, $s2, 1
    ctx->pc = 0x30ca04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x30ca08: 0x8f84cba0  lw          $a0, -0x3460($gp)
    ctx->pc = 0x30ca08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953888)));
    // 0x30ca0c: 0x8f82cb9c  lw          $v0, -0x3464($gp)
    ctx->pc = 0x30ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953884)));
    // 0x30ca10: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x30ca10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x30ca14: 0x8f88c550  lw          $t0, -0x3AB0($gp)
    ctx->pc = 0x30ca14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30ca18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30ca1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ca20: 0x8f86cba8  lw          $a2, -0x3458($gp)
    ctx->pc = 0x30ca20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953896)));
    // 0x30ca24: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x30ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x30ca28: 0x8f85cba4  lw          $a1, -0x345C($gp)
    ctx->pc = 0x30ca28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953892)));
    // 0x30ca2c: 0x24640002  addiu       $a0, $v1, 0x2
    ctx->pc = 0x30ca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x30ca30: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x30ca30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x30ca34: 0x2449ffff  addiu       $t1, $v0, -0x1
    ctx->pc = 0x30ca34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30ca38: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x30ca38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x30ca3c: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x30ca3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x30ca40: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x30ca40u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x30ca44: 0x29270000  slti        $a3, $t1, 0x0
    ctx->pc = 0x30ca44u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30ca48: 0x24630021  addiu       $v1, $v1, 0x21
    ctx->pc = 0x30ca48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 33));
    // 0x30ca4c: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x30ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x30ca50: 0x28860000  slti        $a2, $a0, 0x0
    ctx->pc = 0x30ca50u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30ca54: 0x47480b  movn        $t1, $v0, $a3
    ctx->pc = 0x30ca54u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
    // 0x30ca58: 0x66200b  movn        $a0, $v1, $a2
    ctx->pc = 0x30ca58u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x30ca5c: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x30ca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x30ca60: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x30ca60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30ca64: 0x24a5001e  addiu       $a1, $a1, 0x1E
    ctx->pc = 0x30ca64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
    // 0x30ca68: 0x25080021  addiu       $t0, $t0, 0x21
    ctx->pc = 0x30ca68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 33));
    // 0x30ca6c: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x30ca6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30ca70: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x30ca70u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x30ca74: 0x94943  sra         $t1, $t1, 5
    ctx->pc = 0x30ca74u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 5));
    // 0x30ca78: 0x28c70000  slti        $a3, $a2, 0x0
    ctx->pc = 0x30ca78u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30ca7c: 0x102180b  movn        $v1, $t0, $v0
    ctx->pc = 0x30ca7cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    // 0x30ca80: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x30ca80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x30ca84: 0xa7300b  movn        $a2, $a1, $a3
    ctx->pc = 0x30ca84u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
    // 0x30ca88: 0x24880001  addiu       $t0, $a0, 0x1
    ctx->pc = 0x30ca88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30ca8c: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x30ca8cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
    // 0x30ca90: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x30ca90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x30ca94: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x30ca94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x30ca98: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x30ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30ca9c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x30ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x30caa0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x30caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x30caa4: 0x24140  sll         $t0, $v0, 5
    ctx->pc = 0x30caa4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x30caa8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x30CAA8u;
    {
        const bool branch_taken_0x30caa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAA8u;
        // 0x30caac: 0x24660020  addiu       $a2, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30caa8) {
            ctx->pc = 0x30CB50u;
            goto label_30cb50;
        }
    }
    ctx->pc = 0x30CAB0u;
label_30cab0:
    // 0x30cab0: 0x8f84cb9c  lw          $a0, -0x3464($gp)
    ctx->pc = 0x30cab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953884)));
    // 0x30cab4: 0x123040  sll         $a2, $s2, 1
    ctx->pc = 0x30cab4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x30cab8: 0x8f85cba4  lw          $a1, -0x345C($gp)
    ctx->pc = 0x30cab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953892)));
    // 0x30cabc: 0x8f83cba0  lw          $v1, -0x3460($gp)
    ctx->pc = 0x30cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953888)));
    // 0x30cac0: 0x8f82cba8  lw          $v0, -0x3458($gp)
    ctx->pc = 0x30cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953896)));
    // 0x30cac4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x30cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30cac8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x30cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30cacc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30caccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30cad0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30cad4: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x30cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x30cad8: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x30cad8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x30cadc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30cadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30cae0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30cae4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x30cae4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x30cae8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x30cae8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x30caec: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x30caecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30caf0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x30caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x30caf4: 0x24680003  addiu       $t0, $v1, 0x3
    ctx->pc = 0x30caf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x30caf8: 0x16710003  bne         $s3, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30CAF8u;
    {
        const bool branch_taken_0x30caf8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        ctx->pc = 0x30CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAF8u;
        // 0x30cafc: 0x24460003  addiu       $a2, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30caf8) {
            ctx->pc = 0x30CB08u;
            goto label_30cb08;
        }
    }
    ctx->pc = 0x30CB00u;
    // 0x30cb00: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x30cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x30cb04: 0x2448ffff  addiu       $t0, $v0, -0x1
    ctx->pc = 0x30cb04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30cb08:
    // 0x30cb08: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x30cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x30cb0c: 0x2504003e  addiu       $a0, $t0, 0x3E
    ctx->pc = 0x30cb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 62));
    // 0x30cb10: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x30cb10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30cb14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30cb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cb18: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x30cb18u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x30cb1c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x30cb1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x30cb20: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x30cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x30cb24: 0x12650003  beq         $s3, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30CB24u;
    {
        const bool branch_taken_0x30cb24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x30CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB24u;
        // 0x30cb28: 0x24480040  addiu       $t0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb24) {
            ctx->pc = 0x30CB34u;
            goto label_30cb34;
        }
    }
    ctx->pc = 0x30CB2Cu;
    // 0x30cb2c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x30cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x30cb30: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x30cb30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30cb34:
    // 0x30cb34: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x30cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x30cb38: 0x24c4001e  addiu       $a0, $a2, 0x1E
    ctx->pc = 0x30cb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 30));
    // 0x30cb3c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x30cb3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30cb40: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x30cb40u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x30cb44: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x30cb44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x30cb48: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x30cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x30cb4c: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x30cb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_30cb50:
    // 0x30cb50: 0x8e040320  lw          $a0, 0x320($s0)
    ctx->pc = 0x30cb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x30cb54: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x30cb54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cb58: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x30cb58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x30cb5c: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x30CB5Cu;
    SET_GPR_U32(ctx, 31, 0x30CB64u);
    ctx->pc = 0x30CB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CB5Cu;
    // 0x30cb60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x30CB5Cu, 0x30CB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CB64u;
label_30cb64:
    // 0x30cb64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30cb64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cb68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cb6c: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30CB6Cu;
    {
        const bool branch_taken_0x30cb6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x30CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB6Cu;
        // 0x30cb70: 0x241522c0  addiu       $s5, $zero, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb6c) {
            ctx->pc = 0x30CB88u;
            goto label_30cb88;
        }
    }
    ctx->pc = 0x30CB74u;
    // 0x30cb74: 0xc0cb30a  jal         func_32CC28
    ctx->pc = 0x30CB74u;
    SET_GPR_U32(ctx, 31, 0x30CB7Cu);
    ctx->pc = 0x30CB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CB74u;
    // 0x30cb78: 0x8e040320  lw          $a0, 0x320($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC28u, 0x30CB74u, 0x30CB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CB7Cu;
label_30cb7c:
    // 0x30cb7c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x30CB7Cu;
    {
        const bool branch_taken_0x30cb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB7Cu;
        // 0x30cb80: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb7c) {
            ctx->pc = 0x30CC2Cu;
            goto label_30cc2c;
        }
    }
    ctx->pc = 0x30CB84u;
    // 0x30cb84: 0x0  nop
    ctx->pc = 0x30cb84u;
    // NOP
label_30cb88:
    // 0x30cb88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30cb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cb8c: 0x2d51818  mult        $v1, $s6, $s5
    ctx->pc = 0x30cb8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30cb90: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x30cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x30cb94: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x30cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x30cb98: 0x24512160  addiu       $s1, $v0, 0x2160
    ctx->pc = 0x30cb98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x30cb9c: 0xc043d88  jal         func_10F620
    ctx->pc = 0x30CB9Cu;
    SET_GPR_U32(ctx, 31, 0x30CBA4u);
    ctx->pc = 0x30CBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CB9Cu;
    // 0x30cba0: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x30CB9Cu, 0x30CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CBA4u;
label_30cba4:
    // 0x30cba4: 0xc0cb314  jal         func_32CC50
    ctx->pc = 0x30CBA4u;
    SET_GPR_U32(ctx, 31, 0x30CBACu);
    ctx->pc = 0x30CBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CBA4u;
    // 0x30cba8: 0x8e040320  lw          $a0, 0x320($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC50u, 0x30CBA4u, 0x30CBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CBACu;
label_30cbac:
    // 0x30cbac: 0x50520006  beql        $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x30CBACu;
    {
        const bool branch_taken_0x30cbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x30cbac) {
            ctx->pc = 0x30CBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30CBACu;
            // 0x30cbb0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30CBC8u;
            goto label_30cbc8;
        }
    }
    ctx->pc = 0x30CBB4u;
    // 0x30cbb4: 0xc0cb30a  jal         func_32CC28
    ctx->pc = 0x30CBB4u;
    SET_GPR_U32(ctx, 31, 0x30CBBCu);
    ctx->pc = 0x30CBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CBB4u;
    // 0x30cbb8: 0x8e040320  lw          $a0, 0x320($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC28u, 0x30CBB4u, 0x30CBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CBBCu;
label_30cbbc:
    // 0x30cbbc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x30CBBCu;
    {
        const bool branch_taken_0x30cbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CBBCu;
        // 0x30cbc0: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cbbc) {
            ctx->pc = 0x30CC2Cu;
            goto label_30cc2c;
        }
    }
    ctx->pc = 0x30CBC4u;
    // 0x30cbc4: 0x0  nop
    ctx->pc = 0x30cbc4u;
    // NOP
label_30cbc8:
    // 0x30cbc8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x30cbc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cbcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30cbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cbd0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30cbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cbd4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x30cbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x30cbd8: 0xc0c39e0  jal         func_30E780
    ctx->pc = 0x30CBD8u;
    SET_GPR_U32(ctx, 31, 0x30CBE0u);
    ctx->pc = 0x30CBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CBD8u;
    // 0x30cbdc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E780u, 0x30CBD8u, 0x30CBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CBE0u;
label_30cbe0:
    // 0x30cbe0: 0x32840001  andi        $a0, $s4, 0x1
    ctx->pc = 0x30cbe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x30cbe4: 0x951018  mult        $v0, $a0, $s5
    ctx->pc = 0x30cbe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30cbe8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x30cbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30cbec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30cbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cbf0: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x30cbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x30cbf4: 0xc0cc0c2  jal         func_330308
    ctx->pc = 0x30CBF4u;
    SET_GPR_U32(ctx, 31, 0x30CBFCu);
    ctx->pc = 0x30CBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CBF4u;
    // 0x30cbf8: 0x24840340  addiu       $a0, $a0, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330308u, 0x30CBF4u, 0x30CBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CBFCu;
label_30cbfc:
    // 0x30cbfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30cbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc00: 0xc0cbf98  jal         func_32FE60
    ctx->pc = 0x30CC00u;
    SET_GPR_U32(ctx, 31, 0x30CC08u);
    ctx->pc = 0x30CC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CC00u;
    // 0x30cc04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FE60u, 0x30CC00u, 0x30CC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC08u;
label_30cc08:
    // 0x30cc08: 0xc0cb31c  jal         func_32CC70
    ctx->pc = 0x30CC08u;
    SET_GPR_U32(ctx, 31, 0x30CC10u);
    ctx->pc = 0x32CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC70u, 0x30CC08u, 0x30CC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC10u;
label_30cc10:
    // 0x30cc10: 0xc0c6870  jal         func_31A1C0
    ctx->pc = 0x30CC10u;
    SET_GPR_U32(ctx, 31, 0x30CC18u);
    ctx->pc = 0x31A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1C0u, 0x30CC10u, 0x30CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC18u;
label_30cc18:
    // 0x30cc18: 0xc0c6878  jal         func_31A1E0
    ctx->pc = 0x30CC18u;
    SET_GPR_U32(ctx, 31, 0x30CC20u);
    ctx->pc = 0x31A1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1E0u, 0x30CC18u, 0x30CC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC20u;
label_30cc20:
    // 0x30cc20: 0xc0cb30a  jal         func_32CC28
    ctx->pc = 0x30CC20u;
    SET_GPR_U32(ctx, 31, 0x30CC28u);
    ctx->pc = 0x30CC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CC20u;
    // 0x30cc24: 0x8e040320  lw          $a0, 0x320($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC28u, 0x30CC20u, 0x30CC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC28u;
label_30cc28:
    // 0x30cc28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30cc28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30cc2c:
    // 0x30cc2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30cc2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30cc30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30cc30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30cc34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30cc34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30cc38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30cc38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cc3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x30cc3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30cc40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x30cc40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cc44: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x30cc44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30cc48: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x30cc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30cc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x30CC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC4Cu;
        // 0x30cc50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CC54u;
    // 0x30cc54: 0x0  nop
    ctx->pc = 0x30cc54u;
    // NOP
    ctx->pc = 0x30cc58u;
}
